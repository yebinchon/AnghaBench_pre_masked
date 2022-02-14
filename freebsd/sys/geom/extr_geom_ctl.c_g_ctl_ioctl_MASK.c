
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;

 int FUNC_0 (struct cdev*,int,int ,int,struct thread*) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4, struct thread *VAR_5)
{
 int VAR_6;

 switch(VAR_2) {
 case 128:
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }
 return (VAR_6);

}
