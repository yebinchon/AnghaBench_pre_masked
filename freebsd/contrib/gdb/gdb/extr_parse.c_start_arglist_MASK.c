
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct funcall {scalar_t__ arglist_len; struct funcall* next; } ;


 scalar_t__ VAR_0 ;
 struct funcall* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1 (void)
{
  struct funcall *VAR_2;

  VAR_2 = (struct funcall *) FUNC_0 (sizeof (struct funcall));
  VAR_2->next = VAR_1;
  VAR_2->arglist_len = VAR_0;
  VAR_0 = 0;
  VAR_1 = VAR_2;
}
