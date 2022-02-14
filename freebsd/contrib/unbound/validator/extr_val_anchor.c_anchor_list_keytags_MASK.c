
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct trust_anchor {scalar_t__ numDS; scalar_t__ numDNSKEY; TYPE_4__* dnskey_rrset; TYPE_3__* ds_rrset; } ;
struct packed_rrset_data {size_t count; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_2__ entry; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_7__ {TYPE_1__ entry; } ;


 int FUNC_0 (TYPE_4__*,size_t) ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int *,size_t,int,int ) ;

size_t
FUNC_3(struct trust_anchor* VAR_1, uint16_t* VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5 = 0;
 if(VAR_1->numDS == 0 && VAR_1->numDNSKEY == 0)
  return 0;
 if(VAR_1->numDS != 0 && VAR_1->ds_rrset) {
  struct packed_rrset_data* VAR_6=(struct packed_rrset_data*)
   VAR_1->ds_rrset->entry.data;
  for(VAR_4=0; VAR_4<VAR_6->count; VAR_4++) {
   if(VAR_5 == VAR_3) continue;
   VAR_2[VAR_5++] = FUNC_1(VAR_1->ds_rrset, VAR_4);
  }
 }
 if(VAR_1->numDNSKEY != 0 && VAR_1->dnskey_rrset) {
  struct packed_rrset_data* VAR_7=(struct packed_rrset_data*)
   VAR_1->dnskey_rrset->entry.data;
  for(VAR_4=0; VAR_4<VAR_7->count; VAR_4++) {
   if(VAR_5 == VAR_3) continue;
   VAR_2[VAR_5++] = FUNC_0(VAR_1->dnskey_rrset, VAR_4);
  }
 }
 FUNC_2(VAR_2, VAR_5, sizeof(*VAR_2), VAR_0);
 return VAR_5;
}
