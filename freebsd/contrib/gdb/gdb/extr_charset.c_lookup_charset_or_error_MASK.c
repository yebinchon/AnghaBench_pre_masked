
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charset {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 struct charset* FUNC_1 (char const*) ;

__attribute__((used)) static struct charset *
FUNC_2 (const char *VAR_0)
{
  struct charset *VAR_1 = FUNC_1 (VAR_0);

  if (! VAR_1)
    FUNC_0 ("GDB doesn't know of any character set named `%s'.", VAR_0);

  return VAR_1;
}
