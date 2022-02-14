
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tftp_handle {int tftp_tsize; } ;
struct stat {int st_mode; int st_nlink; int st_size; scalar_t__ st_gid; scalar_t__ st_uid; } ;
struct open_file {struct tftp_handle* f_fsdata; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct open_file *VAR_1, struct stat *VAR_2)
{
 struct tftp_handle *VAR_3;
 VAR_3 = VAR_1->f_fsdata;

 VAR_2->st_mode = 0444 | VAR_0;
 VAR_2->st_nlink = 1;
 VAR_2->st_uid = 0;
 VAR_2->st_gid = 0;
 VAR_2->st_size = VAR_3->tftp_tsize;
 return (0);
}
