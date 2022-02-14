
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct export_list {char const* name; int is_data; struct export_list* next; } ;


 struct export_list* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1 (const char *VAR_1, int VAR_2)
{
  struct export_list *VAR_3;

  VAR_3 = (struct export_list *) FUNC_0 (sizeof *VAR_3);
  VAR_3->next = VAR_0;
  VAR_3->name = VAR_1;
  VAR_3->is_data = VAR_2;
  VAR_0 = VAR_3;
}
