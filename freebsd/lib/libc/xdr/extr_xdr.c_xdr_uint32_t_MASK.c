
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
typedef int u_int32_t ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__*,long*) ;
 int FUNC_1 (TYPE_1__*,long*) ;

bool_t
FUNC_2(XDR *VAR_2, uint32_t *VAR_3)
{
 u_long VAR_4;

 switch (VAR_2->x_op) {

 case 129:
  VAR_4 = (u_long) *VAR_3;
  return (FUNC_1(VAR_2, (long *)&VAR_4));

 case 130:
  if (!FUNC_0(VAR_2, (long *)&VAR_4)) {
   return (VAR_0);
  }
  *VAR_3 = (u_int32_t) VAR_4;
  return (VAR_1);

 case 128:
  return (VAR_1);
 }

 return (VAR_0);
}
