
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct file {unsigned long f_pos; } ;
struct ctl_table_header {int dummy; } ;
typedef int filldir_t ;
struct TYPE_4__ {scalar_t__ procname; scalar_t__ ctl_name; } ;
typedef TYPE_1__ ctl_table ;


 int FUNC_0 (struct file*,void*,int ,struct ctl_table_header*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct ctl_table_header *VAR_0, ctl_table *VAR_1,
  unsigned long *VAR_2, struct file *VAR_3,
  void *VAR_4, filldir_t VAR_5)
{

 for (; VAR_1->ctl_name || VAR_1->procname; VAR_1++, (*VAR_2)++) {
  int VAR_6;


  if (!VAR_1->procname)
   continue;

  if (*VAR_2 < VAR_3->f_pos)
   continue;

  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0, VAR_1);
  if (VAR_6)
   return VAR_6;

  VAR_3->f_pos = *VAR_2 + 1;
 }
 return 0;
}
