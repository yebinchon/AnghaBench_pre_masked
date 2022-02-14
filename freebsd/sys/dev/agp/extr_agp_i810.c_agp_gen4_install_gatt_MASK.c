
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ const vm_offset_t ;
struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct agp_i810_softc*) ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__ const,scalar_t__ const,int ) ;
 scalar_t__ const FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, const vm_size_t VAR_2)
{
 struct agp_i810_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 FUNC_2((vm_offset_t)FUNC_4(VAR_3->sc_res[0]) +
     VAR_2, FUNC_3(VAR_3->sc_res[0]) - VAR_2,
     VAR_0);
 FUNC_0(VAR_3);
 return (0);
}
