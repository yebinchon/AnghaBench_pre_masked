
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct copied_from_args {char const* path; scalar_t__ result_path; int result_rev; int * pool; TYPE_1__* root; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int ,struct copied_from_args*,int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_revnum_t *VAR_3,
                 const char **VAR_4,
                 svn_fs_root_t *VAR_5,
                 const char *VAR_6,
                 apr_pool_t *VAR_7)
{
  struct copied_from_args VAR_8;
  apr_pool_t *VAR_9 = FUNC_3(VAR_7);
  VAR_8.root = VAR_5;
  VAR_8.path = VAR_6;
  VAR_8.pool = VAR_7;

  FUNC_0(FUNC_2(VAR_5->fs, VAR_2, &VAR_8,
                                 VAR_0, VAR_9));

  *VAR_3 = VAR_8.result_rev;
  *VAR_4 = VAR_8.result_path ? FUNC_1(VAR_7, VAR_8.result_path) : ((void*)0);

  FUNC_4(VAR_9);
  return VAR_1;
}
