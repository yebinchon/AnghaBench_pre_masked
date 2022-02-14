
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_curve {scalar_t__ d; scalar_t__ m2; scalar_t__ m1; } ;
struct gen_sc {int dummy; } ;


 double VAR_0 ;
 int FUNC_0 (struct gen_sc*,double,double,double,double) ;
 scalar_t__ FUNC_1 (struct service_curve*) ;

__attribute__((used)) static void
FUNC_2(struct gen_sc *VAR_1, struct service_curve *VAR_2)
{
 if (FUNC_1(VAR_2))
  return;
 if (VAR_2->d != 0)
  FUNC_0(VAR_1, 0.0, 0.0, (double)VAR_2->d, (double)VAR_2->m1);
 FUNC_0(VAR_1, (double)VAR_2->d, 0.0, VAR_0, (double)VAR_2->m2);
}
