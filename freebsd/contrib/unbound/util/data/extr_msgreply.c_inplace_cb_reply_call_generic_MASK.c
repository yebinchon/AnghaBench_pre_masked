
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_qstate {struct edns_option* edns_opts_front_out; } ;
struct inplace_cb {int cb_arg; int id; scalar_t__ cb; struct inplace_cb* next; } ;
struct edns_option {int dummy; } ;
struct edns_data {struct edns_option* opt_list; } ;
struct comm_reply {int dummy; } ;
typedef int (* inplace_cb_reply_func_type ) (struct query_info*,struct module_qstate*,struct reply_info*,int,struct edns_data*,struct edns_option**,struct comm_reply*,struct regional*,int ,int ) ;
typedef enum inplace_cb_list_type { ____Placeholder_inplace_cb_list_type } inplace_cb_list_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct query_info*,struct module_qstate*,struct reply_info*,int,struct edns_data*,struct edns_option**,struct comm_reply*,struct regional*,int ,int ),int) ;
 int FUNC_2 (struct query_info*,struct module_qstate*,struct reply_info*,int,struct edns_data*,struct edns_option**,struct comm_reply*,struct regional*,int ,int ) ;

__attribute__((used)) static int FUNC_3(
    struct inplace_cb* VAR_0, enum inplace_cb_list_type VAR_1,
 struct query_info* VAR_2, struct module_qstate* VAR_3,
 struct reply_info* VAR_4, int VAR_5, struct edns_data* VAR_6,
 struct comm_reply* VAR_7, struct regional* VAR_8)
{
 struct inplace_cb* VAR_9;
 struct edns_option* VAR_10 = ((void*)0);



 if(VAR_3)
  VAR_10 = VAR_3->edns_opts_front_out;
 for(VAR_9=VAR_0; VAR_9; VAR_9=VAR_9->next) {
  FUNC_0(FUNC_1(
   *(inplace_cb_reply_func_type*)VAR_9->cb, VAR_1));
  (void)(*(inplace_cb_reply_func_type*)VAR_9->cb)(VAR_2, VAR_3, VAR_4,
   VAR_5, VAR_6, &VAR_10, VAR_7, VAR_8, VAR_9->id, VAR_9->cb_arg);
 }
 VAR_6->opt_list = VAR_10;
 return 1;
}
