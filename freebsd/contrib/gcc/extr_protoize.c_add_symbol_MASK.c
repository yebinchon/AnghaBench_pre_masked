
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fip; int * ddip; int symbol; int * hash_next; } ;
typedef TYPE_1__ hash_table_entry ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static hash_table_entry *
FUNC_1 (hash_table_entry *VAR_0, const char *VAR_1)
{
  VAR_0->hash_next = ((void*)0);
  VAR_0->symbol = FUNC_0 (VAR_1);
  VAR_0->ddip = ((void*)0);
  VAR_0->fip = ((void*)0);
  return VAR_0;
}
