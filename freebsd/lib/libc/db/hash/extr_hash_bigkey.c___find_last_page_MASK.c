
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_5__ {scalar_t__ page; } ;
typedef int HTAB ;
typedef TYPE_1__ BUFHEAD ;


 scalar_t__ FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int,TYPE_1__*,int ) ;

u_int16_t
FUNC_2(HTAB *VAR_2, BUFHEAD **VAR_3)
{
 BUFHEAD *VAR_4;
 u_int16_t *VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = *VAR_3;
 VAR_5 = (u_int16_t *)VAR_4->page;
 for (;;) {
  VAR_7 = VAR_5[0];






  if (VAR_5[2] == VAR_0 &&
      ((VAR_7 == 2) || (VAR_5[VAR_7] == VAR_1) || (FUNC_0(VAR_5))))
   break;

  VAR_6 = VAR_5[VAR_7 - 1];
  VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_4, 0);
  if (!VAR_4)
   return (0);
  VAR_5 = (u_int16_t *)VAR_4->page;
 }

 *VAR_3 = VAR_4;
 if (VAR_5[0] > 2)
  return (VAR_5[3]);
 else
  return (0);
}
