
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bintime {long double sec; long double frac; } ;


 long double VAR_0 ;

long double
FUNC_0(struct bintime *VAR_1, struct bintime *VAR_2)
{
 long double VAR_3;

 VAR_3 = VAR_1->sec;
 VAR_3 += VAR_1->frac * VAR_0;
 if (VAR_2 != ((void*)0)) {
  VAR_3 -= VAR_2->sec;
  VAR_3 -= VAR_2->frac * VAR_0;
 }
 return(VAR_3);
}
