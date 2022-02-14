
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_curve {scalar_t__ m2; scalar_t__ d; scalar_t__ m1; } ;



__attribute__((used)) static double
FUNC_0(struct service_curve *VAR_0, double VAR_1)
{
 double VAR_2;

 if (VAR_1 <= (double)VAR_0->d)

  VAR_2 = VAR_1 * (double)VAR_0->m1;
 else

  VAR_2 = (double)VAR_0->d * (double)VAR_0->m1
   + (VAR_1 - (double)VAR_0->d) * (double)VAR_0->m2;
 return (VAR_2);
}
