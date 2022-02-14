
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_transfer {int * chunks_last; struct auth_chunk* chunks_first; } ;
struct auth_chunk {struct auth_chunk* data; struct auth_chunk* next; } ;


 int FUNC_0 (struct auth_chunk*) ;

__attribute__((used)) static void
FUNC_1(struct auth_transfer* VAR_0)
{
 if(VAR_0->chunks_first) {
  struct auth_chunk* VAR_1, *VAR_2;
  VAR_1 = VAR_0->chunks_first;
  while(VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_0(VAR_1->data);
   FUNC_0(VAR_1);
   VAR_1 = VAR_2;
  }
 }
 VAR_0->chunks_first = ((void*)0);
 VAR_0->chunks_last = ((void*)0);
}
