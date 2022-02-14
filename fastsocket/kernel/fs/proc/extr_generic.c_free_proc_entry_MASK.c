
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {unsigned int low_ino; struct proc_dir_entry* data; int mode; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(struct proc_dir_entry *VAR_1)
{
 unsigned int VAR_2 = VAR_1->low_ino;

 if (VAR_2 < VAR_0)
  return;

 FUNC_2(VAR_2);

 if (FUNC_0(VAR_1->mode))
  FUNC_1(VAR_1->data);
 FUNC_1(VAR_1);
}
