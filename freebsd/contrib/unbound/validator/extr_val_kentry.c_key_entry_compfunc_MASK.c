
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry_key {scalar_t__ key_class; int name; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(void* VAR_0, void* VAR_1)
{
 struct key_entry_key* VAR_2 = (struct key_entry_key*)VAR_0;
 struct key_entry_key* VAR_3 = (struct key_entry_key*)VAR_1;
 if(VAR_2->key_class != VAR_3->key_class) {
  if(VAR_2->key_class < VAR_3->key_class)
   return -1;
  return 1;
 }
 return FUNC_0(VAR_2->name, VAR_3->name);
}
