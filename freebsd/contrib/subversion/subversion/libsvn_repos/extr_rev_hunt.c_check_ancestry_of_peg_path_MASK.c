
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_history_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const**,scalar_t__*,int *,int *) ;
 int FUNC_5 (int **,int *,int ,int *,int *) ;
 int FUNC_6 (int **,int *,char const*,int *,int *) ;
 int FUNC_7 (int **,int *,scalar_t__,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_boolean_t *VAR_2,
                           svn_fs_t *VAR_3,
                           const char *VAR_4,
                           svn_revnum_t VAR_5,
                           svn_revnum_t VAR_6,
                           apr_pool_t *VAR_7)
{
  svn_fs_root_t *VAR_8;
  svn_fs_history_t *VAR_9;
  const char *VAR_10 = ((void*)0);
  svn_revnum_t VAR_11;
  apr_pool_t *VAR_12, *VAR_13;

  VAR_12 = FUNC_9(VAR_7);
  VAR_13 = FUNC_9(VAR_7);

  FUNC_0(FUNC_7(&VAR_8, VAR_3, VAR_6, VAR_7));

  FUNC_0(FUNC_6(&VAR_9, VAR_8, VAR_4, VAR_12, VAR_12));






  VAR_4 = ((void*)0);

  while (1)
    {
      apr_pool_t *VAR_14;

      FUNC_0(FUNC_5(&VAR_9, VAR_9, VAR_1, VAR_13,
                                   VAR_12));

      if (!VAR_9)
        break;

      FUNC_0(FUNC_4(&VAR_10, &VAR_11, VAR_9, VAR_13));

      if (!VAR_4)
        VAR_4 = FUNC_2(VAR_7, VAR_10);

      if (VAR_11 <= VAR_5)
        break;


      FUNC_8(VAR_12);
      VAR_14 = VAR_12;
      VAR_12 = VAR_13;
      VAR_13 = VAR_14;
    }




  FUNC_1(VAR_4 != ((void*)0));

  *VAR_2 = (VAR_9 && FUNC_3(VAR_10, VAR_4) == 0);

  return VAR_0;
}
