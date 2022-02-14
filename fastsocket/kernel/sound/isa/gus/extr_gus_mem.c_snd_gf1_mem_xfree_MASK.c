
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gf1_mem_block {struct snd_gf1_mem_block* name; struct snd_gf1_mem_block* next; struct snd_gf1_mem_block* prev; scalar_t__ share; } ;
struct snd_gf1_mem {struct snd_gf1_mem_block* last; struct snd_gf1_mem_block* first; int memory_mutex; } ;


 int FUNC_0 (struct snd_gf1_mem_block*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct snd_gf1_mem * VAR_0, struct snd_gf1_mem_block * VAR_1)
{
 if (VAR_1->share) {
  VAR_1->share--;
  FUNC_1(&VAR_0->memory_mutex);
  return 0;
 }
 if (VAR_0->first == VAR_1) {
  VAR_0->first = VAR_1->next;
  if (VAR_1->next)
   VAR_1->next->prev = ((void*)0);
 } else {
  VAR_1->prev->next = VAR_1->next;
  if (VAR_1->next)
   VAR_1->next->prev = VAR_1->prev;
 }
 if (VAR_0->last == VAR_1) {
  VAR_0->last = VAR_1->prev;
  if (VAR_1->prev)
   VAR_1->prev->next = ((void*)0);
 } else {
  VAR_1->next->prev = VAR_1->prev;
  if (VAR_1->prev)
   VAR_1->prev->next = VAR_1->next;
 }
 FUNC_0(VAR_1->name);
 FUNC_0(VAR_1);
 return 0;
}
