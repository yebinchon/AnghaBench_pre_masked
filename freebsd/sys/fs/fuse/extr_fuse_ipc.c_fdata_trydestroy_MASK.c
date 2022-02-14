
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct fuse_data {scalar_t__ ref; int ms_mtx; TYPE_1__ ks_rsel; int aw_mtx; int daemoncred; int rename_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct fuse_data*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct fuse_data *VAR_2)
{
 VAR_2->ref--;
 FUNC_0(VAR_2->ref >= 0);
 if (VAR_2->ref != 0)
  return;


 FUNC_6(&VAR_2->rename_lock);
 FUNC_1(VAR_2->daemoncred);
 FUNC_5(&VAR_2->aw_mtx);
 FUNC_3(&VAR_2->ks_rsel.si_note, VAR_1, 0);
 FUNC_4(&VAR_2->ks_rsel.si_note);
 FUNC_5(&VAR_2->ms_mtx);

 FUNC_2(VAR_2, VAR_0);
}
