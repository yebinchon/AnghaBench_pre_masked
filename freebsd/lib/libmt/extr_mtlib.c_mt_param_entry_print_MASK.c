
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_status_entry {scalar_t__ var_type; char* entry_name; char* value; char* desc; int * parent; } ;
struct mt_print_params {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct mt_print_params*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*) ;

void
FUNC_3(struct mt_status_entry *VAR_3, void *VAR_4)
{
 struct mt_print_params *VAR_5;

 VAR_5 = (struct mt_print_params *)VAR_4;




 if (VAR_3->var_type == VAR_2)
  return;

 if ((VAR_5->flags & VAR_0)
  && (VAR_3->parent != ((void*)0)))
  FUNC_0(VAR_3->parent, VAR_5);

 FUNC_1("%s: %s", VAR_3->entry_name, VAR_3->value);
 if ((VAR_5->flags & VAR_1)
  && (VAR_3->desc != ((void*)0))
  && (FUNC_2(VAR_3->desc) > 0))
  FUNC_1(" (%s)", VAR_3->desc);
 FUNC_1("\n");
}
