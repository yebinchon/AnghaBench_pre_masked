
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,char const) ;
 TYPE_1__* FUNC_2 (int,int *) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_0,
                 apr_pool_t *VAR_1)
{
  apr_size_t VAR_2 = FUNC_0(VAR_0);
  apr_size_t VAR_3;
  const char VAR_4 = '\x1b';

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
    if (VAR_0[VAR_3] < ' ')
      {
        svn_stringbuf_t *VAR_5 = FUNC_2(2 * VAR_2,
                                                               VAR_1);
        for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
          if (VAR_0[VAR_3] < ' ')
            {
              FUNC_1(VAR_5, VAR_4);
              FUNC_1(VAR_5, VAR_0[VAR_3] + 'A' - 1);
            }
          else
            {
              FUNC_1(VAR_5, VAR_0[VAR_3]);
            }

        return VAR_5->data;
      }

   return VAR_0;
}
