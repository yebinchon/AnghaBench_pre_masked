
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int representation_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (char const*,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int **,int *,char const*,int *,int *) ;
 int FUNC_5 (int *,char const**,int ,int *,int *,int *) ;
 int * FUNC_6 (char const**,int *,int *,int *,int *) ;

svn_error_t *
FUNC_7(const char **VAR_3,
                             const char *VAR_4,
                             svn_fs_t *VAR_5,
                             const char *VAR_6,
                             trail_t *VAR_7,
                             apr_pool_t *VAR_8)
{
  representation_t *VAR_9 = ((void*)0);
  const char *VAR_10 = ((void*)0);




  if (VAR_4 && (VAR_4[0] != '\0'))
    {
      FUNC_0(FUNC_4(&VAR_9, VAR_5, VAR_4, VAR_7, VAR_8));
      if (FUNC_2(VAR_9, VAR_6))
        {
          *VAR_3 = VAR_4;
          return VAR_0;
        }
    }




  FUNC_0(FUNC_5(VAR_5, &VAR_10, 0, ((void*)0), VAR_7, VAR_8));
  VAR_9 = FUNC_1(VAR_10, VAR_6,
                          FUNC_3(VAR_1,
                                                      VAR_8),
                          FUNC_3(VAR_2,
                                                      VAR_8),
                          VAR_8);
  return FUNC_6(VAR_3, VAR_5, VAR_9, VAR_7, VAR_8);
}
