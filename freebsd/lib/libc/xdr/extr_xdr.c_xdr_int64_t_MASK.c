
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int64_t ;
typedef int int64_t ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__*,long*) ;
 int FUNC_1 (TYPE_1__*,long*) ;

bool_t
FUNC_2(XDR *VAR_2, int64_t *VAR_3)
{
 u_long VAR_4[2];

 switch (VAR_2->x_op) {
 case 129:
  VAR_4[0] = (u_long)((u_int64_t)*VAR_3 >> 32) & 0xffffffff;
  VAR_4[1] = (u_long)((u_int64_t)*VAR_3) & 0xffffffff;
  if (FUNC_1(VAR_2, (long *)&VAR_4[0]) == VAR_0)
   return (VAR_0);
  return (FUNC_1(VAR_2, (long *)&VAR_4[1]));
 case 130:
  if (FUNC_0(VAR_2, (long *)&VAR_4[0]) == VAR_0)
   return (VAR_0);
  if (FUNC_0(VAR_2, (long *)&VAR_4[1]) == VAR_0)
   return (VAR_0);
  *VAR_3 = (int64_t)
      (((u_int64_t)VAR_4[0] << 32) | ((u_int64_t)VAR_4[1]));
  return (VAR_1);
 case 128:
  return (VAR_1);
 }

 return (VAR_0);
}
