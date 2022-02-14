
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; char* data; } ;
typedef TYPE_1__ svn_string_t ;



__attribute__((used)) static const char *
FUNC_0(svn_string_t *VAR_0)
{
  const char *VAR_1;

  if (VAR_0->len == 0)
    return ((void*)0);

  VAR_1 = VAR_0->data + VAR_0->len - 1;
  if (*VAR_1 == '\r')
    return "\r";
  else if (*VAR_1 != '\n')
    return ((void*)0);
  else
    {
      if (VAR_0->len == 1
          || *(--VAR_1) != '\r')
        return "\n";
      else
        return "\r\n";
    }
}
