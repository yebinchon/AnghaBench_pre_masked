
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct reply_info {size_t rrset_count; TYPE_3__* ref; int serve_expired_ttl; int prefetch_ttl; int ttl; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; int * rr_ttl; int ttl; } ;
struct TYPE_6__ {TYPE_2__* key; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__ entry; } ;



void
FUNC_0(struct reply_info* VAR_0, time_t VAR_1)
{
 size_t VAR_2, VAR_3;
 VAR_0->ttl += VAR_1;
 VAR_0->prefetch_ttl += VAR_1;
 VAR_0->serve_expired_ttl += VAR_1;
 for(VAR_2=0; VAR_2<VAR_0->rrset_count; VAR_2++) {
  struct packed_rrset_data* VAR_4 = (struct packed_rrset_data*)
   VAR_0->ref[VAR_2].key->entry.data;
  if(VAR_2>0 && VAR_0->ref[VAR_2].key == VAR_0->ref[VAR_2-1].key)
   continue;
  VAR_4->ttl += VAR_1;
  for(VAR_3=0; VAR_3<VAR_4->count + VAR_4->rrsig_count; VAR_3++) {
   VAR_4->rr_ttl[VAR_3] += VAR_1;
  }
 }
}
