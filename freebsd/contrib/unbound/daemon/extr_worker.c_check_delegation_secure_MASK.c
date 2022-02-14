
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; TYPE_2__** rrsets; } ;
struct packed_rrset_data {int security; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum sec_status
FUNC_0(struct reply_info *VAR_2)
{

 size_t VAR_3;
 enum sec_status VAR_4 = VAR_0;
 enum sec_status VAR_5;
 size_t VAR_6 = VAR_2->an_numrrsets + VAR_2->ns_numrrsets;

 for(VAR_3=0; VAR_3<VAR_6; VAR_3++) {
  VAR_5 = ((struct packed_rrset_data*)VAR_2->rrsets[VAR_3]->entry.data)
   ->security;
  if(VAR_5 < VAR_4)
   VAR_4 = VAR_5;
 }

 for(VAR_3=VAR_6; VAR_3<VAR_2->rrset_count; VAR_3++) {
  VAR_5 = ((struct packed_rrset_data*)VAR_2->rrsets[VAR_3]->entry.data)
   ->security;
  if(VAR_5 == VAR_1)
   return VAR_5;
 }
 return VAR_4;
}
