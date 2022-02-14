
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 char const* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*,char***,int *) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (TYPE_1__*,char const) ;
 TYPE_1__* FUNC_5 (int *) ;

__attribute__((used)) static const char *
FUNC_6(const char *VAR_0,
            apr_pool_t *VAR_1)
{
  apr_status_t VAR_2;
  char **VAR_3;

  VAR_2 = FUNC_2(VAR_0, &VAR_3, VAR_1);

  if (!VAR_2 && VAR_3[0] && !VAR_3[1] && FUNC_3(VAR_3[0], VAR_0) == 0)
    return FUNC_1(VAR_1, VAR_0);

  {
    svn_stringbuf_t *VAR_4 = FUNC_5(VAR_1);
    const char *VAR_5;

    FUNC_4(VAR_4, '\"');

    for (VAR_5 = VAR_0; *VAR_5; VAR_5++)
      {
        if (*VAR_5 == '\\' || *VAR_5 == '\"' || *VAR_5 == '\'')
          FUNC_4(VAR_4, '\\');

        FUNC_4(VAR_4, *VAR_5);
      }

    FUNC_4(VAR_4, '\"');
    return VAR_4->data;
  }
}
