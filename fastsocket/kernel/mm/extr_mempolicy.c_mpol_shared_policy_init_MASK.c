
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; } ;
struct shared_policy {int lock; int root; } ;
struct TYPE_2__ {int user_nodemask; } ;
struct mempolicy {TYPE_1__ w; int flags; int mode; } ;


 scalar_t__ FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct vm_area_struct*,int ,int) ;
 struct mempolicy* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct mempolicy*) ;
 int FUNC_6 (struct mempolicy*,int *,int ) ;
 int FUNC_7 (struct shared_policy*,struct vm_area_struct*,struct mempolicy*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct shared_policy *VAR_4, struct mempolicy *VAR_5)
{
 int VAR_6;

 VAR_4->root = VAR_0;
 FUNC_8(&VAR_4->lock);

 if (VAR_5) {
  struct vm_area_struct VAR_7;
  struct mempolicy *VAR_8;
  FUNC_1(VAR_3);

  if (!VAR_3)
   return;

  VAR_8 = FUNC_4(VAR_5->mode, VAR_5->flags, &VAR_5->w.user_nodemask);
  if (FUNC_0(VAR_8)) {
   FUNC_5(VAR_5);
   FUNC_2(VAR_3);
   return;
  }

  FUNC_9(VAR_2);
  VAR_6 = FUNC_6(VAR_8, &VAR_5->w.user_nodemask, VAR_3);
  FUNC_10(VAR_2);
  FUNC_5(VAR_5);
  if (VAR_6) {
   FUNC_2(VAR_3);
   FUNC_5(VAR_8);
   return;
  }


  FUNC_3(&VAR_7, 0, sizeof(struct vm_area_struct));
  VAR_7.vm_end = VAR_1;
  FUNC_7(VAR_4, &VAR_7, VAR_8);
  FUNC_5(VAR_8);
  FUNC_2(VAR_3);
 }
}
