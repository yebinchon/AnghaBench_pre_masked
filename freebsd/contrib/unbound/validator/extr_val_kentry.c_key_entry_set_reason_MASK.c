
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct key_entry_key {TYPE_1__ entry; } ;
struct key_entry_data {char* reason; } ;



void
FUNC_0(struct key_entry_key* VAR_0, char* VAR_1)
{
 struct key_entry_data* VAR_2 = (struct key_entry_data*)VAR_0->entry.data;
 VAR_2->reason = VAR_1;
}
