
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_table_info {unsigned int number; int initial_entries; } ;
struct xt_table {int af; int name; struct xt_table_info* private; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {int audit_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (struct audit_buffer*,char*,int ,int ,unsigned int) ;
 struct audit_buffer* FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

struct xt_table_info *
FUNC_6(struct xt_table *VAR_5,
       unsigned int VAR_6,
       struct xt_table_info *VAR_7,
       int *VAR_8)
{
 struct xt_table_info *VAR_9;


 FUNC_4();
 VAR_9 = VAR_5->private;


 if (VAR_6 != VAR_9->number) {
  FUNC_3("num_counters != table->private->number (%u/%u)\n",
    VAR_6, VAR_9->number);
  FUNC_5();
  *VAR_8 = -VAR_1;
  return ((void*)0);
 }

 VAR_5->private = VAR_7;
 VAR_7->initial_entries = VAR_9->initial_entries;







 FUNC_5();
 return VAR_9;
}
