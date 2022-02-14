
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_push {struct type_push* next; int stored; } ;


 int VAR_0 ;
 struct type_push* VAR_1 ;
 int FUNC_0 (struct type_push*) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct type_push *VAR_2 = VAR_1;
  if (VAR_2)
    {
      VAR_0 = VAR_2->stored;
      VAR_1 = VAR_2->next;
      FUNC_0 (VAR_2);
    }
}
