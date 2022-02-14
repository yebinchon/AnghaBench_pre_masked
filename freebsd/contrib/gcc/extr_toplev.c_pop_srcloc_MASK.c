
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_stack {struct file_stack* next; int location; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct file_stack*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 struct file_stack* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int) ;

void
FUNC_3 (void)
{
  struct file_stack *VAR_8;

  FUNC_1 (!VAR_5);
  if (VAR_6 == (int) ((1U << VAR_0) - 1))
    FUNC_2 ("GCC supports only %d input file changes", VAR_6);

  VAR_8 = VAR_3;
  VAR_7 = VAR_8->location;
  VAR_3 = VAR_8->next;
  VAR_6++;
  FUNC_0 (VAR_1, VAR_2, VAR_4, VAR_3);
}
