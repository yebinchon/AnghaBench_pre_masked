
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct packed_rrset_data {size_t count; size_t rrsig_count; int * rr_ttl; int ttl; } ;



void
FUNC_0(struct packed_rrset_data* VAR_0, time_t VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = VAR_0->count + VAR_0->rrsig_count;
 VAR_0->ttl += VAR_1;
 for(VAR_2=0; VAR_2<VAR_3; VAR_2++)
  VAR_0->rr_ttl[VAR_2] += VAR_1;
}
