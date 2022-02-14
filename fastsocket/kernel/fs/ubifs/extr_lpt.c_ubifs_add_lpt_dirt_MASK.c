
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_first; int lpt_last; TYPE_1__* ltab; } ;
struct TYPE_2__ {int dirty; } ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct ubifs_info *VAR_0, int VAR_1, int VAR_2)
{
 if (!VAR_2 || !VAR_1)
  return;
 FUNC_0("LEB %d add %d to %d",
        VAR_1, VAR_2, VAR_0->ltab[VAR_1 - VAR_0->lpt_first].dirty);
 FUNC_1(VAR_1 >= VAR_0->lpt_first && VAR_1 <= VAR_0->lpt_last);
 VAR_0->ltab[VAR_1 - VAR_0->lpt_first].dirty += VAR_2;
}
