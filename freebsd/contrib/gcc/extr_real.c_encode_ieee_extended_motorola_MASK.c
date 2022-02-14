
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int dummy; } ;
typedef int REAL_VALUE_TYPE ;


 int FUNC_0 (struct real_format const*,long*,int const*) ;

__attribute__((used)) static void
FUNC_1 (const struct real_format *VAR_0, long *VAR_1,
          const REAL_VALUE_TYPE *VAR_2)
{
  long VAR_3[3];
  FUNC_0 (VAR_0, VAR_3, VAR_2);







  VAR_1[0] = VAR_3[2] << 16;
  VAR_1[1] = VAR_3[1];
  VAR_1[2] = VAR_3[0];
}
