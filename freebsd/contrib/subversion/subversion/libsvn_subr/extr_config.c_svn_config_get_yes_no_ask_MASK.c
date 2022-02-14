
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef scalar_t__ svn_boolean_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (scalar_t__*,char const*,int ,char const*,char const*) ;
 int FUNC_2 (int *,char const**,char const*,char const*,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

svn_error_t *
FUNC_4(svn_config_t *VAR_5, const char **VAR_6,
                          const char *VAR_7, const char *VAR_8,
                          const char* VAR_9)
{
  const char *VAR_10;

  FUNC_2(VAR_5, &VAR_10, VAR_7, VAR_8, ((void*)0));

  if (! VAR_10)
    VAR_10 = VAR_9;

  if (VAR_10 && (0 == FUNC_3(VAR_10, VAR_1)))
    {
      *VAR_6 = VAR_1;
    }
  else
    {
      svn_boolean_t VAR_11;



      FUNC_0(FUNC_1(&VAR_11, VAR_10, VAR_0, VAR_7, VAR_8));
      *VAR_6 = VAR_11 ? VAR_3 : VAR_2;
    }

  return VAR_4;
}
