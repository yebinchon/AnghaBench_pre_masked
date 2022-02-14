
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_2__ {scalar_t__ di_size; } ;
struct file {scalar_t__ f_seekp; TYPE_1__ f_di; } ;
struct ext2dirent {scalar_t__ d_reclen; scalar_t__ d_ino; size_t d_namlen; int d_name; int d_type; } ;
struct dirent {char* d_name; int d_type; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct open_file*,char**,size_t*) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_1, struct dirent *VAR_2)
{
 struct file *VAR_3 = (struct file *)VAR_1->f_fsdata;
 struct ext2dirent *VAR_4;
 char *VAR_5;
 size_t VAR_6;
 int VAR_7;




again:
 if (VAR_3->f_seekp >= VAR_3->f_di.di_size)
  return (VAR_0);
 VAR_7 = FUNC_1(VAR_1, &VAR_5, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 VAR_4 = (struct ext2dirent *)VAR_5;
 VAR_3->f_seekp += VAR_4->d_reclen;
 if (VAR_4->d_ino == (ino_t)0)
  goto again;
 VAR_2->d_type = FUNC_0(VAR_4->d_type);
 FUNC_2(VAR_2->d_name, VAR_4->d_name, VAR_4->d_namlen);
 VAR_2->d_name[VAR_4->d_namlen] = '\0';
 return (0);
}
