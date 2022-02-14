
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_tristate_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef scalar_t__ svn_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*,char const*,int ,char const*,char const*) ;
 int FUNC_2 (int *,char const**,char const*,char const*,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

svn_error_t *
FUNC_4(svn_config_t *VAR_5, svn_tristate_t *VAR_6,
                        const char *VAR_7, const char *VAR_8,
                        const char *VAR_9,
                        svn_tristate_t VAR_10)
{
  const char *VAR_11;

  FUNC_2(VAR_5, &VAR_11, VAR_7, VAR_8, ((void*)0));

  if (! VAR_11)
    {
      *VAR_6 = VAR_10;
    }
  else if (0 == FUNC_3(VAR_11, VAR_9))
    {
      *VAR_6 = VAR_4;
    }
  else
    {
      svn_boolean_t VAR_12;



      FUNC_0(FUNC_1(&VAR_12, VAR_11, VAR_0, VAR_7, VAR_8));
      *VAR_6 = VAR_12 ? VAR_3 : VAR_2;
    }

  return VAR_1;
}
