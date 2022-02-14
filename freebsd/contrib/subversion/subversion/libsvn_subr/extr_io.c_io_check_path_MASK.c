
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,char const*,int,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int FUNC_6 (int *,scalar_t__*,int *) ;
 int FUNC_7 (char const*,int *) ;
 int * FUNC_8 (scalar_t__,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_5,
              svn_boolean_t VAR_6,
              svn_boolean_t *VAR_7,
              svn_node_kind_t *VAR_8,
              apr_pool_t *VAR_9)
{
  apr_int32_t VAR_10;
  apr_finfo_t VAR_11;
  apr_status_t VAR_12;
  const char *VAR_13;
  svn_boolean_t VAR_14 = VAR_2;

  if (VAR_5[0] == '\0')
    VAR_5 = ".";



  FUNC_1(FUNC_5(&VAR_13, VAR_5, VAR_9));

  VAR_10 = VAR_6 ? VAR_1 : (VAR_1 | VAR_0);
  VAR_12 = FUNC_4(&VAR_11, VAR_13, VAR_10, VAR_9);

  if (FUNC_0(VAR_12))
    *VAR_8 = VAR_4;
  else if (FUNC_2(VAR_12))
    *VAR_8 = VAR_4;
  else if (VAR_12)
    return FUNC_8(VAR_12, FUNC_3("Can't check path '%s'"),
                              FUNC_7(VAR_5, VAR_9));
  else
    FUNC_6(VAR_8, &VAR_14, &VAR_11);

  *VAR_7 = VAR_14;

  return VAR_3;
}
