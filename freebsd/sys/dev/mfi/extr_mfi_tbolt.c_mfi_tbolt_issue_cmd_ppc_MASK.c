
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct mfi_softc {int dummy; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mfi_softc*,int ,int ) ;

void
FUNC_1(struct mfi_softc *VAR_4, bus_addr_t VAR_5,
   uint32_t VAR_6)
{
 VAR_5 |= (VAR_2
     << VAR_3);
 FUNC_0(VAR_4, VAR_1, (uint32_t)VAR_5);
 FUNC_0(VAR_4, VAR_0, (uint32_t)((uint64_t)VAR_5 >> 32));
}
