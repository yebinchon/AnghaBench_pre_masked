
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {TYPE_1__* ports; } ;
struct mlx5_ib_dev {int ib_active; int ib_dev; TYPE_2__ devr; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_6__ {int port_num; } ;
struct ib_event {TYPE_3__ element; int * device; int event; } ;
typedef enum mlx5_dev_event { ____Placeholder_mlx5_dev_event } mlx5_dev_event ;
struct TYPE_4__ {int pkey_change_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ib_event*) ;
 int FUNC_1 (struct mlx5_ib_dev*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlx5_core_dev *VAR_8, void *VAR_9,
     enum mlx5_dev_event VAR_10, unsigned long VAR_11)
{
 struct mlx5_ib_dev *VAR_12 = (struct mlx5_ib_dev *)VAR_9;
 struct ib_event VAR_13;
 bool VAR_14 = 0;
 u8 VAR_15 = (u8)VAR_11;

 switch (VAR_10) {
 case 128:
  VAR_13.event = VAR_1;
  FUNC_1(VAR_12);
  VAR_14 = 1;
  break;

 case 129:
 case 131:
 case 130:



  if (FUNC_2(&VAR_12->ib_dev, VAR_15) ==
   VAR_7)
   return;

  VAR_13.event = (VAR_10 == 129) ?
        VAR_5 : VAR_6;
  break;

 case 133:
  VAR_13.event = VAR_3;
  break;

 case 132:
  VAR_13.event = VAR_4;

  FUNC_5(&VAR_12->devr.ports[VAR_15 - 1].pkey_change_work);
  break;

 case 134:
  VAR_13.event = VAR_2;
  break;

 case 135:
  VAR_13.event = VAR_0;
  break;

 default:

  return;
 }

 VAR_13.device = &VAR_12->ib_dev;
 VAR_13.element.port_num = VAR_15;

 if (!FUNC_4(&VAR_12->ib_dev, VAR_15)) {
  FUNC_3(VAR_12, "warning: event(%d) on port %d\n", VAR_10, VAR_15);
  return;
 }

 if (VAR_12->ib_active)
  FUNC_0(&VAR_13);

 if (VAR_14)
  VAR_12->ib_active = 0;
}
