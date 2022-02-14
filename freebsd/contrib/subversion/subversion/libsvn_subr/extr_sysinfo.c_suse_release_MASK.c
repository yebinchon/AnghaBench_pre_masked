
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,char const*,char*,char const*,char*) ;
 TYPE_1__* FUNC_1 (char*,int *) ;
 char* FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_8(apr_pool_t *VAR_0)
{
  const char *VAR_1 = ((void*)0);
  const char *VAR_2 = ((void*)0);

  svn_stringbuf_t *VAR_3 = FUNC_1("/etc/SuSE-release", VAR_0);
  svn_stringbuf_t *VAR_4;
  svn_stream_t *VAR_5;
  svn_boolean_t VAR_6;
  svn_error_t *VAR_7;
  if (!VAR_3)
      return ((void*)0);

  VAR_5 = FUNC_5(VAR_3, VAR_0);
  VAR_7 = FUNC_6(VAR_5, &VAR_4, "\n", &VAR_6, VAR_0);
  if (VAR_7 || VAR_6)
    {
      FUNC_4(VAR_7);
      return ((void*)0);
    }

  FUNC_7(VAR_4);
  VAR_1 = VAR_4->data;

  for (;;)
    {
      const char *VAR_8;

      VAR_7 = FUNC_6(VAR_5, &VAR_4, "\n", &VAR_6, VAR_0);
      if (VAR_7 || VAR_6)
        {
          FUNC_4(VAR_7);
          break;
        }

      VAR_8 = FUNC_2(VAR_4, '=');
      if (!VAR_8)
        continue;

      if (0 == FUNC_3(VAR_8, "CODENAME", 8))
        VAR_2 = VAR_4->data;
    }

  return FUNC_0(VAR_0, "%s%s%s%s",
                      VAR_1,
                      (VAR_2 ? " (" : ""),
                      (VAR_2 ? VAR_2 : ""),
                      (VAR_2 ? ")" : ""));
}
