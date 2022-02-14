
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct trust_anchor {scalar_t__ numDS; scalar_t__ numDNSKEY; int lock; } ;
struct module_env {int scratch; int * now; scalar_t__ key_cache; int anchors; } ;
struct key_entry_key {int name; } ;
struct dns_msg {scalar_t__ rep; } ;
struct delegpt {int name; int namelen; int namelabs; } ;


 int VAR_0 ;
 struct trust_anchor* FUNC_0 (int ,int ,int ,int ,int ) ;
 struct key_entry_key* FUNC_1 (scalar_t__,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct key_entry_key*) ;
 scalar_t__ FUNC_3 (struct key_entry_key*) ;
 scalar_t__ FUNC_4 (struct key_entry_key*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ,int ,int ) ;

int
FUNC_9(struct module_env* VAR_1, struct delegpt* VAR_2,
        struct dns_msg* VAR_3, uint16_t VAR_4)
{
 struct trust_anchor* VAR_5;

 if(!VAR_1 || !VAR_1->anchors || !VAR_2 || !VAR_2->name)
  return 0;

 if((VAR_5=FUNC_0(VAR_1->anchors, VAR_2->name, VAR_2->namelabs, VAR_2->namelen,
  VAR_4))) {
  if(VAR_5->numDS == 0 && VAR_5->numDNSKEY == 0) {

   FUNC_5(&VAR_5->lock);
   return 0;
  }
  FUNC_5(&VAR_5->lock);
  return 1;
 }

 if(VAR_3 && VAR_3->rep &&
  FUNC_8(VAR_3->rep, VAR_2->name, VAR_2->namelen,
  VAR_0, VAR_4))
  return 1;

 if(VAR_1->key_cache) {
  struct key_entry_key* VAR_6 = FUNC_1(VAR_1->key_cache,
   VAR_2->name, VAR_2->namelen, VAR_4, VAR_1->scratch, *VAR_1->now);
  if(VAR_6) {
   if(FUNC_6(VAR_6->name, VAR_2->name) == 0) {
     if(FUNC_3(VAR_6) || FUNC_2(VAR_6)) {
    FUNC_7(VAR_1->scratch);
    return 1;
     } else if(FUNC_4(VAR_6)) {
    FUNC_7(VAR_1->scratch);
    return 0;
     }
   }
   FUNC_7(VAR_1->scratch);
  }
 }
 return 0;
}
