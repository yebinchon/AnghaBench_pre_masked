
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfsmount {int dummy; } ;
struct open_file {struct file* f_fsdata; int * f_dev; scalar_t__ f_devdata; } ;
struct file {scalar_t__ f_seekp; int f_dnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int,int) ;
 int FUNC_1 (struct file*) ;
 int VAR_2 ;
 int FUNC_2 (struct zfsmount*,char const*,int *) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, struct open_file *VAR_4)
{
 struct zfsmount *VAR_5 = (struct zfsmount *)VAR_4->f_devdata;
 struct file *VAR_6;
 int VAR_7;

 if (VAR_4->f_dev != &VAR_2)
  return (VAR_0);


 VAR_6 = FUNC_0(1, sizeof(struct file));
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_4->f_fsdata = VAR_6;

 VAR_7 = FUNC_2(VAR_5, VAR_3, &VAR_6->f_dnode);
 VAR_6->f_seekp = 0;
 if (VAR_7) {
  VAR_4->f_fsdata = ((void*)0);
  FUNC_1(VAR_6);
 }
 return (VAR_7);
}
