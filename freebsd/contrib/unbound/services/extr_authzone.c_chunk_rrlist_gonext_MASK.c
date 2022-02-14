
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_chunk {scalar_t__ len; struct auth_chunk* next; int data; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct auth_chunk** VAR_1, int* VAR_2,
 size_t* VAR_3, size_t VAR_4)
{

 if(!*VAR_1)
  return;

 if((*VAR_1)->len >= VAR_0 &&
  (*VAR_2)+1 < (int)FUNC_0((*VAR_1)->data)) {
  (*VAR_2) += 1;
  *VAR_3 = VAR_4;
  return;
 }


 if(*VAR_1)
  *VAR_1 = (*VAR_1)->next;
 while(*VAR_1) {
  *VAR_2 = 0;
  *VAR_3 = 0;
  if((*VAR_1)->len >= VAR_0 &&
   FUNC_0((*VAR_1)->data) > 0) {
   return;
  }
  *VAR_1 = (*VAR_1)->next;
 }
}
