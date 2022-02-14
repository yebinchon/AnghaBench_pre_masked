
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_boolean_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 scalar_t__ FUNC_2 (char const) ;
 TYPE_1__* FUNC_3 (scalar_t__,int *) ;

const char *
FUNC_4(const char *VAR_2, apr_pool_t *VAR_3)
{
  svn_stringbuf_t *VAR_4;
  apr_size_t VAR_5;
  svn_boolean_t VAR_6 = VAR_0;


  VAR_4 = FUNC_3(FUNC_0(VAR_2) + 1, VAR_3);

  VAR_4->len = 0;
  for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++)
    {
      char VAR_7 = VAR_2[VAR_5];

      if (VAR_7 == '?')
        {

          VAR_6 = VAR_1;
        }
      else if (VAR_7 == '+' && VAR_6)
        {


          VAR_7 = ' ';
        }
      else if (VAR_7 == '%' && FUNC_2(VAR_2[VAR_5 + 1])
               && FUNC_2(VAR_2[VAR_5+2]))
        {
          char VAR_8[3];
          VAR_8[0] = VAR_2[++VAR_5];
          VAR_8[1] = VAR_2[++VAR_5];
          VAR_8[2] = '\0';
          VAR_7 = (char)(FUNC_1(VAR_8, ((void*)0), 16));
        }

      VAR_4->data[VAR_4->len++] = VAR_7;
    }


  VAR_4->data[VAR_4->len] = 0;

  return VAR_4->data;
}
