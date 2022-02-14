
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ag_work_lock; TYPE_1__* ports_guid; } ;
struct TYPE_6__ {int going_down_lock; TYPE_2__ alias_guid; int is_going_down; } ;
struct mlx4_ib_dev {TYPE_3__ sriov; int dev; } ;
struct TYPE_4__ {int state_flags; int alias_guid_work; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_2 (struct mlx4_ib_dev*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct mlx4_ib_dev *VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned long VAR_5, VAR_6;

 FUNC_4("port %d\n", VAR_3);

 FUNC_6(&VAR_2->sriov.going_down_lock, VAR_5);
 FUNC_6(&VAR_2->sriov.alias_guid.ag_work_lock, VAR_6);

 if (VAR_2->sriov.alias_guid.ports_guid[VAR_3 - 1].state_flags &
  VAR_0) {
  FUNC_2(VAR_2, VAR_3);
  VAR_2->sriov.alias_guid.ports_guid[VAR_3 - 1].state_flags &=
   (~VAR_0);
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_2, VAR_3, VAR_4);

 if (FUNC_3(VAR_2->dev) && !VAR_2->sriov.is_going_down) {





  FUNC_0(&VAR_2->sriov.alias_guid.
          ports_guid[VAR_3 - 1].alias_guid_work);
  FUNC_5(VAR_2->sriov.alias_guid.ports_guid[VAR_3 - 1].wq,
       &VAR_2->sriov.alias_guid.ports_guid[VAR_3 - 1].alias_guid_work,
       0);
 }
 FUNC_7(&VAR_2->sriov.alias_guid.ag_work_lock, VAR_6);
 FUNC_7(&VAR_2->sriov.going_down_lock, VAR_5);
}
