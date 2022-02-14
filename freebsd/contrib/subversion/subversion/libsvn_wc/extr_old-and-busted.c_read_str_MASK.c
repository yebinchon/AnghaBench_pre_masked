
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char*,char**,char const*) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (TYPE_1__*,char) ;
 int FUNC_6 (TYPE_1__*,char const*,int) ;
 TYPE_1__* FUNC_7 (char const*,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_2,
         char **VAR_3, const char *VAR_4,
         apr_pool_t *VAR_5)
{
  svn_stringbuf_t *VAR_6 = ((void*)0);
  const char *VAR_7;
  if (*VAR_3 == VAR_4)
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_1("Unexpected end of entry"));
  if (**VAR_3 == '\n')
    {
      *VAR_2 = ((void*)0);
      (*VAR_3)++;
      return VAR_1;
    }

  VAR_7 = *VAR_3;
  while (*VAR_3 != VAR_4 && **VAR_3 != '\n')
    {
      if (**VAR_3 == '\\')
        {
          char VAR_8;
          if (! VAR_6)
            VAR_6 = FUNC_7(VAR_7, *VAR_3 - VAR_7, VAR_5);
          else
            FUNC_6(VAR_6, VAR_7, *VAR_3 - VAR_7);
          (*VAR_3)++;
          FUNC_0(FUNC_3(&VAR_8, VAR_3, VAR_4));
          FUNC_5(VAR_6, VAR_8);
          VAR_7 = *VAR_3;
        }
      else
        (*VAR_3)++;
    }

  if (*VAR_3 == VAR_4)
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_1("Unexpected end of entry"));

  if (VAR_6)
    {
      FUNC_6(VAR_6, VAR_7, *VAR_3 - VAR_7);
      *VAR_2 = VAR_6->data;
    }
  else
    *VAR_2 = FUNC_2(VAR_5, VAR_7, *VAR_3 - VAR_7);
  (*VAR_3)++;
  return VAR_1;
}
