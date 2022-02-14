
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int escaped_char ;
typedef int apr_pool_t ;


 int FUNC_0 (char*,int,char*,unsigned char) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (TYPE_1__*,char const*,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_5 (int *) ;

const char *
FUNC_6(const char *VAR_0, apr_pool_t *VAR_1)
{
  const char *VAR_2 = VAR_0 + FUNC_1(VAR_0);
  const char *VAR_3 = VAR_0, *VAR_4;
  svn_stringbuf_t *VAR_5;
  char VAR_6[6];

  for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4++)
    {
      if (FUNC_2(*VAR_4)
          && ! ((*VAR_4 == '\n') || (*VAR_4 == '\r') || (*VAR_4 == '\t')))
        break;
    }


  if (VAR_4 == VAR_2)
    return VAR_0;

  VAR_5 = FUNC_5(VAR_1);
  while (1)
    {
      VAR_4 = VAR_3;


      while ((VAR_4 < VAR_2)
             && ((! FUNC_2(*VAR_4))
                 || (*VAR_4 == '\n') || (*VAR_4 == '\r') || (*VAR_4 == '\t')))
        VAR_4++;


      FUNC_3(VAR_5, VAR_3, VAR_4 - VAR_3);

      if (VAR_4 == VAR_2)
        break;
      FUNC_0(VAR_6, sizeof(VAR_6), "?\\%03u",
                   (unsigned char) *VAR_4);
      FUNC_4(VAR_5, VAR_6);

      VAR_3 = VAR_4 + 1;
    }

  return VAR_5->data;
}
