
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regional {int dummy; } ;
struct TYPE_2__ {struct key_entry_key* data; struct key_entry_key* key; } ;
struct key_entry_key {int namelen; char* reason; TYPE_1__ entry; int * algo; struct key_entry_key* rrset_data; struct key_entry_key* name; } ;
struct key_entry_data {int namelen; char* reason; TYPE_1__ entry; int * algo; struct key_entry_data* rrset_data; struct key_entry_data* name; } ;


 int FUNC_0 (struct key_entry_key*) ;
 int FUNC_1 (struct key_entry_key*) ;
 void* FUNC_2 (struct regional*,struct key_entry_key*,int) ;
 char* FUNC_3 (struct regional*,char*) ;

struct key_entry_key*
FUNC_4(struct key_entry_key* VAR_0, struct regional* VAR_1)
{
 struct key_entry_key* VAR_2;
 VAR_2 = FUNC_2(VAR_1, VAR_0, sizeof(*VAR_0));
 if(!VAR_2)
  return ((void*)0);
 VAR_2->name = FUNC_2(VAR_1, VAR_0->name, VAR_0->namelen);
 if(!VAR_2->name)
  return ((void*)0);
 VAR_2->entry.key = VAR_2;
 if(VAR_2->entry.data) {

  struct key_entry_data *VAR_3 = (struct key_entry_data*)
   VAR_0->entry.data;
  struct key_entry_data *VAR_4;
  VAR_4 = FUNC_2(VAR_1, VAR_3, sizeof(*VAR_3));
  if(!VAR_4)
   return ((void*)0);

  if(VAR_3->rrset_data) {
   VAR_4->rrset_data = FUNC_2(VAR_1,
    VAR_3->rrset_data,
    FUNC_1(VAR_3->rrset_data));
   if(!VAR_4->rrset_data)
    return ((void*)0);
   FUNC_0(VAR_4->rrset_data);
  }
  if(VAR_3->reason) {
   VAR_4->reason = FUNC_3(VAR_1, VAR_3->reason);
   if(!VAR_4->reason)
    return ((void*)0);
  }
  if(VAR_3->algo) {
   VAR_4->algo = (uint8_t*)FUNC_3(VAR_1,
    (char*)VAR_3->algo);
   if(!VAR_4->algo)
    return ((void*)0);
  }
  VAR_2->entry.data = VAR_4;
 }
 return VAR_2;
}
