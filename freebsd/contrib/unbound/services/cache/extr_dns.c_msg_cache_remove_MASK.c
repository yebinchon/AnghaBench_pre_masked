
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint16_t ;
struct query_info {size_t qname_len; int * local_alias; void* qclass; void* qtype; int * qname; } ;
struct module_env {int msg_cache; } ;
typedef int hashvalue_type ;


 int FUNC_0 (struct query_info*,void*) ;
 int FUNC_1 (int ,int ,struct query_info*) ;

void
FUNC_2(struct module_env* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
 struct query_info VAR_6;
 hashvalue_type VAR_7;

 VAR_6.qname = VAR_1;
 VAR_6.qname_len = VAR_2;
 VAR_6.qtype = VAR_3;
 VAR_6.qclass = VAR_4;
 VAR_6.local_alias = ((void*)0);
 VAR_7 = FUNC_0(&VAR_6, VAR_5);
 FUNC_1(VAR_0->msg_cache, VAR_7, &VAR_6);
}
