
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfip_softc {struct mfi_softc* mfi_sc; } ;
struct mfi_softc {int (* mfi_intr_ptr ) (struct mfi_softc*) ;} ;
struct cam_sim {int dummy; } ;


 struct mfip_softc* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (struct mfi_softc*) ;

__attribute__((used)) static void
FUNC_2(struct cam_sim *VAR_0)
{
 struct mfip_softc *VAR_1 = FUNC_0(VAR_0);
 struct mfi_softc *VAR_2 = VAR_1->mfi_sc;

 VAR_2->mfi_intr_ptr(VAR_2);
}
