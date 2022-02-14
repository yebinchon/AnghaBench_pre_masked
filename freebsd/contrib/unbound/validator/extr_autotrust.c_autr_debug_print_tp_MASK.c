
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; scalar_t__ dnskey_rrset; scalar_t__ ds_rrset; scalar_t__ numDNSKEY; scalar_t__ numDS; scalar_t__ dclass; int name; } ;
struct autr_ta {struct autr_ta* next; } ;
struct TYPE_2__ {unsigned int file; struct autr_ta* keys; scalar_t__ query_failed; scalar_t__ retry_time; scalar_t__ query_interval; scalar_t__ next_probe_time; scalar_t__ last_success; scalar_t__ last_queried; } ;


 int FUNC_0 (struct autr_ta*) ;
 int FUNC_1 (scalar_t__*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct trust_anchor* VAR_0)
{
 struct autr_ta* VAR_1;
 char VAR_2[257];
 if(!VAR_0->autr)
  return;
 FUNC_2(VAR_0->name, VAR_2);
 FUNC_3("trust point %s : %d", VAR_2, (int)VAR_0->dclass);
 FUNC_3("assembled %d DS and %d DNSKEYs",
  (int)VAR_0->numDS, (int)VAR_0->numDNSKEY);
 if(VAR_0->ds_rrset) {
  FUNC_4(0, "DS:", VAR_0->ds_rrset);
 }
 if(VAR_0->dnskey_rrset) {
  FUNC_4(0, "DNSKEY:", VAR_0->dnskey_rrset);
 }
 FUNC_3("file %s", VAR_0->autr->file);
 FUNC_1(&VAR_0->autr->last_queried, VAR_2);
 if(VAR_2[0]) VAR_2[FUNC_5(VAR_2)-1]=0;
 FUNC_3("last_queried: %u %s", (unsigned)VAR_0->autr->last_queried, VAR_2);
 FUNC_1(&VAR_0->autr->last_success, VAR_2);
 if(VAR_2[0]) VAR_2[FUNC_5(VAR_2)-1]=0;
 FUNC_3("last_success: %u %s", (unsigned)VAR_0->autr->last_success, VAR_2);
 FUNC_1(&VAR_0->autr->next_probe_time, VAR_2);
 if(VAR_2[0]) VAR_2[FUNC_5(VAR_2)-1]=0;
 FUNC_3("next_probe_time: %u %s", (unsigned)VAR_0->autr->next_probe_time,
  VAR_2);
 FUNC_3("query_interval: %u", (unsigned)VAR_0->autr->query_interval);
 FUNC_3("retry_time: %u", (unsigned)VAR_0->autr->retry_time);
 FUNC_3("query_failed: %u", (unsigned)VAR_0->autr->query_failed);

 for(VAR_1=VAR_0->autr->keys; VAR_1; VAR_1=VAR_1->next) {
  FUNC_0(VAR_1);
 }
}
