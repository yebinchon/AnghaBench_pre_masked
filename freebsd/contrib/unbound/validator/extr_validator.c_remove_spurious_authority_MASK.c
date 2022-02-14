
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reply_info {size_t an_numrrsets; int ns_numrrsets; TYPE_3__** rrsets; } ;
struct packed_rrset_data {scalar_t__ rrsig_count; } ;
struct TYPE_5__ {int dname; int type; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ rk; TYPE_1__ entry; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct reply_info*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct reply_info* VAR_2,
 struct reply_info* VAR_3)
{
 size_t VAR_4, VAR_5 = 0;
 int VAR_6 = 0;

 if(VAR_2->an_numrrsets == 0 && VAR_2->ns_numrrsets == 1)
  return;

 for(VAR_4 = VAR_2->an_numrrsets;
  VAR_4 < VAR_2->an_numrrsets+VAR_2->ns_numrrsets; VAR_4++) {
  struct packed_rrset_data* VAR_7 = (struct packed_rrset_data*)
   VAR_2->rrsets[VAR_4]->entry.data;
  if(FUNC_1(VAR_2->rrsets[VAR_4]->rk.type) == VAR_0
   && VAR_7->rrsig_count == 0) {
   VAR_5 = VAR_4;
   VAR_6 = 1;
   break;
  }
 }

 if(!VAR_6) return;
 FUNC_0(VAR_1, "Removing spurious unsigned NS record "
  "(likely inserted by forwarder)", VAR_2->rrsets[VAR_5]);


 for(VAR_4 = VAR_3->an_numrrsets;
  VAR_4 < VAR_3->an_numrrsets+VAR_3->ns_numrrsets; VAR_4++) {
  if(FUNC_1(VAR_3->rrsets[VAR_4]->rk.type) == VAR_0
   && FUNC_2(VAR_3->rrsets[VAR_4]->rk.dname,
    VAR_2->rrsets[VAR_5]->rk.dname) == 0) {

   FUNC_3(VAR_3, VAR_4);
   break;
  }
 }

 FUNC_3(VAR_2, VAR_5);
}
