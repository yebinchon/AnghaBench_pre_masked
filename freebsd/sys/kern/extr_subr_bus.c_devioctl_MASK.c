
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int nonblock; int async; int sigio; } ;


 int VAR_0 ;







 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5, struct thread *VAR_6)
{
 switch (VAR_3) {

 case 131:
  if (*(int*)VAR_4)
   VAR_1.nonblock = 1;
  else
   VAR_1.nonblock = 0;
  return (0);
 case 134:
  if (*(int*)VAR_4)
   VAR_1.async = 1;
  else
   VAR_1.async = 0;
  return (0);
 case 128:
  return FUNC_1(*(int *)VAR_4, &VAR_1.sigio);
 case 132:
  *(int *)VAR_4 = FUNC_0(&VAR_1.sigio);
  return (0);


 case 133:
 case 130:
 case 129:
 default:
  break;
 }
 return (VAR_0);
}
