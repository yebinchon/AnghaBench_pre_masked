
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interp {struct interp* next; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct interp* VAR_0 ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;

void
FUNC_3 (struct interp *VAR_2)
{
  if (!VAR_1)
    FUNC_1 ();

  FUNC_0 (FUNC_2 (VAR_2->name) == ((void*)0));

  VAR_2->next = VAR_0;
  VAR_0 = VAR_2;
}
