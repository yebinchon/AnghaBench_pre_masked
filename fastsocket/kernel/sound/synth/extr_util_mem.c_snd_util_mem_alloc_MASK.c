
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int block_mutex; } ;
struct snd_util_memblk {int dummy; } ;


 struct snd_util_memblk* FUNC_0 (struct snd_util_memhdr*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct snd_util_memblk *
FUNC_3(struct snd_util_memhdr *VAR_0, int VAR_1)
{
 struct snd_util_memblk *VAR_2;
 FUNC_1(&VAR_0->block_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->block_mutex);
 return VAR_2;
}
