
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int block_mutex; } ;
struct snd_util_memblk {int dummy; } ;
struct snd_emu10k1_memblk {scalar_t__ mapped_page; } ;
struct snd_emu10k1 {int memblk_lock; struct snd_util_memhdr* memhdr; } ;


 int FUNC_0 (struct snd_util_memhdr*,struct snd_util_memblk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;
 int FUNC_6 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;

int
FUNC_7(struct snd_emu10k1 *VAR_0, struct snd_util_memblk *VAR_1)
{
 struct snd_util_memhdr *VAR_2 = VAR_0->memhdr;
 struct snd_emu10k1_memblk *VAR_3 = (struct snd_emu10k1_memblk *)VAR_1;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->block_mutex);
 FUNC_3(&VAR_0->memblk_lock, VAR_4);
 if (VAR_3->mapped_page >= 0)
  FUNC_6(VAR_0, VAR_3);
 FUNC_4(&VAR_0->memblk_lock, VAR_4);
 FUNC_5(VAR_0, VAR_3);
  FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->block_mutex);
 return 0;
}
