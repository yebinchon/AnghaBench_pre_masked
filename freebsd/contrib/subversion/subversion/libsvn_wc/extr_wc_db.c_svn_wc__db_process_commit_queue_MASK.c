
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_4__ {int wcroot; } ;
typedef TYPE_1__ svn_wc__db_commit_queue_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ,char const*,int *) ;

svn_error_t *
FUNC_2(svn_wc__db_t *VAR_1,
                                svn_wc__db_commit_queue_t *VAR_2,
                                svn_revnum_t VAR_3,
                                apr_time_t VAR_4,
                                const char *VAR_5,
                                apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_1(VAR_1, VAR_2,
                                              VAR_3, VAR_4,
                                              VAR_5, VAR_6),
                        VAR_2->wcroot);

  return VAR_0;
}
