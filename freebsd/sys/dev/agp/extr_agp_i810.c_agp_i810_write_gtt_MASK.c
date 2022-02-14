
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 struct agp_i810_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2, u_int VAR_3, uint32_t VAR_4)
{
 struct agp_i810_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 FUNC_1(VAR_5->sc_res[0], VAR_0 + VAR_3 * 4, VAR_4);
 FUNC_0(VAR_1, "810_pte %x %x", VAR_3, VAR_4);
}
