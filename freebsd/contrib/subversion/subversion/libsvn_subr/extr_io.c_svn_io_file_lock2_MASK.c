
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,char const*,int ,int ,int *) ;
 int * FUNC_2 (int *,int ,int ,int *) ;

svn_error_t *
FUNC_3(const char *VAR_5,
                  svn_boolean_t VAR_6,
                  svn_boolean_t VAR_7,
                  apr_pool_t *VAR_8)
{
  int VAR_9 = VAR_1;
  apr_file_t *VAR_10;
  apr_int32_t VAR_11;

  if (VAR_6)
    VAR_9 = VAR_0;

  VAR_11 = VAR_3;
  if (VAR_9 == VAR_0)
    VAR_11 |= VAR_4;
  FUNC_0(FUNC_1(&VAR_10, VAR_5, VAR_11,
                           VAR_2,
                           VAR_8));


  return FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8);
}
