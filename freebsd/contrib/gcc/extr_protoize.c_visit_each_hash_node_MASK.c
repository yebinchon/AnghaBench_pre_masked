
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__ const* hash_next; scalar_t__ symbol; } ;
typedef TYPE_1__ const hash_table_entry ;


 size_t VAR_0 ;
 void FUNC_0 (TYPE_1__ const*) ;
 void FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_2 (const hash_table_entry *VAR_1,
        void (*VAR_2) (const hash_table_entry *))
{
  const hash_table_entry *VAR_3;

  for (VAR_3 = VAR_1; VAR_3 < &VAR_1[VAR_0]; VAR_3++)
    if (VAR_3->symbol)
      {
 hash_table_entry *VAR_4;

 (*VAR_2)(VAR_3);
 for (VAR_4 = VAR_3->hash_next; VAR_4; VAR_4 = VAR_4->hash_next)
   (*VAR_2) (VAR_4);
      }
}
