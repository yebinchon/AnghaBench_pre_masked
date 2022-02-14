
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_subst_eol_style_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__*,char const**,char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_subst_eol_style_t *VAR_4,
              const char **VAR_5,
              const char *VAR_6,
              const char *VAR_7)
{
  FUNC_2(VAR_4, VAR_5, VAR_6);
  if (VAR_7 && *VAR_4 == VAR_3)
    {
      svn_subst_eol_style_t VAR_8;
      const char *VAR_9;

      FUNC_2(&VAR_8, &VAR_9,
                                     VAR_7);

      if (VAR_8 == VAR_2)
        *VAR_5 = VAR_9;
      else
        return FUNC_1(VAR_0, ((void*)0),
                                 FUNC_0("'%s' is not a valid EOL value"),
                                 VAR_7);
    }
  return VAR_1;
}
