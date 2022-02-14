
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lpt_lprops {int dummy; } ;
struct ubifs_info {int lpt_lebs; int leb_size; int lsave_cnt; scalar_t__ lpt_first; TYPE_1__* ltab; int lsave; scalar_t__ big_lpt; void* lpt_buf; void* ltab_cmt; } ;
struct TYPE_2__ {int free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*,scalar_t__) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->ltab_cmt = FUNC_3(sizeof(struct ubifs_lpt_lprops) * VAR_2->lpt_lebs);
 if (!VAR_2->ltab_cmt)
  return -VAR_0;

 VAR_2->lpt_buf = FUNC_3(VAR_2->leb_size);
 if (!VAR_2->lpt_buf)
  return -VAR_0;

 if (VAR_2->big_lpt) {
  VAR_2->lsave = FUNC_0(sizeof(int) * VAR_2->lsave_cnt, VAR_1);
  if (!VAR_2->lsave)
   return -VAR_0;
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->lpt_lebs; VAR_4++)
  if (VAR_2->ltab[VAR_4].free == VAR_2->leb_size) {
   VAR_3 = FUNC_2(VAR_2, VAR_4 + VAR_2->lpt_first);
   if (VAR_3)
    return VAR_3;
  }

 return 0;
}
