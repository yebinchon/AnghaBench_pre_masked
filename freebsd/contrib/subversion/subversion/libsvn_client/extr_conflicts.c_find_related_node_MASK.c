
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_5__ {int pool; } ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (scalar_t__*,char const**,scalar_t__*,int **,TYPE_1__*,char const*,char const*,scalar_t__,int ,char const*,scalar_t__,int *,int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int **,char const**,char const*,int *,int *,int ,int ,int *,int *,int *) ;
 int FUNC_4 (char const**,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_3 ;
 char* FUNC_5 (char const*,char const*,int *) ;
 int FUNC_6 (int *,char*,scalar_t__,scalar_t__*,int *) ;
 char* FUNC_7 (char const*,int *) ;
 char* FUNC_8 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_4,
                  svn_revnum_t *VAR_5,
                  const char *VAR_6,
                  svn_revnum_t VAR_7,
                  const char *VAR_8,
                  svn_revnum_t VAR_9,
                  svn_client_conflict_t *VAR_10,
                  svn_client_ctx_t *VAR_11,
                  apr_pool_t *VAR_12,
                  apr_pool_t *VAR_13)
{
  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  svn_node_kind_t VAR_17;
  svn_ra_session_t *VAR_18;

  *VAR_4 = ((void*)0);
  *VAR_5 = VAR_1;

  FUNC_0(FUNC_4(&VAR_14, ((void*)0),
                                             VAR_10,
                                             VAR_13, VAR_13));
  VAR_15 = FUNC_5(VAR_14,
                                            VAR_6,
                                            VAR_13);
  FUNC_0(FUNC_3(&VAR_18,
                                               &VAR_16,
                                               VAR_15, ((void*)0),
                                               ((void*)0),
                                               VAR_0,
                                               VAR_0,
                                               VAR_11,
                                               VAR_13,
                                               VAR_13));
  FUNC_0(FUNC_6(VAR_18, "", VAR_7,
                            &VAR_17, VAR_13));
  if (VAR_17 == VAR_3)
    {
      svn_revnum_t VAR_19;
      const char *VAR_20;
      svn_node_kind_t VAR_21;
      const char *VAR_22;
      const char *VAR_23;
      apr_array_header_t *VAR_24;






      VAR_22 = FUNC_7(VAR_6,
                                              VAR_13);
      VAR_23 =
        FUNC_8(VAR_6, VAR_13);
      FUNC_0(FUNC_1(
                &VAR_19, &VAR_20,
                &VAR_21, &VAR_24,
                VAR_10, VAR_22,
                VAR_23,
                VAR_7, 0,
                VAR_8, VAR_9,
                VAR_11, VAR_10->pool, VAR_13));


      if (VAR_19 == VAR_1)
        return VAR_2;


      *VAR_4 = VAR_6;
      *VAR_5 = FUNC_2(VAR_19);
    }
  else
    {
      *VAR_4 = VAR_6;
      *VAR_5 = VAR_7;
    }

  return VAR_2;
}
