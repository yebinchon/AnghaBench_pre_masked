
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_priv {int n; int a; int region; } ;
struct config_file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iter_priv*,struct config_file*) ;
 int FUNC_5 (struct iter_priv*,struct config_file*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct iter_priv* VAR_0, struct config_file* VAR_1)
{

 FUNC_6(VAR_0->region);
 FUNC_0(&VAR_0->a);
 FUNC_2(&VAR_0->n);


 if(!FUNC_4(VAR_0, VAR_1))
  return 0;
 if(!FUNC_5(VAR_0, VAR_1))
  return 0;


 FUNC_1(&VAR_0->a);
 FUNC_3(&VAR_0->n);
 return 1;
}
