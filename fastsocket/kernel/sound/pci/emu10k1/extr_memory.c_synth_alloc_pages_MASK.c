
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_memblk {int dummy; } ;
struct snd_emu10k1 {int dma_mask; int * page_ptr_table; int * page_addr_table; int memhdr; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct snd_emu10k1*,int,int) ;
 struct page* FUNC_2 (int) ;
 int FUNC_3 (struct snd_emu10k1_memblk*) ;
 int FUNC_4 (int ,struct snd_emu10k1_memblk*,int*,int*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct snd_emu10k1 *VAR_8, struct snd_emu10k1_memblk *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 FUNC_3(VAR_9);
 FUNC_4(VAR_8->memhdr, VAR_9, &VAR_11, &VAR_12);

 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {

  struct page *VAR_13 = FUNC_2(VAR_4 | VAR_3 |
         VAR_7);
  if (!VAR_13 || (FUNC_6(VAR_13) & ~(VAR_8->dma_mask >> VAR_5))) {
   if (VAR_13)
    FUNC_0(VAR_13);

   VAR_13 = FUNC_2(VAR_1 | VAR_2 |
           VAR_6 |
           VAR_7);
  }
  if (!VAR_13) {
   FUNC_1(VAR_8, VAR_11, VAR_10 - 1);
   return -VAR_0;
  }
  VAR_8->page_addr_table[VAR_10] = FUNC_7(VAR_13);
  VAR_8->page_ptr_table[VAR_10] = FUNC_5(VAR_13);
 }
 return 0;
}
