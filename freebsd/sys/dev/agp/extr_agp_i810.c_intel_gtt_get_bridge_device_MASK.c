
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_softc {int bdev; } ;
typedef int device_t ;


 struct agp_i810_softc* FUNC_0 (int ) ;
 int VAR_0 ;

device_t
FUNC_1(void)
{
 struct agp_i810_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return (VAR_1->bdev);
}
