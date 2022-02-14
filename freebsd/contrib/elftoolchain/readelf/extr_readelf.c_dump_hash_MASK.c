
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section {scalar_t__ type; int entsize; } ;
struct TYPE_2__ {scalar_t__ e_machine; } ;
struct readelf {size_t shnum; TYPE_1__ ehdr; struct section* sl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct readelf*,struct section*) ;
 int FUNC_1 (struct section*) ;
 int FUNC_2 (struct readelf*,struct section*) ;

__attribute__((used)) static void
FUNC_3(struct readelf *VAR_3)
{
 struct section *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; (size_t) VAR_5 < VAR_3->shnum; VAR_5++) {
  VAR_4 = &VAR_3->sl[VAR_5];
  if (VAR_4->type == VAR_2 || VAR_4->type == VAR_1) {
   if (VAR_4->type == VAR_1)
    FUNC_0(VAR_3, VAR_4);
   else if (VAR_3->ehdr.e_machine == VAR_0 &&
       VAR_4->entsize == 8)
    FUNC_2(VAR_3, VAR_4);
   else
    FUNC_1(VAR_4);
  }
 }
}
