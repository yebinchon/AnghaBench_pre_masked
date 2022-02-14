
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_memblk {int mapped_page; int first_page; int last_page; int mapped_order_link; int mapped_link; int pages; } ;
struct list_head {int dummy; } ;
struct snd_emu10k1 {int * page_addr_table; struct list_head mapped_order_link_head; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (struct snd_emu10k1*,int ,struct list_head**) ;
 int FUNC_2 (struct snd_emu10k1*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_emu10k1 *VAR_0, struct snd_emu10k1_memblk *VAR_1)
{
 int VAR_2, VAR_3;
 struct list_head *VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_1->pages, &VAR_4);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(&VAR_1->mapped_link, VAR_4);

 FUNC_0(&VAR_1->mapped_order_link, &VAR_0->mapped_order_link_head);
 VAR_1->mapped_page = VAR_2;

 for (VAR_3 = VAR_1->first_page; VAR_3 <= VAR_1->last_page; VAR_3++) {
  FUNC_2(VAR_0, VAR_2, VAR_0->page_addr_table[VAR_3]);
  VAR_2++;
 }
 return 0;
}
