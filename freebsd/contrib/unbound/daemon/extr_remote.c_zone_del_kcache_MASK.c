
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {scalar_t__ data; scalar_t__ key; } ;
struct key_entry_key {int name; } ;
struct key_entry_data {scalar_t__ ttl; } ;
struct del_info {scalar_t__ expired; int num_keys; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct lruhash_entry* VAR_0, void* VAR_1)
{

 struct del_info* VAR_2 = (struct del_info*)VAR_1;
 struct key_entry_key* VAR_3 = (struct key_entry_key*)VAR_0->key;
 if(FUNC_0(VAR_3->name, VAR_2->name)) {
  struct key_entry_data* VAR_4 = (struct key_entry_data*)VAR_0->data;
  if(VAR_4->ttl > VAR_2->expired) {
   VAR_4->ttl = VAR_2->expired;
   VAR_2->num_keys++;
  }
 }
}
