
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct lruhash_entry {scalar_t__ key; } ;
struct TYPE_2__ {int hash; struct key_entry_key* key; } ;
struct key_entry_key {size_t namelen; TYPE_1__ entry; int key_class; int * name; } ;
struct key_cache {int slab; } ;


 int FUNC_0 (struct key_entry_key*) ;
 struct lruhash_entry* FUNC_1 (int ,int ,struct key_entry_key*,int) ;

__attribute__((used)) static struct key_entry_key*
FUNC_2(struct key_cache* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, int VAR_4)
{
 struct lruhash_entry* VAR_5;
 struct key_entry_key VAR_6;
 VAR_6.entry.key = &VAR_6;
 VAR_6.name = VAR_1;
 VAR_6.namelen = VAR_2;
 VAR_6.key_class = VAR_3;
 FUNC_0(&VAR_6);
 VAR_5 = FUNC_1(VAR_0->slab, VAR_6.entry.hash, &VAR_6, VAR_4);
 if(!VAR_5)
  return ((void*)0);
 return (struct key_entry_key*)VAR_5->key;
}
