
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct val_qstate {int chain_blacklist; } ;
struct query_info {size_t qname_len; int * local_alias; scalar_t__ qclass; scalar_t__ qtype; int * qname; } ;
struct module_qstate {int * ext_state; int region; int blacklist; TYPE_1__* env; scalar_t__* minfo; } ;
struct mesh_state {int dummy; } ;
struct TYPE_2__ {int (* attach_sub ) (struct module_qstate*,struct query_info*,scalar_t__,int ,int,struct module_qstate**) ;int (* add_sub ) (struct module_qstate*,struct query_info*,scalar_t__,int ,int,struct module_qstate**,struct mesh_state**) ;scalar_t__ (* detect_cycle ) (struct module_qstate*,struct query_info*,scalar_t__,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct module_qstate*,struct query_info*,scalar_t__,int ,int,struct module_qstate**,struct mesh_state**)) ;
 int FUNC_2 (int (*) (struct module_qstate*,struct query_info*,scalar_t__,int ,int,struct module_qstate**)) ;
 int FUNC_3 (scalar_t__ (*) (struct module_qstate*,struct query_info*,scalar_t__,int ,int)) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,struct query_info*) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (struct module_qstate*,struct query_info*,scalar_t__,int ,int) ;
 int FUNC_8 (struct module_qstate*,struct query_info*,scalar_t__,int ,int,struct module_qstate**,struct mesh_state**) ;
 int FUNC_9 (struct module_qstate*,struct query_info*,scalar_t__,int ,int,struct module_qstate**) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int
FUNC_11(struct module_qstate* VAR_4, int VAR_5, uint8_t* VAR_6,
 size_t VAR_7, uint16_t VAR_8, uint16_t VAR_9, uint16_t VAR_10,
 struct module_qstate** VAR_11, int VAR_12)
{
 struct val_qstate* VAR_13 = (struct val_qstate*)VAR_4->minfo[VAR_5];
 struct query_info VAR_14;
 int VAR_15;
 VAR_14.qname = VAR_6;
 VAR_14.qname_len = VAR_7;
 VAR_14.qtype = VAR_8;
 VAR_14.qclass = VAR_9;
 VAR_14.local_alias = ((void*)0);
 FUNC_5(VAR_2, "generate request", &VAR_14);


 if(VAR_8 == VAR_1)
  VAR_15 = 0;
 else VAR_15 = 1;

 FUNC_0(FUNC_3(VAR_4->env->detect_cycle));
 if((*VAR_4->env->detect_cycle)(VAR_4, &VAR_14,
  (uint16_t)(VAR_0|VAR_10), 0, VAR_15)) {
  FUNC_10(VAR_2, "Could not generate request: cycle detected");
  return 0;
 }

 if(VAR_12) {
  struct mesh_state* VAR_16 = ((void*)0);
  FUNC_0(FUNC_1(
   VAR_4->env->add_sub));
  if(!(*VAR_4->env->add_sub)(VAR_4, &VAR_14,
   (uint16_t)(VAR_0|VAR_10), 0, VAR_15, VAR_11, &VAR_16)){
   FUNC_4("Could not generate request: out of memory");
   return 0;
  }
 }
 else {
  FUNC_0(FUNC_2(
   VAR_4->env->attach_sub));
  if(!(*VAR_4->env->attach_sub)(VAR_4, &VAR_14,
   (uint16_t)(VAR_0|VAR_10), 0, VAR_15, VAR_11)){
   FUNC_4("Could not generate request: out of memory");
   return 0;
  }
 }


 if(*VAR_11) {

  FUNC_6(&(*VAR_11)->blacklist, (*VAR_11)->region,
   VAR_13->chain_blacklist);
 }
 VAR_4->ext_state[VAR_5] = VAR_3;
 return 1;
}
