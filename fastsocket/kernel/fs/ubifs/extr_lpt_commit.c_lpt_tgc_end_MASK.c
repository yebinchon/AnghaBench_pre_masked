
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_lebs; scalar_t__ lpt_first; TYPE_1__* ltab; } ;
struct TYPE_2__ {scalar_t__ tgc; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct ubifs_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->lpt_lebs; VAR_1++)
  if (VAR_0->ltab[VAR_1].tgc) {
   VAR_2 = FUNC_1(VAR_0, VAR_1 + VAR_0->lpt_first);
   if (VAR_2)
    return VAR_2;
   VAR_0->ltab[VAR_1].tgc = 0;
   FUNC_0("LEB %d", VAR_1 + VAR_0->lpt_first);
  }
 return 0;
}
