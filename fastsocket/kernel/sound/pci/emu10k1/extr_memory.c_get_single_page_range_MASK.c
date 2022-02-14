
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct snd_util_memhdr {struct list_head block; } ;
struct TYPE_4__ {struct list_head* next; struct list_head* prev; } ;
struct TYPE_5__ {TYPE_1__ list; } ;
struct snd_emu10k1_memblk {int first_page; int last_page; TYPE_2__ mem; } ;
struct TYPE_6__ {int list; } ;


 struct snd_emu10k1_memblk* FUNC_0 (struct list_head*,int ) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct snd_util_memhdr *VAR_1,
      struct snd_emu10k1_memblk *VAR_2,
      int *VAR_3, int *VAR_4)
{
 struct list_head *VAR_5;
 struct snd_emu10k1_memblk *VAR_6;
 int VAR_7, VAR_8;
 VAR_7 = VAR_2->first_page;
 if ((VAR_5 = VAR_2->mem.list.prev) != &VAR_1->block) {
  VAR_6 = FUNC_0(VAR_5, VAR_0.list);
  if (VAR_6->last_page == VAR_7)
   VAR_7++;
 }
 VAR_8 = VAR_2->last_page;
 if ((VAR_5 = VAR_2->mem.list.next) != &VAR_1->block) {
  VAR_6 = FUNC_0(VAR_5, VAR_0.list);
  if (VAR_6->first_page == VAR_8)
   VAR_8--;
 }
 *VAR_3 = VAR_7;
 *VAR_4 = VAR_8;
}
