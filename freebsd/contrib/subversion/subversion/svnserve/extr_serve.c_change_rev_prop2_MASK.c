
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int server_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,int ,char const*,int const* const*,int *,int *) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int * FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *,char*,int *,char const**,int **,scalar_t__*,int **) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_ra_svn_conn_t *VAR_2,
                 apr_pool_t *VAR_3,
                 svn_ra_svn__list_t *VAR_4,
                 void *VAR_5)
{
  server_baton_t *VAR_6 = VAR_5;
  svn_revnum_t VAR_7;
  const char *VAR_8;
  svn_string_t *VAR_9;
  const svn_string_t *const *VAR_10;
  svn_string_t *VAR_11;
  svn_boolean_t VAR_12;

  FUNC_0(FUNC_4(VAR_4, "rc(?s)(b?s)",
                                  &VAR_7, &VAR_8, &VAR_9,
                                  &VAR_12, &VAR_11));


  if (VAR_12)
    VAR_10 = ((void*)0);
  else
    VAR_10 = (const svn_string_t *const *)&VAR_11;


  if (VAR_12 && VAR_11)
    {
      svn_error_t *VAR_13;
      VAR_13 = FUNC_3(VAR_0, ((void*)0),
                             "'previous-value' and 'dont-care' cannot both be "
                             "set in 'change-rev-prop2' request");
      return FUNC_2(VAR_13, VAR_6, VAR_2, VAR_3);
    }


  FUNC_0(FUNC_1(VAR_2, VAR_6, VAR_7, VAR_8, VAR_10, VAR_9, VAR_3));

  return VAR_1;
}
