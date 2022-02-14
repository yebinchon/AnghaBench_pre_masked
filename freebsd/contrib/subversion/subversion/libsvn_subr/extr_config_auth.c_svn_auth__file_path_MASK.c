
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int **,int ,char const*,int ,int *) ;
 int VAR_2 ;
 char* FUNC_3 (int *,int *) ;
 int FUNC_4 (char const**,char const*,int ,int *) ;
 char* FUNC_5 (char const*,char const*,int *) ;

svn_error_t *
FUNC_6(const char **VAR_3,
                    const char *VAR_4,
                    const char *VAR_5,
                    const char *VAR_6,
                    apr_pool_t *VAR_7)
{
  const char *VAR_8, *VAR_9;
  svn_checksum_t *VAR_10;




  FUNC_0(FUNC_4(&VAR_8, VAR_6,
                                          VAR_0, VAR_7));
  if (VAR_8)
    {
      VAR_8 = FUNC_5(VAR_8, VAR_4, VAR_7);



      FUNC_0(FUNC_2(&VAR_10, VAR_2, VAR_5,
                           FUNC_1(VAR_5), VAR_7));
      VAR_9 = FUNC_3(VAR_10, VAR_7);

      *VAR_3 = FUNC_5(VAR_8, VAR_9, VAR_7);
    }
  else
    *VAR_3 = ((void*)0);

  return VAR_1;
}
