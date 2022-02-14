
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_util_memhdr {int block_mutex; } ;
struct snd_util_memblk {int dummy; } ;
struct TYPE_2__ {struct snd_util_memhdr* memhdr; } ;
struct snd_trident {TYPE_1__ tlb; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_util_memhdr*,struct snd_util_memblk*) ;
 int FUNC_1 (struct snd_util_memblk*) ;
 int FUNC_2 (struct snd_util_memblk*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_trident*,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct snd_trident *VAR_1,
      struct snd_util_memblk *VAR_2)
{
 struct snd_util_memhdr *VAR_3;
 int VAR_4;

 if (FUNC_6(!VAR_1 || !VAR_2))
  return -VAR_0;

 VAR_3 = VAR_1->tlb.memhdr;
 FUNC_3(&VAR_3->block_mutex);

 for (VAR_4 = FUNC_1(VAR_2); VAR_4 <= FUNC_2(VAR_2); VAR_4++)
  FUNC_5(VAR_1, VAR_4);

 FUNC_0(VAR_3, VAR_2);
 FUNC_4(&VAR_3->block_mutex);
 return 0;
}
