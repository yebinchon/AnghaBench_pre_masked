
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_ccung_softc {int dummy; } ;
typedef int device_t ;
typedef int bus_addr_t ;


 int FUNC_0 (struct aw_ccung_softc*,int ,int ) ;
 struct aw_ccung_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, bus_addr_t VAR_1, uint32_t VAR_2)
{
 struct aw_ccung_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 FUNC_2("offset=%lx write %x\n", VAR_1, VAR_2);
 FUNC_0(VAR_3, VAR_1, VAR_2);
 return (0);
}
