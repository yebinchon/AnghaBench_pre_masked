
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fwohci_softc {scalar_t__ state; int* config_rom; scalar_t__ config_rom_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fwohci_softc*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 struct fwohci_softc* VAR_6 ;
 scalar_t__ FUNC_2 (struct fwohci_softc*,int ) ;
 int FUNC_3 (char*,scalar_t__,int*) ;

void
FUNC_4(void)
{
 struct fwohci_softc *VAR_7;
 int VAR_8;

 if (VAR_5 == 0)
  FUNC_1();

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8 ++) {
  VAR_7 = &VAR_6[VAR_8];
  if (VAR_7->state != VAR_3)
   break;

  VAR_7->config_rom = (uint32_t *)
   (((uint32_t)VAR_7->config_rom_buf
    + (VAR_0 - 1)) & ~(VAR_0 - 1));




  if (FUNC_2(VAR_7, 0) == 0) {
   VAR_7->state = VAR_2;
   FUNC_0(VAR_7);
  } else
   VAR_7->state = VAR_1;
 }
}
