
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int count; int name; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(struct proc_dir_entry *VAR_0)
{
 if (!FUNC_1(&VAR_0->count)) {
  FUNC_3("de_put: entry %s already free!\n", VAR_0->name);
  return;
 }

 if (FUNC_0(&VAR_0->count))
  FUNC_2(VAR_0);
}
