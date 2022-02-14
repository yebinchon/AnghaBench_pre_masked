
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {scalar_t__ data; } ;
struct key_entry_data {int ttl; scalar_t__ isbad; } ;
struct del_info {int num_keys; int expired; } ;



__attribute__((used)) static void
FUNC_0(struct lruhash_entry* VAR_0, void* VAR_1)
{

 struct del_info* VAR_2 = (struct del_info*)VAR_1;
 struct key_entry_data* VAR_3 = (struct key_entry_data*)VAR_0->data;
 if(VAR_3->isbad) {
  VAR_3->ttl = VAR_2->expired;
  VAR_2->num_keys++;
 }
}
