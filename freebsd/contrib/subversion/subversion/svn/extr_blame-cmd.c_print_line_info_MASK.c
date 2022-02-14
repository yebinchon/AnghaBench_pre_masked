
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef char* svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int * VAR_0 ;
 char* FUNC_2 (int *,char*,int,char*) ;
 int * FUNC_3 (char const**,char const*,int *) ;
 int * FUNC_4 (char const**,char const*,int *) ;
 int * FUNC_5 (int *,int *,char*,char const*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_stream_t *VAR_1,
                svn_revnum_t VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                svn_boolean_t VAR_6,
                int VAR_7,
                apr_pool_t *VAR_8)
{
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11;

  VAR_11 = FUNC_1(VAR_2)
    ? FUNC_2(VAR_8, "%*ld", VAR_7, VAR_2)
    : FUNC_2(VAR_8, "%*s", VAR_7, "-");

  if (VAR_6)
    {
      if (VAR_4)
        {
          FUNC_0(FUNC_3(&VAR_9,
                                                        VAR_4, VAR_8));
          FUNC_0(FUNC_4(&VAR_10, VAR_9,
                                                VAR_8));
        }
      else
        {




          VAR_10 = "                                           -";
        }

      FUNC_0(FUNC_5(VAR_1, VAR_8, "%s %10s %s ", VAR_11,
                                VAR_3 ? VAR_3 : "         -",
                                VAR_10));

      if (VAR_5)
        FUNC_0(FUNC_5(VAR_1, VAR_8, "%-14s ", VAR_5));
    }
  else
    {
      return FUNC_5(VAR_1, VAR_8, "%s %10.10s ", VAR_11,
                               VAR_3 ? VAR_3 : "         -");
    }

  return VAR_0;
}
