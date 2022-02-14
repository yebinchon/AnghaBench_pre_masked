
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_cdev {int kobj; struct file_operations const* ops; } ;
struct file_operations {int dummy; } ;


 int FUNC_0 (struct linux_cdev*,int ,int) ;
 struct linux_cdev* FUNC_1 () ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (unsigned int,int) ;

int
FUNC_4(unsigned int VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, const char *VAR_3,
    const struct file_operations *VAR_4)
{
 struct linux_cdev *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = VAR_1; VAR_7 < VAR_1 + VAR_2; VAR_7++) {
  VAR_5 = FUNC_1();
  VAR_5->ops = VAR_4;
  FUNC_2(&VAR_5->kobj, VAR_3);

  VAR_6 = FUNC_0(VAR_5, FUNC_3(VAR_0, VAR_7), 1);
  if (VAR_6 != 0)
   break;
 }
 return (VAR_6);
}
