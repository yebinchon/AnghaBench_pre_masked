
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct readelf {size_t* vs; int vs_sz; size_t ver_sz; TYPE_2__* ver; TYPE_1__* vs_s; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct readelf *VAR_2)
{
 int VAR_3;
 uint16_t VAR_4;

 if (VAR_2->vs_s == ((void*)0) || VAR_2->ver == ((void*)0) || VAR_2->vs == ((void*)0))
  return;
 FUNC_0("\nVersion symbol section (%s):\n", VAR_2->vs_s->name);
 for (VAR_3 = 0; VAR_3 < VAR_2->vs_sz; VAR_3++) {
  if ((VAR_3 & 3) == 0) {
   if (VAR_3 > 0)
    FUNC_1('\n');
   FUNC_0("  %03x:", VAR_3);
  }
  VAR_4 = VAR_2->vs[VAR_3] & VAR_1;
  if (VAR_4 >= VAR_2->ver_sz || VAR_2->ver[VAR_4].name == ((void*)0)) {
   FUNC_2("invalid versym version index %u", VAR_2->vs[VAR_3]);
   break;
  }
  if (VAR_2->vs[VAR_3] & VAR_0)
   FUNC_0(" %3xh %-12s ", VAR_4,
       VAR_2->ver[VAR_2->vs[VAR_3] & VAR_1].name);
  else
   FUNC_0(" %3x %-12s ", VAR_4, VAR_2->ver[VAR_2->vs[VAR_3]].name);
 }
 FUNC_1('\n');
}
