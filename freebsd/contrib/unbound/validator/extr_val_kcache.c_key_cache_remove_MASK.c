
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int hash; struct key_entry_key* key; } ;
struct key_entry_key {size_t namelen; TYPE_1__ entry; int key_class; int * name; } ;
struct key_cache {int slab; } ;


 int FUNC_0 (struct key_entry_key*) ;
 int FUNC_1 (int ,int ,struct key_entry_key*) ;

void FUNC_2(struct key_cache* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3)
{
 struct key_entry_key VAR_4;
 VAR_4.entry.key = &VAR_4;
 VAR_4.name = VAR_1;
 VAR_4.namelen = VAR_2;
 VAR_4.key_class = VAR_3;
 FUNC_0(&VAR_4);
 FUNC_1(VAR_0->slab, VAR_4.entry.hash, &VAR_4);
}
