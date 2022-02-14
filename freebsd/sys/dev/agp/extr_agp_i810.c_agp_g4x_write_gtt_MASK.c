
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 struct agp_i810_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1, u_int VAR_2, uint32_t VAR_3)
{
 struct agp_i810_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 FUNC_1(VAR_4->sc_res[0], VAR_2 * 4 + (2 * 1024 * 1024), VAR_3);
 FUNC_0(VAR_0, "g4x_pte %x %x", VAR_2, VAR_3);
}
