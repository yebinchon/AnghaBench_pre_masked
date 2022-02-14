
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct node_created_rev_args {char const* path; int revision; TYPE_1__* root; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct node_created_rev_args*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_revnum_t *VAR_4,
                      svn_fs_root_t *VAR_5,
                      const char *VAR_6,
                      apr_pool_t *VAR_7)
{
  struct node_created_rev_args VAR_8;

  VAR_8.revision = VAR_0;
  VAR_8.root = VAR_5;
  VAR_8.path = VAR_6;
  FUNC_0(FUNC_1
          (VAR_5->fs, VAR_3, &VAR_8, VAR_2, VAR_7));
  *VAR_4 = VAR_8.revision;
  return VAR_1;
}
