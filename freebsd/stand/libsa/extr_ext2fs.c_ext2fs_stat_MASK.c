
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; int st_gid; int st_uid; int st_mode; } ;
struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_2__ {int di_size; int di_gid; int di_uid; int di_mode; } ;
struct file {TYPE_1__ f_di; } ;



__attribute__((used)) static int
FUNC_0(struct open_file *VAR_0, struct stat *VAR_1)
{
 struct file *VAR_2 = (struct file *)VAR_0->f_fsdata;


 VAR_1->st_mode = VAR_2->f_di.di_mode;
 VAR_1->st_uid = VAR_2->f_di.di_uid;
 VAR_1->st_gid = VAR_2->f_di.di_gid;
 VAR_1->st_size = VAR_2->f_di.di_size;
 return (0);
}
