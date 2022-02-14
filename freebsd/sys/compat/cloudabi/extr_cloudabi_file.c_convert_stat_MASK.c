
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_ctim; int st_mtim; int st_atim; int st_size; int st_nlink; int st_ino; int st_dev; } ;
struct TYPE_3__ {int st_ctim; int st_mtim; int st_atim; int st_size; int st_nlink; int st_ino; int st_dev; } ;
typedef TYPE_1__ cloudabi_filestat_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(const struct stat *VAR_0, cloudabi_filestat_t *VAR_1)
{
 cloudabi_filestat_t VAR_2 = {
  .st_dev = VAR_0->st_dev,
  .st_ino = VAR_0->st_ino,
  .st_nlink = VAR_0->st_nlink,
  .st_size = VAR_0->st_size,
 };

 FUNC_0(&VAR_0->st_atim, &VAR_2.st_atim);
 FUNC_0(&VAR_0->st_mtim, &VAR_2.st_mtim);
 FUNC_0(&VAR_0->st_ctim, &VAR_2.st_ctim);
 *VAR_1 = VAR_2;
}
