
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tarfile {int tf_size; } ;
struct stat {int st_size; int st_blocks; int st_mode; } ;
struct open_file {scalar_t__ f_fsdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct tarfile*) ;
 int FUNC_1 (struct stat*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_1, struct stat *VAR_2)
{
 struct tarfile *VAR_3;

 VAR_3 = (struct tarfile *)VAR_1->f_fsdata;
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->st_mode = FUNC_0(VAR_3);
 VAR_2->st_size = VAR_3->tf_size;
 VAR_2->st_blocks = (VAR_3->tf_size + 511) / 512;
 return (0);
}
