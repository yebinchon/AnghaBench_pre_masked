
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int (* decode ) (struct real_format const*,int *,long const*) ;} ;
typedef int REAL_VALUE_TYPE ;


 int FUNC_0 (struct real_format const*,int *,long const*) ;

void
FUNC_1 (REAL_VALUE_TYPE *VAR_0, const long *VAR_1,
        const struct real_format *VAR_2)
{
  (*VAR_2->decode) (VAR_2, VAR_0, VAR_1);
}
