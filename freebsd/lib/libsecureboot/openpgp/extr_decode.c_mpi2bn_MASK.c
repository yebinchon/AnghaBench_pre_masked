
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;

BIGNUM *
FUNC_1(unsigned char **VAR_0)
{
 BIGNUM *VAR_1 = ((void*)0);
 unsigned char *VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return (((void*)0));

 VAR_2 = *VAR_0;

 VAR_3 = (*VAR_2++ << 8);
 VAR_3 |= *VAR_2++;
 VAR_3 = (VAR_3 + 7) / 8;
 VAR_1 = FUNC_0(VAR_2, VAR_3, ((void*)0));
 VAR_2 += VAR_3;
 *VAR_0 = VAR_2;

 return (VAR_1);
}
