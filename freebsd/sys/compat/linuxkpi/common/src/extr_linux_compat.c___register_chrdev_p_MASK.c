
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct linux_cdev {int kobj; struct file_operations const* ops; } ;
struct file_operations {int dummy; } ;
typedef int gid_t ;


 int FUNC_0 (struct linux_cdev*,int ,int ,int ,int) ;
 struct linux_cdev* FUNC_1 () ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (unsigned int,int) ;

int
FUNC_4(unsigned int VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, const char *VAR_3,
    const struct file_operations *VAR_4, uid_t VAR_5,
    gid_t VAR_6, int VAR_7)
{
 struct linux_cdev *VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = VAR_1; VAR_10 < VAR_1 + VAR_2; VAR_10++) {
  VAR_8 = FUNC_1();
  VAR_8->ops = VAR_4;
  FUNC_2(&VAR_8->kobj, VAR_3);

  VAR_9 = FUNC_0(VAR_8, FUNC_3(VAR_0, VAR_10), VAR_5, VAR_6, VAR_7);
  if (VAR_9 != 0)
   break;
 }
 return (VAR_9);
}
