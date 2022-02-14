
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_5__ {int local_abspath; } ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int svn_client_conflict_option_id_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int **,TYPE_1__*,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,int *,int ,int ) ;

svn_error_t *
FUNC_7(
  svn_client_conflict_t *VAR_2,
  svn_client_conflict_option_id_t VAR_3,
  svn_client_ctx_t *VAR_4,
  apr_pool_t *VAR_5)
{
  apr_array_header_t *VAR_6;
  svn_client_conflict_option_t *VAR_7;

  FUNC_0(FUNC_3(
            &VAR_6, VAR_2, VAR_4,
            VAR_5, VAR_5));
  VAR_7 = FUNC_2(VAR_6,
                                                 VAR_3);
  if (VAR_7 == ((void*)0))
    return FUNC_6(VAR_0,
                             ((void*)0),
                             FUNC_1("Inapplicable conflict resolution option "
                               "given for conflicted path '%s'"),
                             FUNC_5(VAR_2->local_abspath,
                                                    VAR_5));

  FUNC_0(FUNC_4(VAR_2, VAR_7, VAR_4, VAR_5));

  return VAR_1;
}
