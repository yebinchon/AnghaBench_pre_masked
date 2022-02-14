
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int evq; int tcal; int last_time; int time; int tnt; int ip; int config; } ;
struct pt_config {int dummy; } ;


 int FUNC_0 (struct pt_query_decoder*,int ,int) ;
 int FUNC_1 (int *,struct pt_config const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;

int FUNC_7(struct pt_query_decoder *VAR_1,
   const struct pt_config *VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_3 = FUNC_1(&VAR_1->config, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_3(&VAR_1->ip);
 FUNC_6(&VAR_1->tnt);
 FUNC_5(&VAR_1->time);
 FUNC_5(&VAR_1->last_time);
 FUNC_4(&VAR_1->tcal);
 FUNC_2(&VAR_1->evq);

 return 0;
}
