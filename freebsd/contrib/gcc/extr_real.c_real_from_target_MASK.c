
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int (* decode ) (struct real_format const*,int *,long const*) ;} ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 struct real_format* FUNC_0 (int) ;
 int FUNC_1 (struct real_format const*) ;
 int FUNC_2 (struct real_format const*,int *,long const*) ;

void
FUNC_3 (REAL_VALUE_TYPE *VAR_0, const long *VAR_1, enum machine_mode VAR_2)
{
  const struct real_format *VAR_3;

  VAR_3 = FUNC_0 (VAR_2);
  FUNC_1 (VAR_3);

  (*VAR_3->decode) (VAR_3, VAR_0, VAR_1);
}
