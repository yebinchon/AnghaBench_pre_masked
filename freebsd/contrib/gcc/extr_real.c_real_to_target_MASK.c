
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int dummy; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 struct real_format* FUNC_0 (int) ;
 int FUNC_1 (struct real_format const*) ;
 long FUNC_2 (long*,int const*,struct real_format const*) ;

long
FUNC_3 (long *VAR_0, const REAL_VALUE_TYPE *VAR_1, enum machine_mode VAR_2)
{
  const struct real_format *VAR_3;

  VAR_3 = FUNC_0 (VAR_2);
  FUNC_1 (VAR_3);

  return FUNC_2 (VAR_0, VAR_1, VAR_3);
}
