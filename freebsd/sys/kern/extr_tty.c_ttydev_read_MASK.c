
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct tty {int dummy; } ;
struct cdev {struct tty* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,struct uio*,int) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, struct uio *VAR_2, int VAR_3)
{
 struct tty *VAR_4 = VAR_1->si_drv1;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto done;
 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_4);





done: if (VAR_5 == VAR_0)
  VAR_5 = 0;
 return (VAR_5);
}
