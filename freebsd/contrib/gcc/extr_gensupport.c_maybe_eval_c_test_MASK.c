
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_test {char const* expr; int value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct c_test*) ;

int
FUNC_1 (const char *VAR_1)
{
  const struct c_test *VAR_2;
  struct c_test VAR_3;

  if (VAR_1[0] == 0)
    return 1;

  VAR_3.expr = VAR_1;
  VAR_2 = (const struct c_test *)FUNC_0 (VAR_0, &VAR_3);
  if (!VAR_2)
    return -1;
  return VAR_2->value;
}
