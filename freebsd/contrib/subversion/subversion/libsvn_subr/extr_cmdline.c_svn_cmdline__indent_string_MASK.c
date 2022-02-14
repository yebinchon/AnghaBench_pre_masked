
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (char const**,int *) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_2 (int *) ;

const char *
FUNC_3(const char *VAR_0,
                           const char *VAR_1,
                           apr_pool_t *VAR_2)
{
  svn_stringbuf_t *VAR_3 = FUNC_2(VAR_2);
  const char *VAR_4;

  while ((VAR_4 = FUNC_0(&VAR_0, VAR_2)))
    {
      FUNC_1(VAR_3, VAR_1);
      FUNC_1(VAR_3, VAR_4);
    }
  return VAR_3->data;
}
