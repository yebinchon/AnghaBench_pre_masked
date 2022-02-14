
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ cmt_state; int cs_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubifs_info*) ;

void FUNC_5(struct ubifs_info *VAR_2)
{
 FUNC_2(&VAR_2->cs_lock);
 if (VAR_2->cmt_state == VAR_1) {
  FUNC_0("old: %s, new: %s", FUNC_1(VAR_2->cmt_state),
   FUNC_1(VAR_0));
  VAR_2->cmt_state = VAR_0;
  FUNC_3(&VAR_2->cs_lock);
  FUNC_4(VAR_2);
 } else
  FUNC_3(&VAR_2->cs_lock);
}
