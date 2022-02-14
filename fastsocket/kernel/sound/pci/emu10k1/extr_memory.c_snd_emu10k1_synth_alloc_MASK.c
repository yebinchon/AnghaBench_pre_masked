
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int block_mutex; } ;
struct snd_util_memblk {int dummy; } ;
struct snd_emu10k1_memblk {int dummy; } ;
struct snd_emu10k1 {struct snd_util_memhdr* memhdr; } ;


 scalar_t__ FUNC_0 (struct snd_util_memhdr*,unsigned int) ;
 int FUNC_1 (struct snd_util_memhdr*,struct snd_util_memblk*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;
 scalar_t__ FUNC_5 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;

struct snd_util_memblk *
FUNC_6(struct snd_emu10k1 *VAR_0, unsigned int VAR_1)
{
 struct snd_emu10k1_memblk *VAR_2;
 struct snd_util_memhdr *VAR_3 = VAR_0->memhdr;

 FUNC_2(&VAR_3->block_mutex);
 VAR_2 = (struct snd_emu10k1_memblk *)FUNC_0(VAR_3, VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_3(&VAR_3->block_mutex);
  return ((void*)0);
 }
 if (FUNC_5(VAR_0, VAR_2)) {
  FUNC_1(VAR_3, (struct snd_util_memblk *)VAR_2);
  FUNC_3(&VAR_3->block_mutex);
  return ((void*)0);
 }
 FUNC_4(VAR_0, VAR_2);
 FUNC_3(&VAR_3->block_mutex);
 return (struct snd_util_memblk *)VAR_2;
}
