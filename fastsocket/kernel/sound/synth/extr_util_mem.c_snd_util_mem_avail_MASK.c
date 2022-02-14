
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {unsigned int size; unsigned int used; int block_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct snd_util_memhdr *VAR_0)
{
 unsigned int VAR_1;
 FUNC_0(&VAR_0->block_mutex);
 VAR_1 = VAR_0->size - VAR_0->used;
 FUNC_1(&VAR_0->block_mutex);
 return VAR_1;
}
