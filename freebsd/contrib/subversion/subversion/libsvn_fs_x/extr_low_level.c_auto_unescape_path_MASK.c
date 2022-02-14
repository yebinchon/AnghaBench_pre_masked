
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,char const) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,char const) ;
 TYPE_1__* FUNC_3 (size_t,int *) ;

__attribute__((used)) static const char *
FUNC_4(const char *VAR_0,
                   apr_pool_t *VAR_1)
{
  const char VAR_2 = '\x1b';
  if (FUNC_0(VAR_0, VAR_2))
    {
      apr_size_t VAR_3 = FUNC_1(VAR_0);
      apr_size_t VAR_4;

      svn_stringbuf_t *VAR_5 = FUNC_3(VAR_3,
                                                               VAR_1);
      for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
        if (VAR_0[VAR_4] == VAR_2)
          FUNC_2(VAR_5, VAR_0[++VAR_4] + 1 - 'A');
        else
          FUNC_2(VAR_5, VAR_0[VAR_4]);

      return VAR_5->data;
    }

   return VAR_0;
}
