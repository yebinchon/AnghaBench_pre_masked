
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust_anchor {struct trust_anchor* name; struct trust_anchor* autr; struct trust_anchor* file; struct trust_anchor* rr; struct trust_anchor* next; struct trust_anchor* keys; int dnskey_rrset; int ds_rrset; int lock; } ;
struct autr_ta {struct autr_ta* name; struct autr_ta* autr; struct autr_ta* file; struct autr_ta* rr; struct autr_ta* next; struct autr_ta* keys; int dnskey_rrset; int ds_rrset; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct trust_anchor*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct trust_anchor*) ;

void FUNC_4(struct trust_anchor* VAR_0)
{
 if(!VAR_0)
  return;
 FUNC_3(&VAR_0->lock, VAR_0);
 FUNC_3(&VAR_0->lock, VAR_0->autr);
 FUNC_2(&VAR_0->lock);
 FUNC_0(VAR_0->ds_rrset);
 FUNC_0(VAR_0->dnskey_rrset);
 if(VAR_0->autr) {
  struct autr_ta* VAR_1 = VAR_0->autr->keys, *VAR_2;
  while(VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_1(VAR_1->rr);
   FUNC_1(VAR_1);
   VAR_1 = VAR_2;
  }
  FUNC_1(VAR_0->autr->file);
  FUNC_1(VAR_0->autr);
 }
 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
