
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outbound_entry {int dummy; } ;
struct module_qstate {scalar_t__* ext_state; int no_cache_store; struct dns64_qstate** minfo; int region; int qinfo; } ;
struct dns64_qstate {scalar_t__ state; int started_no_cache_store; } ;
typedef enum module_ev { ____Placeholder_module_ev } module_ev ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct module_qstate*,int) ;
 scalar_t__ FUNC_1 (struct module_qstate*,int) ;
 int FUNC_2 (int ,char*,int *) ;



 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int,int ,int ) ;

void
FUNC_7(struct module_qstate* VAR_4, enum module_ev VAR_5, int VAR_6,
  struct outbound_entry* VAR_7)
{
 struct dns64_qstate* VAR_8;
 (void)VAR_7;
 FUNC_6(VAR_2, "dns64[module %d] operate: extstate:%s event:%s",
   VAR_6, FUNC_4(VAR_4->ext_state[VAR_6]),
   FUNC_5(VAR_5));
 FUNC_2(VAR_2, "dns64 operate: query", &VAR_4->qinfo);

 switch(VAR_5) {
  case 129:

   VAR_8 = (struct dns64_qstate*)FUNC_3(
    VAR_4->region, sizeof(*VAR_8));
   VAR_4->minfo[VAR_6] = VAR_8;
   VAR_8->state = VAR_1;
   VAR_8->started_no_cache_store = VAR_4->no_cache_store;
   VAR_4->no_cache_store = 1;

  case 128:
   VAR_4->ext_state[VAR_6] = FUNC_1(VAR_4, VAR_6);
   break;
  case 130:
   VAR_4->ext_state[VAR_6] = FUNC_0(VAR_4, VAR_6);
   break;
  default:
   VAR_4->ext_state[VAR_6] = VAR_3;
   break;
 }
 if(VAR_4->ext_state[VAR_6] == VAR_3) {
  VAR_8 = (struct dns64_qstate*)VAR_4->minfo[VAR_6];
  if(VAR_8 && VAR_8->state != VAR_0)
   VAR_4->no_cache_store = VAR_8->started_no_cache_store;
 }
}
