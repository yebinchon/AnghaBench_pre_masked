
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_softc {scalar_t__ type; int db_mask_lock; int device; int peer_msix_work; int lr_timer; int heartbeat_timer; int db_valid_mask; TYPE_1__* self_reg; } ;
typedef int device_t ;
struct TYPE_2__ {int db_mask; } ;


 int FUNC_0 (struct ntb_softc*) ;
 int FUNC_1 (struct ntb_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ntb_softc*,int ,int ) ;
 struct ntb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct ntb_softc*) ;
 int FUNC_6 (struct ntb_softc*) ;
 int FUNC_7 (struct ntb_softc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_1)
{
 struct ntb_softc *VAR_2;

 VAR_2 = FUNC_4(VAR_1);


 FUNC_9(VAR_1);

 if (VAR_2->self_reg != ((void*)0)) {
  FUNC_0(VAR_2);
  FUNC_3(VAR_2, VAR_2->self_reg->db_mask, VAR_2->db_valid_mask);
  FUNC_1(VAR_2);
 }
 FUNC_2(&VAR_2->heartbeat_timer);
 FUNC_2(&VAR_2->lr_timer);
 FUNC_2(&VAR_2->peer_msix_work);
 FUNC_10(VAR_2->device);
 if (VAR_2->type == VAR_0)
  FUNC_6(VAR_2);
 FUNC_5(VAR_2);

 FUNC_8(&VAR_2->db_mask_lock);

 FUNC_7(VAR_2);

 return (0);
}
