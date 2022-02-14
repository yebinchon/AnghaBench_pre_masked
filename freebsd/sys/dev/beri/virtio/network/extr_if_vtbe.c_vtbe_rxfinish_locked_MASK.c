
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtbe_softc {int pio_send; struct vqueue_info* vs_queues; } ;
struct vqueue_info {TYPE_1__* vq_used; int vq_save_used; } ;
struct TYPE_2__ {int idx; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vtbe_softc*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vqueue_info*) ;
 int FUNC_5 (struct vqueue_info*) ;
 int FUNC_6 (struct vtbe_softc*,struct vqueue_info*) ;

__attribute__((used)) static void
FUNC_7(struct vtbe_softc *VAR_3)
{
 struct vqueue_info *VAR_4;
 int VAR_5;


 VAR_4 = &VAR_3->vs_queues[1];
 if (!FUNC_5(VAR_4))
  return;


 VAR_4->vq_save_used = FUNC_2(VAR_4->vq_used->idx);

 while (FUNC_4(VAR_4)) {
  FUNC_6(VAR_3, VAR_4);
 }


 VAR_5 = FUNC_3(VAR_2);
 FUNC_1(VAR_3, VAR_1, VAR_5);

 FUNC_0(VAR_3->pio_send, VAR_0, 1);
}
