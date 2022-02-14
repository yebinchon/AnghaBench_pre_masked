
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx5_ib_dev {TYPE_2__* mdev; } ;
struct ib_smp {int status; int attr_mod; int attr_id; } ;
struct TYPE_4__ {TYPE_1__* port_caps; } ;
struct TYPE_3__ {int ext_port_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ib_smp*) ;
 int FUNC_3 (struct ib_smp*) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 struct ib_smp* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_ib_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;

int FUNC_7(struct mlx5_ib_dev *VAR_4, u8 VAR_5)
{
 struct ib_smp *VAR_6 = ((void*)0);
 struct ib_smp *VAR_7 = ((void*)0);
 int VAR_8 = -VAR_0;
 u16 VAR_9;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_6 || !VAR_7)
  goto out;

 FUNC_2(VAR_6);
 VAR_6->attr_id = VAR_2;
 VAR_6->attr_mod = FUNC_1(VAR_5);

 VAR_8 = FUNC_6(VAR_4, 1, 1, 1, ((void*)0), ((void*)0), VAR_6, VAR_7);

 VAR_9 = FUNC_0(VAR_7->status);

 VAR_4->mdev->port_caps[VAR_5 - 1].ext_port_cap = (!VAR_8 && !VAR_9) ?
  VAR_3 : 0;

out:
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 return VAR_8;
}
