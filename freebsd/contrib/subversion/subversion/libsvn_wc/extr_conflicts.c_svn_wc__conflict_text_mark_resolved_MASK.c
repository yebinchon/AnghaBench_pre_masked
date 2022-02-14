
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* svn_wc_notify_func2_t ) (void*,int ,int *) ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc_conflict_choice_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,scalar_t__*,int ,char const*,int *,int ,int *,int ,int *,int ,void*,int *,int *) ;
 int FUNC_2 (int ,char const*,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int **,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_4 (int ,char const*,int ,void*,int *) ;
 int FUNC_5 (char const*,int ,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_6(svn_wc_context_t *VAR_4,
                                    const char *VAR_5,
                                    svn_wc_conflict_choice_t VAR_6,
                                    svn_cancel_func_t VAR_7,
                                    void *VAR_8,
                                    svn_wc_notify_func2_t VAR_9,
                                    void *VAR_10,
                                    apr_pool_t *VAR_11)
{
  svn_skel_t *VAR_12;
  svn_skel_t *VAR_13;
  svn_boolean_t VAR_14;

  FUNC_0(FUNC_3(&VAR_13, ((void*)0), ((void*)0),
                                   VAR_4->db, VAR_5,
                                   VAR_11, VAR_11));

  if (!VAR_13)
    return VAR_1;

  FUNC_0(FUNC_1(&VAR_12, &VAR_14,
                                            VAR_4->db, VAR_5,
                                            VAR_13, VAR_6,
                                            ((void*)0), VAR_0, ((void*)0),
                                            VAR_7, VAR_8,
                                            VAR_11, VAR_11));

  FUNC_0(FUNC_2(VAR_4->db, VAR_5,
                                      VAR_2, VAR_0, VAR_0,
                                      VAR_12, VAR_11));

  FUNC_0(FUNC_4(VAR_4->db, VAR_5,
                         VAR_7, VAR_8,
                         VAR_11));

  if (VAR_14 && VAR_9)
    VAR_9(VAR_10,
                FUNC_5(VAR_5,
                                     VAR_3,
                                     VAR_11),
                VAR_11);

  return VAR_1;
}
