
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_global_config {int process_conf_obj; int cb_ctx; int msg_ctx; } ;
struct dpp_global {int tcp_init; int controllers; int configurator; int bootstrap; int process_conf_obj; int cb_ctx; int msg_ctx; } ;


 int FUNC_0 (int *) ;
 struct dpp_global* FUNC_1 (int) ;

struct dpp_global * FUNC_2(struct dpp_global_config *VAR_0)
{
 struct dpp_global *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);
 VAR_1->msg_ctx = VAR_0->msg_ctx;





 FUNC_0(&VAR_1->bootstrap);
 FUNC_0(&VAR_1->configurator);





 return VAR_1;
}
