
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_8__ {char* data; int len; } ;
typedef TYPE_2__ svn_string_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static const char *
FUNC_3(const svn_string_t *VAR_0, apr_pool_t *VAR_1)
{
  const char *VAR_2 = VAR_0->data + VAR_0->len;
  const char *VAR_3 = VAR_0->data, *VAR_4;
  svn_stringbuf_t *VAR_5;

  for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4++)
    {
      if (*VAR_4 == '\0')
        break;
    }

  if (VAR_4 == VAR_2)
    return VAR_0->data;

  VAR_5 = FUNC_2(VAR_1);
  while (1)
    {
      VAR_4 = VAR_3;


      while (VAR_4 < VAR_2 && *VAR_4 != '\0')
        VAR_4++;


      FUNC_0(VAR_5, VAR_3, VAR_4 - VAR_3);

      if (VAR_4 == VAR_2)
        break;

      FUNC_1(VAR_5, "?\\000");

      VAR_3 = VAR_4 + 1;
    }

  return VAR_5->data;
}
