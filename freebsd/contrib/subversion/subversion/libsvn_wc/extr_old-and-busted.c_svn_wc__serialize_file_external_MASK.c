
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,char const*,char*,char const*,char*,char const*,int ) ;
 int FUNC_2 (char const**,char const*,int const*,int *) ;

svn_error_t *
FUNC_3(const char **VAR_2,
                                const char *VAR_3,
                                const svn_opt_revision_t *VAR_4,
                                const svn_opt_revision_t *VAR_5,
                                apr_pool_t *VAR_6)
{
  const char *VAR_7;

  if (VAR_3)
    {
      const char *VAR_8;
      const char *VAR_9;

      FUNC_0(FUNC_2(&VAR_8, VAR_3, VAR_4, VAR_6));
      FUNC_0(FUNC_2(&VAR_9, VAR_3, VAR_5, VAR_6));

      VAR_7 = FUNC_1(VAR_6, VAR_8, ":", VAR_9, ":", VAR_3, VAR_1);
    }
  else
    VAR_7 = ((void*)0);

  *VAR_2 = VAR_7;

  return VAR_0;
}
