
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 char const* FUNC_1 (char const*,int *) ;
 int * FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (char const*,int *) ;
 int FUNC_4 (int *,char const*,int ,void*,int *) ;
 int FUNC_5 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_6 (scalar_t__*,int *,char const*,scalar_t__,scalar_t__,int *,int *,int ,void*,int *) ;
 int FUNC_7 (int *,char const*,int ,void*,int *) ;
 int FUNC_8 (int *,char const*,int *) ;

svn_error_t *
FUNC_9(svn_wc__db_t *VAR_3,
                                              const char *VAR_4,
                                              svn_boolean_t VAR_5,
                                              svn_cancel_func_t VAR_6,
                                              void *VAR_7,
                                              apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9 = VAR_0;
  svn_boolean_t VAR_10;
  svn_error_t *VAR_11 = ((void*)0);

  FUNC_0(FUNC_5(&VAR_10, VAR_3, VAR_4, VAR_8));

  FUNC_0(FUNC_8(VAR_3, VAR_10 ? VAR_4
                                          : FUNC_1(VAR_4,
                                                               VAR_8),
                              VAR_8));

  FUNC_0(FUNC_6(&VAR_9,
                                    VAR_3, VAR_4,
                                    VAR_5 ,
                                    VAR_5 ,
                                    ((void*)0), ((void*)0),
                                    VAR_6, VAR_7,
                                    VAR_8));

  FUNC_0(FUNC_7(VAR_3, VAR_4,
                         VAR_6, VAR_7,
                         VAR_8));

  if (VAR_10)
    {

      FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_6, VAR_7,
                                  VAR_8));


      if (!VAR_9 && VAR_5)
        VAR_11 = FUNC_3(VAR_4, VAR_8);
    }

  if (VAR_9 || VAR_11)
    return FUNC_2(VAR_1, VAR_11, ((void*)0));

  return VAR_2;
}
