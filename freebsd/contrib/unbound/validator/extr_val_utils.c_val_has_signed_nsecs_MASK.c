
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; TYPE_3__** rrsets; } ;
struct packed_rrset_data {scalar_t__ rrsig_count; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_2__ entry; TYPE_1__ rk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct reply_info* VAR_2, char** VAR_3)
{
 size_t VAR_4, VAR_5 = 0, VAR_6 = 0;
 struct packed_rrset_data* VAR_7;
 for(VAR_4=VAR_2->an_numrrsets; VAR_4<VAR_2->an_numrrsets+VAR_2->ns_numrrsets; VAR_4++) {
  if(VAR_2->rrsets[VAR_4]->rk.type == FUNC_0(VAR_0))
   VAR_5++;
  else if(VAR_2->rrsets[VAR_4]->rk.type == FUNC_0(VAR_1))
   VAR_6++;
  else continue;
  VAR_7 = (struct packed_rrset_data*)VAR_2->rrsets[VAR_4]->entry.data;
  if(VAR_7 && VAR_7->rrsig_count != 0) {
   return 1;
  }
 }
 if(VAR_5 == 0 && VAR_6 == 0)
  *VAR_3 = "no DNSSEC records";
 else if(VAR_5 != 0)
  *VAR_3 = "no signatures over NSECs";
 else *VAR_3 = "no signatures over NSEC3s";
 return 0;
}
