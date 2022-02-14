
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,char const**,char const*,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,char const**,char const*,char const*,char*,int ,int *,int *) ;
 int FUNC_3 (int **,int *,char const*,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_skel_t **VAR_2,
                  svn_wc__db_t *VAR_3,
                  const char *VAR_4,
                  const char *VAR_5,
                  apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;

  FUNC_1(&VAR_9, &VAR_10, VAR_4, VAR_7);



  FUNC_0(FUNC_2(((void*)0),
                                     &VAR_8,
                                     VAR_9,
                                     VAR_10,
                                     ".edited",
                                     VAR_1,
                                     VAR_7, VAR_7));
  FUNC_0(FUNC_3(VAR_2,
                                                VAR_3, VAR_4,
                                                VAR_5,
                                                VAR_8,
                                                VAR_6, VAR_7));
  return VAR_0;
}
