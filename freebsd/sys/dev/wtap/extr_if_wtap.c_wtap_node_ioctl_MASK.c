
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

int
FUNC_1(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3,
    int VAR_4, struct thread *VAR_5)
{
 int VAR_6 = 0;

 switch(VAR_2) {
 default:
  FUNC_0("Unknown WTAP IOCTL\n");
  VAR_6 = VAR_0;
 }
 return VAR_6;
}
