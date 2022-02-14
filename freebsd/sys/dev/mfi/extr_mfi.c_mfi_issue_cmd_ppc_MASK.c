
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mfi_softc {int mfi_flags; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mfi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct mfi_softc *VAR_4, bus_addr_t VAR_5, uint32_t VAR_6)
{
 if (VAR_4->mfi_flags & VAR_0) {
     FUNC_0(VAR_4, VAR_3, (VAR_5 | VAR_6 <<1)|1 );
     FUNC_0(VAR_4, VAR_2, 0x00000000);
 } else {
     FUNC_0(VAR_4, VAR_1, (VAR_5 | VAR_6 <<1)|1 );
 }
}
