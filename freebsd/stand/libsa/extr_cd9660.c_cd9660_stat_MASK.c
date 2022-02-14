
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; scalar_t__ st_gid; scalar_t__ st_uid; } ;
struct open_file {scalar_t__ f_fsdata; } ;
struct file {int f_flags; int f_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct open_file *VAR_6, struct stat *VAR_7)
{
 struct file *VAR_8 = (struct file *)VAR_6->f_fsdata;


 VAR_7->st_mode = VAR_5 | VAR_3 | VAR_4;
 if (VAR_8->f_flags & VAR_0)
  VAR_7->st_mode |= VAR_1;
 else
  VAR_7->st_mode |= VAR_2;
 VAR_7->st_uid = VAR_7->st_gid = 0;
 VAR_7->st_size = VAR_8->f_size;
 return 0;
}
