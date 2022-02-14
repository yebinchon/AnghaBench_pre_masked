
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct case_bit_test {scalar_t__ bits; int label; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct case_bit_test *VAR_2 = VAR_0;
  const struct case_bit_test *VAR_3 = VAR_1;

  if (VAR_3->bits != VAR_2->bits)
    return VAR_3->bits - VAR_2->bits;


  return FUNC_0 (VAR_3->label) - FUNC_0 (VAR_2->label);
}
