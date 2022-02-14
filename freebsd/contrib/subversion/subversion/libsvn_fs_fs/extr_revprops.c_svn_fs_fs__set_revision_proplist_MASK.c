
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,char const*,char const*,int *,int *) ;
 int FUNC_6 (char const**,char const**,int *,int ,int *,int *) ;
 int FUNC_7 (char const**,char const**,int **,int *,int ,int *,int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_1,
                                 svn_revnum_t VAR_2,
                                 apr_hash_t *VAR_3,
                                 apr_pool_t *VAR_4)
{
  svn_boolean_t VAR_5;
  const char *VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  apr_array_header_t *VAR_9 = ((void*)0);

  FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_4));


  VAR_5 = FUNC_2(VAR_1, VAR_2);


  if (VAR_5)
    FUNC_0(FUNC_7(&VAR_6, &VAR_7, &VAR_9,
                                 VAR_1, VAR_2, VAR_3, VAR_4));
  else
    FUNC_0(FUNC_6(&VAR_6, &VAR_7,
                                     VAR_1, VAR_2, VAR_3, VAR_4));


  FUNC_4(VAR_1);






  VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_4);


  FUNC_0(FUNC_5(VAR_1, VAR_6, VAR_7, VAR_8,
                                VAR_9, VAR_4));

  return VAR_0;
}
