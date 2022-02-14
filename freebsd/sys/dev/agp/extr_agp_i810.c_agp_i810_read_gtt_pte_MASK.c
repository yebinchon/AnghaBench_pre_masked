
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct agp_i810_softc* FUNC_1 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_2(device_t VAR_1, u_int VAR_2)
{
 struct agp_i810_softc *VAR_3;
 u_int32_t VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_3->sc_res[0], VAR_0 + VAR_2 * 4);
 return (VAR_4);
}
