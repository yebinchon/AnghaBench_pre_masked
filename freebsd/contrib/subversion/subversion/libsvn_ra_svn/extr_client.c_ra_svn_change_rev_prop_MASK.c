
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_6__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*,int ,int *) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,int *,int ,char const*,int const*) ;
 int FUNC_6 (int *,int *,int ,char const*,int const*,scalar_t__,int const*) ;

__attribute__((used)) static svn_error_t *FUNC_7(svn_ra_session_t *VAR_4, svn_revnum_t VAR_5,
                                           const char *VAR_6,
                                           const svn_string_t *const *VAR_7,
                                           const svn_string_t *VAR_8,
                                           apr_pool_t *VAR_9)
{
  svn_ra_svn__session_baton_t *VAR_10 = VAR_4->priv;
  svn_ra_svn_conn_t *VAR_11 = VAR_10->conn;
  svn_boolean_t VAR_12;
  const svn_string_t *VAR_13;
  svn_boolean_t VAR_14;

  FUNC_0(FUNC_3(VAR_4, &VAR_14,
                                VAR_2,
                                VAR_9));

  if (VAR_7)
    {

      FUNC_1(VAR_14);

      VAR_12 = VAR_0;
      VAR_13 = *VAR_7;
    }
  else
    {
      VAR_12 = VAR_3;
      VAR_13 = ((void*)0);
    }

  if (VAR_14)
    FUNC_0(FUNC_6(VAR_11, VAR_9, VAR_5, VAR_6,
                                                   VAR_8, VAR_12,
                                                   VAR_13));
  else
    FUNC_0(FUNC_5(VAR_11, VAR_9, VAR_5, VAR_6,
                                                  VAR_8));

  FUNC_0(FUNC_2(VAR_10, VAR_9));
  FUNC_0(FUNC_4(VAR_11, VAR_9, ""));
  return VAR_1;
}
