
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_cq {int cqn; } ;
struct TYPE_3__ {struct ib_cq* cq; } ;
struct ib_event {TYPE_1__ element; int event; int device; } ;
struct ib_cq {int cq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
typedef enum mlx4_event { ____Placeholder_mlx4_event } mlx4_event ;
struct TYPE_4__ {struct ib_cq ibcq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;
 TYPE_2__* FUNC_2 (struct mlx4_cq*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_cq *VAR_2, enum mlx4_event VAR_3)
{
 struct ib_event VAR_4;
 struct ib_cq *VAR_5;

 if (VAR_3 != VAR_1) {
  FUNC_0("Unexpected event type %d "
         "on CQ %06x\n", VAR_3, VAR_2->cqn);
  return;
 }

 VAR_5 = &FUNC_2(VAR_2)->ibcq;
 if (VAR_5->event_handler) {
  VAR_4.device = VAR_5->device;
  VAR_4.event = VAR_0;
  VAR_4.element.cq = VAR_5;
  VAR_5->event_handler(&VAR_4, VAR_5->cq_context);
 }
}
