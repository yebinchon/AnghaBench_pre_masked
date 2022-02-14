
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_fpga_device {TYPE_1__* trans; } ;
struct TYPE_4__ {int tid; int list_item; } ;
struct TYPE_3__ {int lock; int free_queue; TYPE_2__* transactions; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx5_fpga_device *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 VAR_2->trans = FUNC_2(sizeof(*VAR_2->trans), VAR_1);
 if (!VAR_2->trans) {
  VAR_3 = -VAR_0;
  goto out;
 }

 FUNC_1(&VAR_2->trans->free_queue);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->trans->transactions); VAR_4++) {
  VAR_2->trans->transactions[VAR_4].tid = VAR_4;
  FUNC_3(&VAR_2->trans->transactions[VAR_4].list_item,
         &VAR_2->trans->free_queue);
 }

 FUNC_4(&VAR_2->trans->lock);

out:
 return VAR_3;
}
