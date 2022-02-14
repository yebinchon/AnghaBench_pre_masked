
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mt_status_entry {scalar_t__ var_type; int * desc; int value; int entry_name; int * parent; } ;
struct mt_print_params {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sbuf*,int *,struct mt_print_params*) ;
 int FUNC_1 (struct sbuf*,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(struct sbuf *VAR_3, struct mt_status_entry *VAR_4, void *VAR_5)
{
 struct mt_print_params *VAR_6;

 VAR_6 = (struct mt_print_params *)VAR_5;




 if (VAR_4->var_type == VAR_2)
  return;

 if ((VAR_6->flags & VAR_0)
  && (VAR_4->parent != ((void*)0)))
  FUNC_0(VAR_3, VAR_4->parent, VAR_6);

 FUNC_1(VAR_3, "%s: %s", VAR_4->entry_name, VAR_4->value);
 if ((VAR_6->flags & VAR_1)
  && (VAR_4->desc != ((void*)0))
  && (FUNC_2(VAR_4->desc) > 0))
  FUNC_1(VAR_3, " (%s)", VAR_4->desc);
 FUNC_1(VAR_3, "\n");

}
