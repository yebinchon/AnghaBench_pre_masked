
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gf1_mem_block {unsigned int ptr; struct snd_gf1_mem_block* next; } ;
struct snd_gf1_mem {struct snd_gf1_mem_block* first; } ;



__attribute__((used)) static struct snd_gf1_mem_block *FUNC_0(struct snd_gf1_mem * VAR_0,
          unsigned int VAR_1)
{
 struct snd_gf1_mem_block *VAR_2;

 for (VAR_2 = VAR_0->first; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->ptr == VAR_1) {
   return VAR_2;
  }
 }
 return ((void*)0);
}
