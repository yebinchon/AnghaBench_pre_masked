
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hash; } ;
struct key_entry_key {TYPE_1__ entry; int name; int key_class; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int) ;

void
FUNC_2(struct key_entry_key* VAR_0)
{
 VAR_0->entry.hash = 0x654;
 VAR_0->entry.hash = FUNC_1(&VAR_0->key_class, sizeof(VAR_0->key_class),
  VAR_0->entry.hash);
 VAR_0->entry.hash = FUNC_0(VAR_0->name, VAR_0->entry.hash);
}
