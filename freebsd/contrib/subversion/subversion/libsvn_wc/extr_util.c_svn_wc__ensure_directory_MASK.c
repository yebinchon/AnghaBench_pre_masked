
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (char const*,scalar_t__*,int *) ;
 int FUNC_6 (char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_7(const char *VAR_4,
                         apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;

  FUNC_0(FUNC_5(VAR_4, &VAR_6, VAR_5));

  if (VAR_6 != VAR_3 && VAR_6 != VAR_2)
    {



      return FUNC_4(VAR_0, ((void*)0),
                               FUNC_2("'%s' is not a directory"),
                               FUNC_3(VAR_4, VAR_5));
    }
  else if (VAR_6 == VAR_3)
    {

      FUNC_0(FUNC_6(VAR_4, VAR_5));
    }
  else
    FUNC_1(VAR_6 == VAR_2);

  return VAR_1;
}
