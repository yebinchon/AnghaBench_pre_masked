
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {int num_ports; int ib_active; struct mlx4_dev* dev; int ib_dev; } ;
struct mlx4_eqe {int dummy; } ;
struct TYPE_3__ {int flags2; } ;
struct mlx4_dev {int flags; TYPE_1__ caps; } ;
struct ib_event_work {int work; struct mlx4_ib_dev* ib_dev; int ib_eqe; } ;
struct TYPE_4__ {int port_num; } ;
struct ib_event {TYPE_2__ element; void* device; int event; } ;
struct ib_device {int dummy; } ;
typedef enum mlx4_dev_event { ____Placeholder_mlx4_dev_event } mlx4_dev_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int (*) (int *)) ;
 int VAR_5 ;






 int VAR_6 ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_event*) ;
 struct ib_event_work* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,struct mlx4_eqe*,int) ;
 int FUNC_7 (struct mlx4_ib_dev*) ;
 int FUNC_8 (struct mlx4_ib_dev*,int) ;
 int FUNC_9 (struct mlx4_ib_dev*,int,int,int) ;
 scalar_t__ FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (struct mlx4_dev*) ;
 int FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (struct mlx4_ib_dev*,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,int) ;
 struct mlx4_ib_dev* FUNC_17 (struct ib_device*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_18(struct mlx4_dev *VAR_8, void *VAR_9,
     enum mlx4_dev_event VAR_10, unsigned long VAR_11)
{
 struct ib_event VAR_12;
 struct mlx4_ib_dev *VAR_13 = FUNC_17((struct ib_device *) VAR_9);
 struct mlx4_eqe *VAR_14 = ((void*)0);
 struct ib_event_work *VAR_15;
 int VAR_16 = 0;

 if (FUNC_10(VAR_8) &&
     ((VAR_10 == 130) ||
     (VAR_10 == 132))) {
  VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_0);
  if (!VAR_15)
   return;
  FUNC_0(&VAR_15->work, FUNC_2);
  VAR_15->ib_dev = VAR_13;
  FUNC_15(VAR_7, &VAR_15->work);
  return;
 }

 if (VAR_10 == 131)
  VAR_14 = (struct mlx4_eqe *)VAR_11;
 else
  VAR_16 = (int) VAR_11;

 switch (VAR_10) {
 case 130:
  if (VAR_16 > VAR_13->num_ports)
   return;
  if (!FUNC_12(VAR_8) &&
      FUNC_16(&VAR_13->ib_dev, VAR_16) ==
   VAR_4) {
   if (FUNC_11(VAR_8))
    FUNC_8(VAR_13, VAR_16);
   if (VAR_13->dev->flags & VAR_6 &&
       !(VAR_13->dev->caps.flags2 & VAR_5))
    FUNC_13(VAR_13, VAR_16);
  }
  VAR_12.event = VAR_2;
  break;

 case 132:
  if (VAR_16 > VAR_13->num_ports)
   return;
  VAR_12.event = VAR_3;
  break;

 case 133:
  VAR_13->ib_active = 0;
  VAR_12.event = VAR_1;
  FUNC_7(VAR_13);
  break;

 case 131:
  VAR_15 = FUNC_5(sizeof *VAR_15, VAR_0);
  if (!VAR_15) {
   FUNC_14("failed to allocate memory for events work\n");
   break;
  }

  FUNC_0(&VAR_15->work, FUNC_3);
  FUNC_6(&VAR_15->ib_eqe, VAR_14, sizeof *VAR_14);
  VAR_15->ib_dev = VAR_13;

  if (FUNC_11(VAR_8))
   FUNC_15(VAR_7, &VAR_15->work);
  else
   FUNC_3(&VAR_15->work);
  return;

 case 129:

  FUNC_1(VAR_13, VAR_16, 1);
  if (FUNC_11(VAR_8)) {
   int VAR_17;

   for (VAR_17 = 1; VAR_17 <= VAR_13->num_ports; VAR_17++) {
    if (FUNC_16(&VAR_13->ib_dev, VAR_17)
     == VAR_4)
     FUNC_9(VAR_13,
               VAR_16, VAR_17,
               1);
   }
  }
  return;

 case 128:
  if (FUNC_11(VAR_8)) {
   int VAR_18;

   for (VAR_18 = 1; VAR_18 <= VAR_13->num_ports; VAR_18++) {
    if (FUNC_16(&VAR_13->ib_dev, VAR_18)
     == VAR_4)
     FUNC_9(VAR_13,
               VAR_16, VAR_18,
               0);
   }
  }

  FUNC_1(VAR_13, VAR_16, 0);
  return;

 default:
  return;
 }

 VAR_12.device = VAR_9;
 VAR_12.element.port_num = FUNC_10(VAR_13->dev) ? 1 : (u8)VAR_16;

 FUNC_4(&VAR_12);
}
