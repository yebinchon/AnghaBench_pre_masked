
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct delete_args {char const* path; TYPE_1__* root; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,struct delete_args*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_fs_root_t *VAR_2,
                 const char *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct delete_args VAR_5;

  VAR_5.root = VAR_2;
  VAR_5.path = VAR_3;
  return FUNC_0(VAR_2->fs, VAR_1, &VAR_5,
                                VAR_0, VAR_4);
}
