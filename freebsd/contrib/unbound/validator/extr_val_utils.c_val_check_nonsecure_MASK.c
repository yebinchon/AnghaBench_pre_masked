
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; scalar_t__ ar_numrrsets; TYPE_4__** rrsets; int security; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct module_env {TYPE_2__* cfg; } ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_6__ {int rrset_class; int type; int dname; } ;
struct TYPE_9__ {TYPE_3__ entry; TYPE_1__ rk; } ;
struct TYPE_7__ {int val_clean_additional; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_4__**,TYPE_4__**,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(struct module_env* VAR_5, struct reply_info* VAR_6)
{
 size_t VAR_7;

 for(VAR_7=VAR_6->an_numrrsets; VAR_7<VAR_6->an_numrrsets+VAR_6->ns_numrrsets; VAR_7++) {
  if(((struct packed_rrset_data*)VAR_6->rrsets[VAR_7]->entry.data)
   ->security != VAR_4) {
   if(VAR_6->an_numrrsets != 0 &&
    FUNC_2(VAR_6->rrsets[VAR_7]->rk.type)
    == VAR_0) {
    FUNC_3(VAR_1, "truncate to minimal");
    VAR_6->ar_numrrsets = 0;
    VAR_6->rrset_count = VAR_6->an_numrrsets +
     VAR_6->ns_numrrsets;

    FUNC_1(VAR_6->rrsets+VAR_7, VAR_6->rrsets+VAR_7+1,
     sizeof(struct ub_packed_rrset_key*)*
     (VAR_6->rrset_count - VAR_7 - 1));
    VAR_6->ns_numrrsets--;
    VAR_6->rrset_count--;
    VAR_7--;
    return;
   }

   FUNC_0(VAR_2, "message is bogus, "
    "non secure rrset",
    VAR_6->rrsets[VAR_7]->rk.dname,
    FUNC_2(VAR_6->rrsets[VAR_7]->rk.type),
    FUNC_2(VAR_6->rrsets[VAR_7]->rk.rrset_class));
   VAR_6->security = VAR_3;
   return;
  }
 }

 if(!VAR_5->cfg->val_clean_additional)
  return;
 for(VAR_7=VAR_6->an_numrrsets+VAR_6->ns_numrrsets; VAR_7<VAR_6->rrset_count; VAR_7++) {
  if(((struct packed_rrset_data*)VAR_6->rrsets[VAR_7]->entry.data)
   ->security != VAR_4) {
   FUNC_1(VAR_6->rrsets+VAR_7, VAR_6->rrsets+VAR_7+1,
    sizeof(struct ub_packed_rrset_key*)*
    (VAR_6->rrset_count - VAR_7 - 1));
   VAR_6->ar_numrrsets--;
   VAR_6->rrset_count--;
   VAR_7--;
  }
 }
}
