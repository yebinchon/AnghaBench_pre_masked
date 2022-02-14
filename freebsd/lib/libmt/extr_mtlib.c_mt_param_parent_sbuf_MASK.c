
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mt_status_entry {int entry_name; struct mt_status_entry* parent; } ;
struct mt_print_params {int flags; int root_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void
FUNC_2(struct sbuf *VAR_1, struct mt_status_entry *VAR_2,
    struct mt_print_params *VAR_3)
{
 if (VAR_2->parent != ((void*)0))
  FUNC_2(VAR_1, VAR_2->parent, VAR_3);

 if (((VAR_3->flags & VAR_0) == 0)
  && (FUNC_1(VAR_2->entry_name, VAR_3->root_name) == 0))
  return;

 FUNC_0(VAR_1, "%s.", VAR_2->entry_name);
}
