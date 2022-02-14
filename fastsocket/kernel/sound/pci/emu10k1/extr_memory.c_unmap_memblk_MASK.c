
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* next; struct list_head* prev; } ;
struct snd_emu10k1_memblk {int mapped_page; int pages; int first_page; int last_page; TYPE_1__ mapped_order_link; TYPE_1__ mapped_link; } ;
struct list_head {int dummy; } ;
struct snd_emu10k1 {struct list_head mapped_link_head; } ;


 int VAR_0 ;
 struct snd_emu10k1_memblk* FUNC_0 (struct list_head*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_emu10k1*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_emu10k1 *VAR_2, struct snd_emu10k1_memblk *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 struct list_head *VAR_8;
 struct snd_emu10k1_memblk *VAR_9;


 if ((VAR_8 = VAR_3->mapped_link.prev) != &VAR_2->mapped_link_head) {
  VAR_9 = FUNC_0(VAR_8, VAR_1);
  VAR_4 = VAR_9->mapped_page + VAR_9->pages;
 } else
  VAR_4 = 0;
 if ((VAR_8 = VAR_3->mapped_link.next) != &VAR_2->mapped_link_head) {
  VAR_9 = FUNC_0(VAR_8, VAR_1);
  VAR_5 = VAR_9->mapped_page;
 } else
  VAR_5 = VAR_0;


 FUNC_1(&VAR_3->mapped_link);
 FUNC_1(&VAR_3->mapped_order_link);

 VAR_6 = VAR_3->mapped_page;
 for (VAR_7 = VAR_3->first_page; VAR_7 <= VAR_3->last_page; VAR_7++) {
  FUNC_2(VAR_2, VAR_6);
  VAR_6++;
 }
 VAR_3->mapped_page = -1;
 return VAR_5 - VAR_4;
}
