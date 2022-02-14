
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {int * inplace_cb_lists; } ;
struct edns_data {int dummy; } ;
struct comm_reply {int dummy; } ;


 int FUNC_0 (int ,size_t,struct query_info*,struct module_qstate*,struct reply_info*,int,struct edns_data*,struct comm_reply*,struct regional*) ;
 size_t VAR_0 ;

int FUNC_1(struct module_env* VAR_1,
 struct query_info* VAR_2, struct module_qstate* VAR_3,
 struct reply_info* VAR_4, int VAR_5, struct edns_data* VAR_6,
 struct comm_reply* VAR_7, struct regional* VAR_8)
{
 return FUNC_0(
  VAR_1->inplace_cb_lists[VAR_0], VAR_0,
  VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
