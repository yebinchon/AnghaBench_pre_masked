
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char const*,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int ,char const*,char const*,int *,int *) ;
 int FUNC_3 (int ,char const*,char const*,int *,int *) ;
 int FUNC_4 (int ,char const*,int ,void*,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int ,int ,int ,void*,int *) ;

svn_error_t *
FUNC_6(svn_wc_context_t *VAR_4,
                        const char *VAR_5,
                        const char *VAR_6,
                        svn_boolean_t VAR_7,
                        svn_cancel_func_t VAR_8,
                        void *VAR_9,
                        apr_pool_t *VAR_10)
{
  svn_wc__db_status_t VAR_11;
  svn_node_kind_t VAR_12;

  FUNC_0(FUNC_2(&VAR_11, &VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0),
                                   VAR_4->db, VAR_6, VAR_5,
                                   VAR_10, VAR_10));

  FUNC_0(FUNC_3(VAR_4->db, VAR_6, VAR_5,
                                     ((void*)0), VAR_10));

  if (VAR_7)
    return VAR_1;

  if (VAR_12 == VAR_3)
    FUNC_0(FUNC_5(VAR_4, VAR_6,
                                                 VAR_2, VAR_2,
                                                 VAR_8, VAR_9,
                                                 VAR_10));
  else
    {
      FUNC_0(FUNC_1(VAR_4->db, VAR_6,
                                     VAR_0, VAR_2, VAR_0,
                                     0,
                                     ((void*)0), ((void*)0), VAR_10));
      FUNC_0(FUNC_4(VAR_4->db, VAR_6,
                             VAR_8, VAR_9,
                             VAR_10));
    }

  return VAR_1;
}
