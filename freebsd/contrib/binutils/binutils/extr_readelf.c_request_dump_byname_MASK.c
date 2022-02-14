
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_list_entry {int type; struct dump_list_entry* next; int name; } ;


 int FUNC_0 (char*) ;
 struct dump_list_entry* VAR_0 ;
 int FUNC_1 (int ) ;
 struct dump_list_entry* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_1, int VAR_2)
{
  struct dump_list_entry *VAR_3;

  VAR_3 = FUNC_2 (sizeof (struct dump_list_entry));
  if (!VAR_3)
    FUNC_1 (FUNC_0("Out of memory allocating dump request table.\n"));

  VAR_3->name = FUNC_3 (VAR_1);
  if (!VAR_3->name)
    FUNC_1 (FUNC_0("Out of memory allocating dump request table.\n"));

  VAR_3->type = VAR_2;

  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;
}
