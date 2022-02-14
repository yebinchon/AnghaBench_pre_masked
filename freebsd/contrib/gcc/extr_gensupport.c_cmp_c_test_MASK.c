
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_test {int expr; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct c_test *VAR_2 = (const struct c_test *) VAR_0;
  const struct c_test *VAR_3 = (const struct c_test *) VAR_1;

  return !FUNC_0 (VAR_2->expr, VAR_3->expr);
}
