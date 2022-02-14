
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_mr {TYPE_1__* sig; } ;
struct TYPE_5__ {scalar_t__ key; scalar_t__ sig_err_offset; int err_type; } ;
struct ib_mr_status {int fail_status; TYPE_2__ sig_err; } ;
struct ib_mr {scalar_t__ lkey; } ;
struct TYPE_6__ {scalar_t__ key; } ;
struct TYPE_4__ {int sig_status_checked; int sig_err_exists; TYPE_3__ err_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_1 (char*) ;
 struct mlx5_ib_mr* FUNC_2 (struct ib_mr*) ;

int FUNC_3(struct ib_mr *VAR_3, u32 VAR_4,
       struct ib_mr_status *VAR_5)
{
 struct mlx5_ib_mr *VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = 0;

 if (VAR_4 & ~VAR_1) {
  FUNC_1("Invalid status check mask\n");
  VAR_7 = -VAR_0;
  goto done;
 }

 VAR_5->fail_status = 0;
 if (VAR_4 & VAR_1) {
  if (!VAR_6->sig) {
   VAR_7 = -VAR_0;
   FUNC_1("signature status check requested on a non-signature enabled MR\n");
   goto done;
  }

  VAR_6->sig->sig_status_checked = 1;
  if (!VAR_6->sig->sig_err_exists)
   goto done;

  if (VAR_3->lkey == VAR_6->sig->err_item.key)
   FUNC_0(&VAR_5->sig_err, &VAR_6->sig->err_item,
          sizeof(VAR_5->sig_err));
  else {
   VAR_5->sig_err.err_type = VAR_2;
   VAR_5->sig_err.sig_err_offset = 0;
   VAR_5->sig_err.key = VAR_6->sig->err_item.key;
  }

  VAR_6->sig->sig_err_exists = 0;
  VAR_5->fail_status |= VAR_1;
 }

done:
 return VAR_7;
}
