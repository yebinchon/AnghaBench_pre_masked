
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 TYPE_1__* FUNC_3 (size_t,int *) ;

__attribute__((used)) static const char *
FUNC_4(const char *VAR_0,
                   apr_pool_t *VAR_1)
{
  apr_size_t VAR_2;
  apr_size_t VAR_3 = FUNC_0(VAR_0);
  svn_stringbuf_t *VAR_4 = FUNC_3(VAR_3, VAR_1);

  for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
    {
      char VAR_5 = VAR_0[VAR_2];
      switch (VAR_5)
        {
        case ':': FUNC_2(VAR_4, "%_", 2);
                  break;
        case '%': FUNC_2(VAR_4, "%%", 2);
                  break;
        default : FUNC_1(VAR_4, VAR_5);
        }
    }

  return VAR_4->data;
}
