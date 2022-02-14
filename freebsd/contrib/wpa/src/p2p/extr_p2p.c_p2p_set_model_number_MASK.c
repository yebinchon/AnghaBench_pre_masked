
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int * model_number; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int FUNC_2(struct p2p_data *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->cfg->model_number);
 VAR_0->cfg->model_number = ((void*)0);
 if (VAR_1) {
  VAR_0->cfg->model_number = FUNC_1(VAR_1);
  if (VAR_0->cfg->model_number == ((void*)0))
   return -1;
 }

 return 0;
}
