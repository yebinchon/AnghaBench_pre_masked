
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ type; int device; int db_mask_lock; int peer_msix_work; int lr_timer; int heartbeat_timer; void* msix_mw_idx; void* b2b_mw_idx; int features; } ;
struct ntb_hw_info {scalar_t__ type; int features; } ;
typedef int device_t ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 struct ntb_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct ntb_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ntb_softc*) ;
 int FUNC_5 (struct ntb_softc*) ;
 int FUNC_6 (struct ntb_softc*) ;
 struct ntb_hw_info* FUNC_7 (int ) ;
 int FUNC_8 (struct ntb_softc*) ;
 int FUNC_9 (struct ntb_softc*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ntb_softc*) ;
 int FUNC_12 (struct ntb_softc*) ;
 int FUNC_13 (int *,char*,int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_3)
{
 struct ntb_softc *VAR_4;
 struct ntb_hw_info *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_7(FUNC_16(VAR_3));

 VAR_4->device = VAR_3;
 VAR_4->type = VAR_5->type;
 VAR_4->features = VAR_5->features;
 VAR_4->b2b_mw_idx = VAR_0;
 VAR_4->msix_mw_idx = VAR_0;


 FUNC_0(&VAR_4->heartbeat_timer, 1);
 FUNC_0(&VAR_4->lr_timer, 1);
 FUNC_0(&VAR_4->peer_msix_work, 1);
 FUNC_13(&VAR_4->db_mask_lock, "ntb hw bits", ((void*)0), VAR_1);

 if (VAR_4->type == VAR_2)
  VAR_6 = FUNC_4(VAR_4);
 else
  VAR_6 = FUNC_6(VAR_4);
 if (VAR_6 != 0)
  goto out;

 FUNC_5(VAR_4);

 FUNC_15(VAR_4->device);

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6 != 0)
  goto out;
 if (VAR_4->type == VAR_2)
  VAR_6 = FUNC_2(VAR_4);
 else
  VAR_6 = FUNC_12(VAR_4);
 if (VAR_6 != 0)
  goto out;

 FUNC_10(VAR_3);

 FUNC_9(VAR_4);

 FUNC_11(VAR_4);


 VAR_6 = FUNC_14(VAR_3);

out:
 if (VAR_6 != 0)
  FUNC_3(VAR_3);
 return (VAR_6);
}
