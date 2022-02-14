
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int bool_t ;
struct TYPE_6__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_7__ {scalar_t__ fbtbc; scalar_t__ last_frag; } ;
typedef TYPE_2__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, char *VAR_3, u_int VAR_4)
{
 RECSTREAM *VAR_5 = (RECSTREAM *)(VAR_2->x_private);
 int VAR_6;

 while (VAR_4 > 0) {
  VAR_6 = (int)VAR_5->fbtbc;
  if (VAR_6 == 0) {
   if (VAR_5->last_frag)
    return (VAR_0);
   if (! FUNC_1(VAR_5))
    return (VAR_0);
   continue;
  }
  VAR_6 = (VAR_4 < VAR_6) ? VAR_4 : VAR_6;
  if (! FUNC_0(VAR_5, VAR_3, VAR_6))
   return (VAR_0);
  VAR_3 += VAR_6;
  VAR_5->fbtbc -= VAR_6;
  VAR_4 -= VAR_6;
 }
 return (VAR_1);
}
