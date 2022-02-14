
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {TYPE_3__* baton; } ;
typedef TYPE_2__ svn_diff_tree_processor_t ;
struct merge_dir_baton_t {int dummy; } ;
struct TYPE_8__ {TYPE_1__* target; } ;
typedef TYPE_3__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,char const*,int ,int ,int ,struct merge_dir_baton_t*,int *) ;
 char* FUNC_2 (int ,char const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_4,
                  void *VAR_5,
                  const svn_diff_tree_processor_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  merge_cmd_baton_t *VAR_8 = VAR_6->baton;
  struct merge_dir_baton_t *VAR_9 = VAR_5;

  const char *VAR_10 = FUNC_2(VAR_8->target->abspath,
                                              VAR_4, VAR_7);

  FUNC_0(FUNC_1(VAR_8, VAR_10, VAR_1,
                      VAR_2, VAR_3,
                      VAR_9, VAR_7));

  return VAR_0;
}
