
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust_anchor {scalar_t__ numDS; scalar_t__ numDNSKEY; void* dnskey_rrset; void* ds_rrset; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct trust_anchor*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1(struct trust_anchor* VAR_2)
{
 if(VAR_2->numDS > 0) {
  VAR_2->ds_rrset = FUNC_0(VAR_2, VAR_2->numDS, VAR_1);
  if(!VAR_2->ds_rrset)
   return 0;
 }
 if(VAR_2->numDNSKEY > 0) {
  VAR_2->dnskey_rrset = FUNC_0(VAR_2, VAR_2->numDNSKEY,
   VAR_0);
  if(!VAR_2->dnskey_rrset)
   return 0;
 }
 return 1;
}
