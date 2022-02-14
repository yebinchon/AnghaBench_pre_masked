
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {int flags; scalar_t__ ar_numrrsets; int rrset_count; size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(struct reply_info* VAR_3)
{
 size_t VAR_4;
 if(!VAR_3) return;




 if(!(VAR_3->flags&VAR_0))
  return;

 if(VAR_3->ar_numrrsets != 0) {
  FUNC_1(VAR_2, "caps fallback: removing additional section");
  VAR_3->rrset_count -= VAR_3->ar_numrrsets;
  VAR_3->ar_numrrsets = 0;
 }


 for(VAR_4=VAR_3->an_numrrsets; VAR_4<VAR_3->an_numrrsets+VAR_3->ns_numrrsets; VAR_4++) {
  struct ub_packed_rrset_key* VAR_5 = VAR_3->rrsets[VAR_4];
  if(FUNC_0(VAR_5->rk.type) == VAR_1) {




   FUNC_1(VAR_2, "caps fallback: removing NS rrset");
   if(VAR_4 < VAR_3->rrset_count-1)
    VAR_3->rrsets[VAR_4]=VAR_3->rrsets[VAR_3->rrset_count-1];
   VAR_3->rrset_count --;
   VAR_3->ns_numrrsets --;
   break;
  }
 }
}
