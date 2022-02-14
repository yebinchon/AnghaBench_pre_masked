
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_priv {int n; int a; int region; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iter_priv*) ;
 int FUNC_4 () ;

struct iter_priv* FUNC_5(void)
{
 struct iter_priv* VAR_0 = (struct iter_priv*)FUNC_1(1, sizeof(*VAR_0));
 if(!VAR_0)
  return ((void*)0);
 VAR_0->region = FUNC_4();
 if(!VAR_0->region) {
  FUNC_3(VAR_0);
  return ((void*)0);
 }
 FUNC_0(&VAR_0->a);
 FUNC_2(&VAR_0->n);
 return VAR_0;
}
