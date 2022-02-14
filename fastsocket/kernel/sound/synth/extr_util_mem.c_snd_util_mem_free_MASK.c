
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int block_mutex; } ;
struct snd_util_memblk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_util_memhdr*,struct snd_util_memblk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct snd_util_memhdr *VAR_1, struct snd_util_memblk *VAR_2)
{
 if (FUNC_3(!VAR_1 || !VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_1->block_mutex);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_1->block_mutex);
 return 0;
}
