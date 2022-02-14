
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int orig; } ;
typedef int SCR ;
typedef TYPE_1__ CL_PRIVATE ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(SCR *VAR_0, u_long *VAR_1)
{
 CL_PRIVATE *VAR_2;
 VAR_2 = FUNC_0(VAR_0);
 switch (FUNC_1(&VAR_2->orig)) {
 case 130:
 case 128:
 case 136:
 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
  *VAR_1 = 600;
  break;
 case 135:
  *VAR_1 = 1200;
  break;
 default:
  *VAR_1 = 9600;
  break;
 }
 return (0);
}
