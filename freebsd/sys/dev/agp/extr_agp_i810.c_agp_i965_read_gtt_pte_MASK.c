
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 struct agp_i810_softc* FUNC_1 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_2(device_t VAR_0, u_int VAR_1)
{
 struct agp_i810_softc *VAR_2;
 u_int32_t VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_2->sc_res[0], VAR_1 * 4 + (512 * 1024));
 return (VAR_3);
}
