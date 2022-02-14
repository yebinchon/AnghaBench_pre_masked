
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; int ar_numrrsets; TYPE_2__** rrsets; } ;
struct packed_rrset_data {int security; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__ entry; } ;


 int FUNC_0 (TYPE_2__**,TYPE_2__**,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct reply_info* VAR_1)
{

 size_t VAR_2;
 enum sec_status VAR_3;

 for(VAR_2 = VAR_1->an_numrrsets+VAR_1->ns_numrrsets; VAR_2<VAR_1->rrset_count; VAR_2++) {
  VAR_3 = ((struct packed_rrset_data*)VAR_1->rrsets[VAR_2]->entry.data)
   ->security;
  if(VAR_3 != VAR_0) {
   FUNC_0(VAR_1->rrsets+VAR_2, VAR_1->rrsets+VAR_2+1,
    sizeof(struct ub_packed_rrset_key*)*
    (VAR_1->rrset_count - VAR_2 - 1));
   VAR_1->ar_numrrsets--;
   VAR_1->rrset_count--;
   VAR_2--;
  }
 }
}
