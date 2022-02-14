
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_fsdata; } ;
struct file {scalar_t__ f_seekp; } ;
struct dirent {int d_name; int d_type; } ;
struct direct {scalar_t__ d_reclen; scalar_t__ d_ino; int d_name; int d_type; } ;
typedef scalar_t__ ino_t ;


 scalar_t__ FUNC_0 (struct file*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct open_file*,char**,size_t*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_2, struct dirent *VAR_3)
{
 struct file *VAR_4 = (struct file *)VAR_2->f_fsdata;
 struct direct *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 int VAR_8;




again:
 if (VAR_4->f_seekp >= FUNC_0(VAR_4, VAR_1))
  return (VAR_0);
 VAR_8 = FUNC_1(VAR_2, &VAR_6, &VAR_7);
 if (VAR_8)
  return (VAR_8);
 VAR_5 = (struct direct *)VAR_6;
 VAR_4->f_seekp += VAR_5->d_reclen;
 if (VAR_5->d_ino == (ino_t)0)
  goto again;
 VAR_3->d_type = VAR_5->d_type;
 FUNC_2(VAR_3->d_name, VAR_5->d_name);
 return (0);
}
