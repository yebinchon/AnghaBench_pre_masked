
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int cmd_len; int * cmd_data; } ;
struct umass_softc {int sc_quirks; TYPE_1__ sc_transfer; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,...) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct umass_softc *VAR_6, uint8_t *VAR_7,
    uint8_t VAR_8)
{
 if ((VAR_8 == 0) ||
     (VAR_8 > sizeof(VAR_6->sc_transfer.cmd_data))) {
  FUNC_0(VAR_6, VAR_5, "Invalid command "
      "length: %d bytes\n", VAR_8);
  return (0);
 }
 VAR_6->sc_transfer.cmd_len = VAR_8;

 switch (VAR_7[0]) {
 case 128:
  if (VAR_6->sc_quirks & VAR_1) {
   FUNC_0(VAR_6, VAR_5, "Converted TEST_UNIT_READY "
       "to START_UNIT\n");
   FUNC_2(VAR_6->sc_transfer.cmd_data, 0, VAR_8);
   VAR_6->sc_transfer.cmd_data[0] = VAR_4;
   VAR_6->sc_transfer.cmd_data[4] = VAR_3;
   return (1);
  }
  break;

 case 129:




  if (VAR_6->sc_quirks & VAR_0) {
   FUNC_1(VAR_6->sc_transfer.cmd_data, VAR_7, VAR_8);
   VAR_6->sc_transfer.cmd_data[4] = VAR_2;
   return (1);
  }
  break;
 }

 FUNC_1(VAR_6->sc_transfer.cmd_data, VAR_7, VAR_8);
 return (1);
}
