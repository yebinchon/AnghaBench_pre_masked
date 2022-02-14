
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static const char *
FUNC_2(apr_pool_t *VAR_1)
{
  int VAR_2 = VAR_0;
  int VAR_3;
  svn_stringbuf_t *VAR_4;

  VAR_4 = FUNC_1(VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_0(VAR_4, '-');
  FUNC_0(VAR_4, '+');
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_0(VAR_4, '-');
  FUNC_0(VAR_4, '\n');

  return VAR_4->data;
}
