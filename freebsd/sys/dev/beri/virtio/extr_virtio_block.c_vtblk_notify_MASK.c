
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vqueue_info {int vq_save_used; TYPE_2__* vq_avail; TYPE_1__* vq_used; } ;
struct beri_vtblk_softc {int pio_send; struct vqueue_info* vs_queues; int opened; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int idx; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct beri_vtblk_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct beri_vtblk_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct vqueue_info*) ;
 int FUNC_7 (struct vqueue_info*) ;
 int FUNC_8 (struct beri_vtblk_softc*,struct vqueue_info*) ;

__attribute__((used)) static int
FUNC_9(struct beri_vtblk_softc *VAR_5)
{
 struct vqueue_info *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = &VAR_5->vs_queues[0];
 if (!FUNC_7(VAR_6))
  return (0);

 if (!VAR_5->opened)
  return (0);

 VAR_8 = FUNC_2(VAR_5, VAR_3);
 VAR_7 = FUNC_4(VAR_8);

 FUNC_0(VAR_7 == 0, ("we support single queue only"));


 VAR_6 = &VAR_5->vs_queues[VAR_7];
 VAR_6->vq_save_used = FUNC_4(VAR_6->vq_used->idx);
 while (FUNC_6(VAR_6))
  FUNC_8(VAR_5, VAR_6);


 if ((FUNC_4(VAR_6->vq_avail->flags) & VAR_4) == 0) {
  VAR_8 = FUNC_5(VAR_2);
  FUNC_3(VAR_5, VAR_1, VAR_8);
  FUNC_1(VAR_5->pio_send, VAR_0, 1);
 }

 return (0);
}
