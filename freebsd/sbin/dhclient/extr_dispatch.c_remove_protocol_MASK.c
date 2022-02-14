
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protocol {struct protocol* next; } ;


 int FUNC_0 (struct protocol*) ;
 struct protocol* VAR_0 ;

void
FUNC_1(struct protocol *VAR_1)
{
 struct protocol *VAR_2, *VAR_3;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  if (VAR_2 == VAR_1) {
   VAR_0 = VAR_2->next;
   FUNC_0(VAR_2);
  }
 }
}
