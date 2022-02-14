
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct funcall {int arglist_len; struct funcall* next; } ;


 int VAR_0 ;
 struct funcall* VAR_1 ;
 int FUNC_0 (struct funcall*) ;

int
FUNC_1 (void)
{
  int VAR_2 = VAR_0;
  struct funcall *VAR_3 = VAR_1;
  VAR_1 = VAR_3->next;
  VAR_0 = VAR_3->arglist_len;
  FUNC_0 (VAR_3);
  return VAR_2;
}
