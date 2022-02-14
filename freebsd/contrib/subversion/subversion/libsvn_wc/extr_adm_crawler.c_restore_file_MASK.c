
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int *,char const*,int ,void*,int *) ;
 int FUNC_4 (int **,int *,char const*,int *,scalar_t__,int ,int *,int *) ;
 int FUNC_5 (int *,char const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_wc__db_t *VAR_2,
             const char *VAR_3,
             svn_boolean_t VAR_4,
             svn_boolean_t VAR_5,
             svn_cancel_func_t VAR_6,
             void *VAR_7,
             apr_pool_t *VAR_8)
{
  svn_skel_t *VAR_9;

  FUNC_0(FUNC_4(&VAR_9,
                                        VAR_2, VAR_3,
                                        ((void*)0) ,
                                        VAR_4,
                                        VAR_1 ,
                                        VAR_8, VAR_8));

  FUNC_0(FUNC_2(VAR_2,
                            FUNC_1(VAR_3, VAR_8),
                            VAR_9, VAR_8));


  FUNC_0(FUNC_5(VAR_2, VAR_3,
                         VAR_6, VAR_7,
                         VAR_8));


  if (VAR_5)
    FUNC_0(FUNC_3(VAR_2, VAR_3,
                                                VAR_6, VAR_7,
                                                VAR_8));

  return VAR_0;
}
