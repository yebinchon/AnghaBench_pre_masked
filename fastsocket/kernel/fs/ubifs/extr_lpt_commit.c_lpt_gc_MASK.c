
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_lebs; int lpt_first; int nhead_lnum; scalar_t__ leb_size; int lp_mutex; TYPE_1__* ltab; } ;
struct TYPE_2__ {scalar_t__ free; int dirty; int tgc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3 = -1, VAR_4 = 0;

 FUNC_1(&VAR_1->lp_mutex);
 for (VAR_2 = 0; VAR_2 < VAR_1->lpt_lebs; VAR_2++) {
  FUNC_3(!VAR_1->ltab[VAR_2].tgc);
  if (VAR_2 + VAR_1->lpt_first == VAR_1->nhead_lnum ||
      VAR_1->ltab[VAR_2].free + VAR_1->ltab[VAR_2].dirty == VAR_1->leb_size)
   continue;
  if (VAR_1->ltab[VAR_2].dirty > VAR_4) {
   VAR_4 = VAR_1->ltab[VAR_2].dirty;
   VAR_3 = VAR_2 + VAR_1->lpt_first;
  }
 }
 FUNC_2(&VAR_1->lp_mutex);
 if (VAR_3 == -1)
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_3);
}
