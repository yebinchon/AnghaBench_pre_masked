
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct process_info {int dummy; } ;
struct inferior_list_entry {int dummy; } ;


 int VAR_0 ;
 struct process_info* FUNC_0 (struct thread_info*) ;
 int FUNC_1 (struct process_info*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct inferior_list_entry *VAR_1)
{
  struct thread_info *VAR_2 = (struct thread_info *) VAR_1;
  struct process_info *VAR_3 = FUNC_0 (VAR_2);

  FUNC_2 (VAR_0, FUNC_1 (VAR_3), 0, 0);
}
