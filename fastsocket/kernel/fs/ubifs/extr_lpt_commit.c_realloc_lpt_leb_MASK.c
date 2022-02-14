
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_first; int lpt_lebs; TYPE_1__* ltab; } ;
struct TYPE_2__ {scalar_t__ cmt; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ubifs_info *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = *VAR_2 - VAR_1->lpt_first + 1;
 for (VAR_3 = VAR_4; VAR_3 < VAR_1->lpt_lebs; VAR_3++)
  if (VAR_1->ltab[VAR_3].cmt) {
   VAR_1->ltab[VAR_3].cmt = 0;
   *VAR_2 = VAR_3 + VAR_1->lpt_first;
   return 0;
  }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  if (VAR_1->ltab[VAR_3].cmt) {
   VAR_1->ltab[VAR_3].cmt = 0;
   *VAR_2 = VAR_3 + VAR_1->lpt_first;
   return 0;
  }
 return -VAR_0;
}
