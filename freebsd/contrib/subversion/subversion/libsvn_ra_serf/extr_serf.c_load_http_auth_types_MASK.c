
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char const* VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,char const**,char const*,int ,char const*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char**) ;
 int * FUNC_7 (int ,int *,int ,int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_pool_t *VAR_10, svn_config_t *VAR_11,
                     const char *VAR_12,
                     int *VAR_13)
{
  const char *VAR_14 = ((void*)0);
  *VAR_13 = VAR_4;

  FUNC_4(VAR_11, &VAR_14, VAR_7,
               VAR_6, ((void*)0));

  if (VAR_12)
    {
      FUNC_4(VAR_11, &VAR_14, VAR_12,
                     VAR_6, VAR_14);
    }

  if (VAR_14)
    {
      char *VAR_15;
      char *VAR_16 = FUNC_2(VAR_10, FUNC_3(VAR_14) + 1);
      FUNC_1(VAR_16, VAR_14);
      while ((VAR_15 = FUNC_6(";", &VAR_16)) != ((void*)0))
        {
          if (FUNC_5("basic", VAR_15) == 0)
            *VAR_13 |= VAR_1;
          else if (FUNC_5("digest", VAR_15) == 0)
            *VAR_13 |= VAR_2;
          else if (FUNC_5("ntlm", VAR_15) == 0)
            *VAR_13 |= VAR_5;
          else if (FUNC_5("negotiate", VAR_15) == 0)
            *VAR_13 |= VAR_3;
          else
            return FUNC_7(VAR_8, ((void*)0),
                                     FUNC_0("Invalid config: unknown %s "
                                       "'%s'"),
                                     VAR_6, VAR_15);
      }
    }
  else
    {

      *VAR_13 = VAR_0;
    }

  return VAR_9;
}
