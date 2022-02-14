
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {int ib_dev; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; int * device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (struct ib_event*) ;

void FUNC_1(struct mlx4_ib_dev *VAR_0, u8 VAR_1,
       enum ib_event_type VAR_2)
{
 struct ib_event VAR_3;

 VAR_3.device = &VAR_0->ib_dev;
 VAR_3.element.port_num = VAR_1;
 VAR_3.event = VAR_2;

 FUNC_0(&VAR_3);
}
