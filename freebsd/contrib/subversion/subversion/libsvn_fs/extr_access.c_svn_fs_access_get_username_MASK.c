
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* username; } ;
typedef TYPE_1__ svn_fs_access_t ;
typedef int svn_error_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(const char **VAR_1,
                           svn_fs_access_t *VAR_2)
{
  *VAR_1 = VAR_2->username;

  return VAR_0;
}
