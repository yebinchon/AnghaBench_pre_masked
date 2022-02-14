
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct trust_anchor {TYPE_2__* autr; void* numDNSKEY; void* numDS; struct ub_packed_rrset_key* dnskey_rrset; struct ub_packed_rrset_key* ds_rrset; } ;
struct TYPE_4__ {int keys; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ub_packed_rrset_key*) ;
 void* FUNC_3 (int ,int ) ;
 struct ub_packed_rrset_key* FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct trust_anchor* VAR_2)
{
 struct ub_packed_rrset_key* VAR_3=((void*)0), *VAR_4=((void*)0);




 if(FUNC_1(VAR_1, VAR_2->autr->keys)) {
  VAR_3 = FUNC_4(
   VAR_1, VAR_2->autr->keys);
  if(!VAR_3)
   goto error_cleanup;
  VAR_3->entry.data = FUNC_3(
   VAR_1, VAR_2->autr->keys);
  if(!VAR_3->entry.data)
   goto error_cleanup;
 }


 if(FUNC_1(VAR_0, VAR_2->autr->keys)) {
  VAR_4 = FUNC_4(
   VAR_0, VAR_2->autr->keys);
  if(!VAR_4)
   goto error_cleanup;
  VAR_4->entry.data = FUNC_3(
   VAR_0, VAR_2->autr->keys);
  if(!VAR_4->entry.data) {
  error_cleanup:
   FUNC_2(VAR_3);
   FUNC_2(VAR_4);
   return 0;
  }
 }






 FUNC_2(VAR_2->ds_rrset);
 FUNC_2(VAR_2->dnskey_rrset);


 VAR_2->ds_rrset = VAR_3;
 VAR_2->dnskey_rrset = VAR_4;
 VAR_2->numDS = FUNC_0(VAR_1,
  VAR_2->autr->keys);
 VAR_2->numDNSKEY = FUNC_0(VAR_0,
  VAR_2->autr->keys);
 return 1;
}
