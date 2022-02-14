
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_push {int * stored; struct type_push* next; } ;


 int * VAR_0 ;
 struct type_push* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct type_push *VAR_2;
  VAR_2 = (struct type_push *) FUNC_0 (sizeof (struct type_push));
  VAR_2->next = VAR_1;
  VAR_2->stored = VAR_0;
  VAR_0 = ((void*)0);
  VAR_1 = VAR_2;
}
