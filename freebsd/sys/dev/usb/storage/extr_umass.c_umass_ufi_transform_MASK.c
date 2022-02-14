
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* cmd_data; int cmd_len; } ;
struct umass_softc {int sc_quirks; TYPE_1__ sc_transfer; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,...) ;




 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int ) ;

__attribute__((used)) static uint8_t
FUNC_3(struct umass_softc *VAR_5, uint8_t *VAR_6,
    uint8_t VAR_7)
{
 if ((VAR_7 == 0) ||
     (VAR_7 > sizeof(VAR_5->sc_transfer.cmd_data))) {
  FUNC_0(VAR_5, VAR_2, "Invalid command "
      "length: %d bytes\n", VAR_7);
  return (0);
 }

 VAR_5->sc_transfer.cmd_len = VAR_4;


 FUNC_2(VAR_5->sc_transfer.cmd_data, 0, VAR_4);

 switch (VAR_6[0]) {





 case 132:
  if (VAR_5->sc_quirks & VAR_0) {




   FUNC_0(VAR_5, VAR_3, "Converted TEST_UNIT_READY "
       "to START_UNIT\n");

   VAR_5->sc_transfer.cmd_data[0] = 134;
   VAR_5->sc_transfer.cmd_data[4] = VAR_1;
   return (1);
  }
  break;

 case 136:
 case 137:
 case 147:
 case 146:
 case 134:
 case 135:
 case 142:
 case 139:
 case 141:
 case 130:
 case 143:
 case 128:
 case 131:
 case 145:
 case 144:
 case 140:
 case 129:
 case 138:
  break;






 case 133:
  return (2);

 default:
  FUNC_0(VAR_5, VAR_2, "Unsupported UFI "
      "command 0x%02x\n", VAR_6[0]);
  return (0);
 }

 FUNC_1(VAR_5->sc_transfer.cmd_data, VAR_6, VAR_7);
 return (1);
}
