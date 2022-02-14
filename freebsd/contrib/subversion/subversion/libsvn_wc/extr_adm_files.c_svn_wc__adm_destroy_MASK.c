
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int ,int ,void*,int *) ;
 int FUNC_4 (char const*,int *,int *) ;
 int FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_7 (int *,char const*,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_2,
                    const char *VAR_3,
                    svn_cancel_func_t VAR_4,
                    void *VAR_5,
                    apr_pool_t *VAR_6)
{
  svn_boolean_t VAR_7;

  FUNC_1(FUNC_2(VAR_3));

  FUNC_0(FUNC_7(VAR_2, VAR_3, VAR_6));

  FUNC_0(FUNC_6(&VAR_7, VAR_2, VAR_3, VAR_6));





  if (VAR_7)
    {
      FUNC_0(FUNC_5(VAR_2, VAR_3, VAR_6));
      FUNC_0(FUNC_3(FUNC_4(VAR_3, ((void*)0),
                                                   VAR_6),
                                 VAR_0,
                                 VAR_4, VAR_5,
                                 VAR_6));
    }

  return VAR_1;
}
