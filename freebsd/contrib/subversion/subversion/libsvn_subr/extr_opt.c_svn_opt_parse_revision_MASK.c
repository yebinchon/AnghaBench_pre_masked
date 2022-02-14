
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,char*,int *) ;

int
FUNC_2(svn_opt_revision_t *VAR_0,
                       svn_opt_revision_t *VAR_1,
                       const char *VAR_2,
                       apr_pool_t *VAR_3)
{
  char *VAR_4, *VAR_5, *VAR_6;


  VAR_4 = FUNC_0(VAR_3, VAR_2);

  VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_3);
  if (VAR_5 && *VAR_5 == ':')
    {
      VAR_5++;
      VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_3);
      if (!VAR_6 || *VAR_6 != '\0')
        return -1;
    }
  else if (!VAR_5 || *VAR_5 != '\0')
    return -1;

  return 0;
}
