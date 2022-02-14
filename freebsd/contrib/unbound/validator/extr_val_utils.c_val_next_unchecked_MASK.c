
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reply_info {size_t rrset_count; TYPE_2__** rrsets; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;


 scalar_t__ VAR_0 ;

size_t
FUNC_0(struct reply_info* VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 struct packed_rrset_data* VAR_4;
 for(VAR_3=VAR_2+1; VAR_3<VAR_1->rrset_count; VAR_3++) {
  VAR_4 = (struct packed_rrset_data*)VAR_1->rrsets[VAR_3]->entry.data;
  if(VAR_4->security == VAR_0) {
   return VAR_3;
  }
 }
 return VAR_1->rrset_count;
}
