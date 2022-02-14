
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {int st_mode; int st_uid; int st_gid; int st_size; } ;
struct open_file {int f_fsdata; } ;


 int FUNC_0 (int ,int ,int*,int*,int*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_1, struct stat *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 uint64_t VAR_6;

 FUNC_0(VAR_0, VAR_1->f_fsdata, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 VAR_2->st_mode = VAR_3;
 VAR_2->st_uid = VAR_4;
 VAR_2->st_gid = VAR_5;
 VAR_2->st_size = VAR_6;
 return (0);
}
