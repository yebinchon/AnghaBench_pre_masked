
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct inferior_regcache_data {scalar_t__ registers_valid; } ;
struct inferior_list_entry {int dummy; } ;


 struct thread_info* VAR_0 ;
 scalar_t__ FUNC_0 (struct thread_info*) ;
 int FUNC_1 (int) ;

void
FUNC_2 (struct inferior_list_entry *VAR_1)
{
  struct thread_info *VAR_2 = (struct thread_info *) VAR_1;
  struct inferior_regcache_data *VAR_3;

  VAR_3 = (struct inferior_regcache_data *) FUNC_0 (VAR_2);

  if (VAR_3->registers_valid)
    {
      struct thread_info *VAR_4 = VAR_0;

      VAR_0 = VAR_2;
      FUNC_1 (-1);
      VAR_0 = VAR_4;
    }

  VAR_3->registers_valid = 0;
}
