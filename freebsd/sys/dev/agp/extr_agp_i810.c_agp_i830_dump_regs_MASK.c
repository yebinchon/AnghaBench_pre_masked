
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_softc {int bdev; int * sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_2)
{
 struct agp_i810_softc *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2, "AGP_I810_PGTBL_CTL: %08x\n",
     FUNC_0(VAR_3->sc_res[0], VAR_0));
 FUNC_2(VAR_2, "AGP_I830_GCC1: 0x%02x\n",
     FUNC_3(VAR_3->bdev, VAR_1, 1));
}
