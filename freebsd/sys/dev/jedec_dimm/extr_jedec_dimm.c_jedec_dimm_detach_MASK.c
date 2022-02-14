
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jedec_dimm_softc {int slotid_str; } ;
typedef int device_t ;


 int VAR_0 ;
 struct jedec_dimm_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct jedec_dimm_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_2->slotid_str, VAR_0);

 return (0);
}
