
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {int * data; } ;
struct ub_packed_rrset_key {int id; TYPE_1__ entry; } ;
struct rrset_ref {int id; struct ub_packed_rrset_key* key; } ;
struct rrset_parse {int dummy; } ;
struct packed_rrset_data {int dummy; } ;
struct msg_parse {int dummy; } ;
struct module_env {int alloc; int rrset_cache; int * now; } ;
typedef int sldns_buffer ;


 struct ub_packed_rrset_key* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ub_packed_rrset_key*) ;
 int FUNC_2 (struct packed_rrset_data*,int ) ;
 int FUNC_3 (int *,struct msg_parse*,struct rrset_parse*,int *,struct ub_packed_rrset_key*) ;
 int FUNC_4 (int ,struct rrset_ref*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(sldns_buffer* VAR_0, struct msg_parse* VAR_1, struct module_env* VAR_2,
 struct rrset_parse* VAR_3)
{
 struct ub_packed_rrset_key* VAR_4;
 struct packed_rrset_data* VAR_5;
 struct rrset_ref VAR_6;
 time_t VAR_7 = *VAR_2->now;

 VAR_4 = FUNC_0(VAR_2->alloc);
 if(!VAR_4)
  return;
 VAR_4->entry.data = ((void*)0);
 if(!FUNC_3(VAR_0, VAR_1, VAR_3, ((void*)0), VAR_4)) {
  FUNC_1(VAR_2->alloc, VAR_4);
  return;
 }
 VAR_5 = (struct packed_rrset_data*)VAR_4->entry.data;
 FUNC_2(VAR_5, VAR_7);
 VAR_6.key = VAR_4;
 VAR_6.id = VAR_4->id;

 (void)FUNC_4(VAR_2->rrset_cache, &VAR_6, VAR_2->alloc, VAR_7);
}
