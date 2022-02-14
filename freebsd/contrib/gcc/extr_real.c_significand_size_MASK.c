
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int b; double p; int log2_b; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 struct real_format* FUNC_0 (int) ;

int
FUNC_1 (enum machine_mode VAR_0)
{
  const struct real_format *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 == ((void*)0))
    return 0;

  if (VAR_1->b == 10)
    {




      double VAR_2 = 3.3219281;
      return VAR_1->p * VAR_2;
    }
  return VAR_1->p * VAR_1->log2_b;
}
