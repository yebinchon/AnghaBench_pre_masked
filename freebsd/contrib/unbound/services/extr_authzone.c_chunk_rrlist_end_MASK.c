
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_chunk {scalar_t__ len; struct auth_chunk* next; int data; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct auth_chunk* VAR_1, int VAR_2)
{
 while(VAR_1) {
  if(VAR_1->len < VAR_0)
   return 1;
  if(VAR_2 < (int)FUNC_0(VAR_1->data))
   return 0;


  VAR_1 = VAR_1->next;
  VAR_2 = 0;
 }
 return 1;
}
