
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* nonalpha_chars; TYPE_1__* null_entry; TYPE_1__** value_hash_table; TYPE_1__** name_hash_table; } ;
struct TYPE_8__ {scalar_t__* name; struct TYPE_8__* next_value; int value; struct TYPE_8__* next_name; } ;
typedef TYPE_1__ CGEN_KEYWORD_ENTRY ;
typedef TYPE_2__ CGEN_KEYWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (TYPE_2__*,scalar_t__*,int ) ;
 unsigned int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__) ;
 size_t FUNC_6 (scalar_t__*) ;

void
FUNC_7 (CGEN_KEYWORD *VAR_0, CGEN_KEYWORD_ENTRY *VAR_1)
{
  unsigned int VAR_2;
  size_t VAR_3;

  if (VAR_0->name_hash_table == ((void*)0))
    FUNC_2 (VAR_0);

  VAR_2 = FUNC_3 (VAR_0, VAR_1->name, 0);
  VAR_1->next_name = VAR_0->name_hash_table[VAR_2];
  VAR_0->name_hash_table[VAR_2] = VAR_1;

  VAR_2 = FUNC_4 (VAR_0, VAR_1->value);
  VAR_1->next_value = VAR_0->value_hash_table[VAR_2];
  VAR_0->value_hash_table[VAR_2] = VAR_1;

  if (VAR_1->name[0] == 0)
    VAR_0->null_entry = VAR_1;

  for (VAR_3 = 1; VAR_3 < FUNC_6 (VAR_1->name); VAR_3++)
    if (! FUNC_0 (VAR_1->name[VAR_3])
 && ! FUNC_5 (VAR_0->nonalpha_chars, VAR_1->name[VAR_3]))
      {
 size_t VAR_4 = FUNC_6 (VAR_0->nonalpha_chars);




 if (VAR_4 >= sizeof (VAR_0->nonalpha_chars) - 1)
   FUNC_1 ();
 VAR_0->nonalpha_chars[VAR_4] = VAR_1->name[VAR_3];
 VAR_0->nonalpha_chars[VAR_4+1] = 0;
      }
}
