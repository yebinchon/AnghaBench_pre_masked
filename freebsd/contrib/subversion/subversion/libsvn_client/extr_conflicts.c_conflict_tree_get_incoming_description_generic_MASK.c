
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_operation_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ,int ,int ) ;
 char* FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_11(
  const char **VAR_7,
  svn_client_conflict_t *VAR_8,
  svn_client_ctx_t *VAR_9,
  apr_pool_t *VAR_10,
  apr_pool_t *VAR_11)
{
  const char *VAR_12;
  svn_node_kind_t VAR_13;
  svn_wc_conflict_action_t VAR_14;
  svn_wc_operation_t VAR_15;

  VAR_14 = FUNC_5(VAR_8);
  VAR_15 = FUNC_8(VAR_8);


  VAR_13 = VAR_2;
  if (VAR_14 == VAR_5 ||
      VAR_14 == VAR_4)
    {

      FUNC_0(FUNC_7(
                ((void*)0), ((void*)0), &VAR_13, VAR_8, VAR_11,
                VAR_11));
    }
  else if (VAR_14 == VAR_3 ||
           VAR_14 == VAR_6)
    {




      FUNC_0(FUNC_6(
                ((void*)0), ((void*)0), &VAR_13, VAR_8, VAR_11,
                VAR_11));
    }

  VAR_12 = FUNC_4(VAR_13, VAR_14,
                                    VAR_15);
  if (VAR_12)
    {
      *VAR_7 = FUNC_3(VAR_10, VAR_12);
    }
  else
    {



      *VAR_7 = FUNC_2(VAR_10,
                                       FUNC_1("incoming %s %s"),
                                       FUNC_9(VAR_13),
                                       FUNC_10(VAR_1,
                                                          VAR_14));
    }
  return VAR_0;
}
