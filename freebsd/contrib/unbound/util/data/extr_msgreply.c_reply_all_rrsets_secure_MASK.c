
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

int
FUNC_0(struct reply_info* VAR_1)
{
 size_t VAR_2;
 for(VAR_2=0; VAR_2<VAR_1->rrset_count; VAR_2++) {
  if( ((struct packed_rrset_data*)VAR_1->rrsets[VAR_2]->entry.data)
   ->security != VAR_0 )
  return 0;
 }
 return 1;
}
