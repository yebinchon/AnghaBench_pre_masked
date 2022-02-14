
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {int n; int M2; } ;


 double FUNC_0 (double) ;

double FUNC_1(struct stats *VAR_0)
{
 double VAR_1, VAR_2;

 if (!VAR_0->n)
  return 0.0;

 VAR_1 = VAR_0->M2 / (VAR_0->n - 1);
 VAR_2 = VAR_1 / VAR_0->n;

 return FUNC_0(VAR_2);
}
