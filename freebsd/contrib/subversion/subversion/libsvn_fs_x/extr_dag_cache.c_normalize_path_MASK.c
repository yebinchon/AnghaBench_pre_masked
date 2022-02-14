
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_size_t ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static svn_string_t *
FUNC_1(svn_string_t *VAR_0,
               const char *VAR_1)
{
  apr_size_t VAR_2;

  if (VAR_1[0] == '/')
    ++VAR_1;

  VAR_2 = FUNC_0(VAR_1);
  while (VAR_2 && VAR_1[VAR_2-1] == '/')
    --VAR_2;

  VAR_0->data = VAR_1;
  VAR_0->len = VAR_2;

  return VAR_0;
}
