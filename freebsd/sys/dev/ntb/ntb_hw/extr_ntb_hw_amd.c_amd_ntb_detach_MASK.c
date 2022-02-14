
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int device; int db_mask_lock; int hb_timer; } ;
typedef int device_t ;


 int FUNC_0 (struct amd_ntb_softc*) ;
 int FUNC_1 (struct amd_ntb_softc*) ;
 int FUNC_2 (struct amd_ntb_softc*) ;
 int FUNC_3 (int *) ;
 struct amd_ntb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0)
{
 struct amd_ntb_softc *VAR_1 = FUNC_4(VAR_0);

 FUNC_6(VAR_0);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->hb_timer);
 FUNC_1(VAR_1);
 FUNC_5(&VAR_1->db_mask_lock);
 FUNC_7(VAR_1->device);
 FUNC_2(VAR_1);

 return (0);
}
