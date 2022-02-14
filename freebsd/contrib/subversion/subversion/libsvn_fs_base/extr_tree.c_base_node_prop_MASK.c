
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct node_prop_args {char const* path; char const* propname; TYPE_1__* root; int ** value_p; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,struct node_prop_args*,int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_string_t **VAR_3,
               svn_fs_root_t *VAR_4,
               const char *VAR_5,
               const char *VAR_6,
               apr_pool_t *VAR_7)
{
  struct node_prop_args VAR_8;
  svn_string_t *VAR_9;
  apr_pool_t *VAR_10 = FUNC_2(VAR_7);

  VAR_8.value_p = &VAR_9;
  VAR_8.root = VAR_4;
  VAR_8.path = VAR_5;
  VAR_8.propname = VAR_6;
  FUNC_0(FUNC_1(VAR_4->fs, VAR_2, &VAR_8,
                                 VAR_0, VAR_10));
  *VAR_3 = FUNC_4(VAR_9, VAR_7);
  FUNC_3(VAR_10);
  return VAR_1;
}
