
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int used; int nblocks; } ;
struct snd_util_memblk {scalar_t__ size; int list; } ;


 int FUNC_0 (struct snd_util_memblk*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct snd_util_memhdr *VAR_0, struct snd_util_memblk *VAR_1)
{
 FUNC_1(&VAR_1->list);
 VAR_0->nblocks--;
 VAR_0->used -= VAR_1->size;
 FUNC_0(VAR_1);
}
