
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int subqi ;
struct ub_packed_rrset_key {int dummy; } ;
struct query_info {int qclass; int qtype; int qname; int qname_len; } ;
struct TYPE_3__ {int qclass; int qtype; } ;
struct module_qstate {TYPE_2__* env; TYPE_1__ qinfo; } ;
struct TYPE_4__ {int (* attach_sub ) (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**)) ;
 int FUNC_2 (struct ub_packed_rrset_key*,int *,int *) ;
 int FUNC_3 (struct query_info*,int ,int) ;
 int FUNC_4 (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**) ;

__attribute__((used)) static int
FUNC_5(struct module_qstate* VAR_1,
 struct ub_packed_rrset_key* VAR_2)
{
 struct module_qstate* VAR_3 = ((void*)0);
 struct query_info VAR_4;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_2, &VAR_4.qname, &VAR_4.qname_len);
 if(!VAR_4.qname)
  return 0;
 VAR_4.qtype = VAR_1->qinfo.qtype;
 VAR_4.qclass = VAR_1->qinfo.qclass;
 FUNC_0(FUNC_1(VAR_1->env->attach_sub));
 return (*VAR_1->env->attach_sub)(VAR_1, &VAR_4, VAR_0, 0, 0, &VAR_3);
}
