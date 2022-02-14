
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint16_t ;
typedef scalar_t__ time_t ;
struct reply_info {scalar_t__ ttl; } ;
struct query_info {size_t qname_len; int * local_alias; void* qclass; void* qtype; int * qname; } ;
struct msgreply_entry {int dummy; } ;
struct module_env {int msg_cache; } ;
struct lruhash_entry {scalar_t__ key; int lock; scalar_t__ data; } ;
typedef int hashvalue_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct query_info*,void*) ;
 struct lruhash_entry* FUNC_2 (int ,int ,struct query_info*,int) ;

struct msgreply_entry*
FUNC_3(struct module_env* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, uint16_t VAR_4, uint16_t VAR_5, time_t VAR_6, int VAR_7)
{
 struct lruhash_entry* VAR_8;
 struct query_info VAR_9;
 hashvalue_type VAR_10;

 VAR_9.qname = VAR_1;
 VAR_9.qname_len = VAR_2;
 VAR_9.qtype = VAR_3;
 VAR_9.qclass = VAR_4;
 VAR_9.local_alias = ((void*)0);
 VAR_10 = FUNC_1(&VAR_9, VAR_5);
 VAR_8 = FUNC_2(VAR_0->msg_cache, VAR_10, &VAR_9, VAR_7);

 if(!VAR_8) return ((void*)0);
 if( VAR_6 > ((struct reply_info*)VAR_8->data)->ttl ) {
  FUNC_0(&VAR_8->lock);
  return ((void*)0);
 }
 return (struct msgreply_entry*)VAR_8->key;
}
