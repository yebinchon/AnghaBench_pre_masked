
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct query_info {size_t qname_len; int * local_alias; void* qclass; void* qtype; int * qname; } ;
struct module_qstate {int is_valrec; int is_priming; TYPE_1__* env; } ;
struct TYPE_2__ {int (* detect_cycle ) (struct module_qstate*,struct query_info*,void*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct module_qstate*,struct query_info*,void*,int ,int )) ;
 int FUNC_2 (struct module_qstate*,struct query_info*,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct module_qstate* VAR_2, uint8_t* VAR_3, size_t VAR_4,
 uint16_t VAR_5, uint16_t VAR_6)
{
 struct query_info VAR_7;
 VAR_7.qname = VAR_3;
 VAR_7.qname_len = VAR_4;
 VAR_7.qtype = VAR_5;
 VAR_7.qclass = VAR_6;
 VAR_7.local_alias = ((void*)0);
 FUNC_0(FUNC_1(
  VAR_2->env->detect_cycle));
 return (*VAR_2->env->detect_cycle)(VAR_2, &VAR_7,
  (uint16_t)(VAR_1|VAR_0), VAR_2->is_priming,
  VAR_2->is_valrec);
}
