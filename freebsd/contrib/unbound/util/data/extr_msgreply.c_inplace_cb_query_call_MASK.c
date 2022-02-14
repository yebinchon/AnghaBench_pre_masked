
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {struct inplace_cb** inplace_cb_lists; } ;
struct inplace_cb {int cb_arg; int id; scalar_t__ cb; struct inplace_cb* next; } ;
typedef int socklen_t ;
typedef int (* inplace_cb_query_func_type ) (struct query_info*,int ,struct module_qstate*,struct sockaddr_storage*,int ,int *,size_t,struct regional*,int ,int ) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct query_info*,int ,struct module_qstate*,struct sockaddr_storage*,int ,int *,size_t,struct regional*,int ,int )) ;
 size_t VAR_0 ;
 int FUNC_2 (struct query_info*,int ,struct module_qstate*,struct sockaddr_storage*,int ,int *,size_t,struct regional*,int ,int ) ;

int FUNC_3(struct module_env* VAR_1, struct query_info* VAR_2,
 uint16_t VAR_3, struct sockaddr_storage* VAR_4, socklen_t VAR_5,
 uint8_t* VAR_6, size_t VAR_7, struct module_qstate* VAR_8,
 struct regional* VAR_9)
{
 struct inplace_cb* VAR_10 = VAR_1->inplace_cb_lists[VAR_0];
 for(; VAR_10; VAR_10=VAR_10->next) {
  FUNC_0(FUNC_1(
   *(inplace_cb_query_func_type*)VAR_10->cb));
  (void)(*(inplace_cb_query_func_type*)VAR_10->cb)(VAR_2, VAR_3,
   VAR_8, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9,
   VAR_10->id, VAR_10->cb_arg);
 }
 return 1;
}
