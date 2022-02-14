
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int **,char const**,int *,char const*,int *) ;
 int FUNC_4 (scalar_t__*,char const**,int *,char const*,int *) ;
 int FUNC_5 (int **,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 char* FUNC_9 (char const*,char const*,int *) ;
 char* FUNC_10 (char const*,char const*) ;
 int FUNC_11 (char const**,char const**,char const*,int *) ;

svn_error_t *
FUNC_12(svn_fs_root_t **VAR_1,
                         const char **VAR_2,
                         svn_fs_root_t *VAR_3,
                         const char *VAR_4,
                         apr_pool_t *VAR_5,
                         apr_pool_t *VAR_6)
{
  const char *VAR_7, *VAR_8;
  svn_fs_root_t *VAR_9;
  const char *VAR_10;







  FUNC_11(&VAR_7, &VAR_8, VAR_4, VAR_6);
  FUNC_0(FUNC_3(&VAR_9, &VAR_10, VAR_3, VAR_7,
                              VAR_6));


  if ( VAR_9
      && ( FUNC_6(VAR_9)
          == FUNC_6(VAR_3)))
    {
      svn_revnum_t VAR_11;
      const char *VAR_12;
      const char *VAR_13;
      FUNC_0(FUNC_4(&VAR_11, &VAR_12,
                                 VAR_9, VAR_10, VAR_6));

      FUNC_0(FUNC_5(VAR_1, FUNC_7(VAR_3),
                                   VAR_11, VAR_5));
      VAR_13 = FUNC_10(VAR_10, VAR_4);
      *VAR_2 = FUNC_9(VAR_12, VAR_13, VAR_5);
    }
  else
    {
      svn_revnum_t VAR_14;
      svn_revnum_t VAR_15;


      VAR_14 = FUNC_6(VAR_3);
      if (FUNC_1(VAR_14))
        VAR_15 = VAR_14 - 1;
      else
        VAR_15 = FUNC_8(VAR_3);

      FUNC_0(FUNC_5(VAR_1, FUNC_7(VAR_3),
                                   VAR_15, VAR_5));
      *VAR_2 = FUNC_2(VAR_5, VAR_4);
    }

  return VAR_0;
}
