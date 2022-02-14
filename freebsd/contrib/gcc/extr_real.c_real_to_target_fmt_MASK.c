
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int (* encode ) (struct real_format const*,long*,int *) ;} ;
typedef int REAL_VALUE_TYPE ;


 int FUNC_0 (struct real_format const*,int *) ;
 int FUNC_1 (struct real_format const*,long*,int *) ;

long
FUNC_2 (long *VAR_0, const REAL_VALUE_TYPE *VAR_1,
      const struct real_format *VAR_2)
{
  REAL_VALUE_TYPE VAR_3;
  long VAR_4;

  VAR_3 = *VAR_1;
  FUNC_0 (VAR_2, &VAR_3);

  if (!VAR_0)
    VAR_0 = &VAR_4;
  (*VAR_2->encode) (VAR_2, VAR_0, &VAR_3);

  return *VAR_0;
}
