
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int sc_sigio; int sc_state; } ;


 int VAR_0 ;





 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8, struct thread *VAR_9)
{

 switch (VAR_6) {


 case 131:
  *(int *)VAR_7 = FUNC_2(VAR_4);
  break;

 case 132:
  break;

 case 134:
  FUNC_3(&VAR_3);
  if (*(int *)VAR_7)
   VAR_2.sc_state |= VAR_1;
  else
   VAR_2.sc_state &= ~VAR_1;
  FUNC_4(&VAR_3);
  break;

 case 130:
  return (FUNC_1(*(int *)VAR_7, &VAR_2.sc_sigio));

 case 133:
  *(int *)VAR_7 = FUNC_0(&VAR_2.sc_sigio);
  break;


 case 128:
  return (FUNC_1(-(*(int *)VAR_7), &VAR_2.sc_sigio));


 case 129:
  *(int *)VAR_7 = -FUNC_0(&VAR_2.sc_sigio);
  break;

 default:
  return (VAR_0);
 }
 return (0);
}
