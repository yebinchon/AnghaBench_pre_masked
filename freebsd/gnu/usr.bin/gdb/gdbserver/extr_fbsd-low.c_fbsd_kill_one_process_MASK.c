
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct process_info {int dummy; } ;
struct inferior_list_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct thread_info*) ;
 struct process_info* FUNC_2 (struct thread_info*) ;
 int FUNC_3 (struct process_info*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5 (struct inferior_list_entry *VAR_1)
{
  struct thread_info *VAR_2 = (struct thread_info *) VAR_1;
  struct process_info *VAR_3 = FUNC_2 (VAR_2);
  int VAR_4;

  do
    {
      FUNC_4 (VAR_0, FUNC_3 (VAR_3), 0, 0);


      VAR_4 = FUNC_1 (VAR_2);
    } while (FUNC_0 (VAR_4));
}
