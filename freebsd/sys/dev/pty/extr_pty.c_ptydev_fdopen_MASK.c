
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {int dummy; } ;
struct cdev {int si_drv1; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (uintptr_t*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (struct cdev*) ;
 int FUNC_4 (int,struct thread*,struct file*,struct cdev*,char*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6, struct file *VAR_7)
{
 int VAR_8;
 char VAR_9[6];

 if (!FUNC_0((uintptr_t *)&VAR_4->si_drv1, 0, 1))
  return (VAR_0);


 FUNC_5(VAR_9, FUNC_3(VAR_4), sizeof(VAR_9));
 VAR_9[0] = 't';

 VAR_8 = FUNC_4(VAR_5 & (VAR_1|VAR_2), VAR_6, VAR_7, VAR_4, VAR_9);
 if (VAR_8 != 0) {
  FUNC_2(VAR_4);
  return (VAR_8);
 }


 FUNC_1(&VAR_3, "is using legacy pty devices");

 return (0);
}
