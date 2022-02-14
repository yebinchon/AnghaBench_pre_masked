
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct octopci_softc {unsigned int sc_io_next; unsigned int sc_mem1_next; } ;
typedef int device_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 struct octopci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (int ,unsigned int,unsigned int,unsigned int,scalar_t__,int) ;
 int FUNC_5 (int ,unsigned int,unsigned int,unsigned int,scalar_t__,int,int) ;
 void* FUNC_6 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned
FUNC_7(device_t VAR_10, unsigned VAR_11, unsigned VAR_12, unsigned VAR_13, unsigned VAR_14, uint8_t *VAR_15)
{
 struct octopci_softc *VAR_16;
 uint64_t VAR_17;
 unsigned VAR_18;
 int VAR_19;

 VAR_16 = FUNC_2(VAR_10);

 FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, FUNC_0(VAR_14), 0xffffffff, 4);
 VAR_17 = FUNC_4(VAR_10, VAR_11, VAR_12, VAR_13, FUNC_0(VAR_14), 4);

 if (VAR_17 == 0) {

  return (VAR_14 + 1);
 }

 if (FUNC_1(VAR_17)) {
  VAR_18 = ~(VAR_17 & VAR_4) + 1;

  VAR_16->sc_io_next = FUNC_6(VAR_16->sc_io_next, VAR_18);
  if (VAR_16->sc_io_next + VAR_18 > VAR_1) {
   FUNC_3(VAR_10, "%02x.%02x:%02x: no ports for BAR%u.\n",
       VAR_11, VAR_12, VAR_13, VAR_14);
   return (VAR_14 + 1);
  }
  FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, FUNC_0(VAR_14),
      VAR_0 + VAR_16->sc_io_next, 4);
  VAR_16->sc_io_next += VAR_18;




  *VAR_15 |= VAR_8;

  return (VAR_14 + 1);
 } else {
  if (FUNC_0(VAR_14) == VAR_9) {



   VAR_19 = 1;
  } else {
   switch (VAR_17 & VAR_6) {
   case 128:




    FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, FUNC_0(VAR_14 + 1), 0, 4);
    VAR_19 = 2;
    break;
   default:
    VAR_19 = 1;
    break;
   }
  }

  VAR_18 = ~(VAR_17 & (uint32_t)VAR_5) + 1;

  VAR_16->sc_mem1_next = FUNC_6(VAR_16->sc_mem1_next, VAR_18);
  if (VAR_16->sc_mem1_next + VAR_18 > VAR_3) {
   FUNC_3(VAR_10, "%02x.%02x:%02x: no memory for BAR%u.\n",
       VAR_11, VAR_12, VAR_13, VAR_14);
   return (VAR_14 + VAR_19);
  }
  FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, FUNC_0(VAR_14),
      VAR_2 + VAR_16->sc_mem1_next, 4);
  VAR_16->sc_mem1_next += VAR_18;




  *VAR_15 |= VAR_7;

  return (VAR_14 + VAR_19);
 }
}
