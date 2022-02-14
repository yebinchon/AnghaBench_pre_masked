
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* cmd_data; int cmd_len; } ;
struct umass_softc {int sc_quirks; TYPE_1__ sc_transfer; } ;


 int VAR_0 ;
 int FUNC_0 (struct umass_softc*,int ,char*,...) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;


 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int ) ;

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

 VAR_6->sc_transfer.cmd_len = VAR_0;


 FUNC_2(VAR_6->sc_transfer.cmd_data, 0, VAR_0);

 switch (VAR_7[0]) {





 case 144:




  if (VAR_6->sc_quirks & VAR_1) {
   FUNC_1(VAR_6->sc_transfer.cmd_data, VAR_7, VAR_8);

   VAR_6->sc_transfer.cmd_data[4] = VAR_3;
   return (1);
  }
  break;

 case 130:
  if (VAR_6->sc_quirks & VAR_2) {
   FUNC_0(VAR_6, VAR_5, "Converted TEST_UNIT_READY "
       "to START_UNIT\n");
   VAR_6->sc_transfer.cmd_data[0] = 132;
   VAR_6->sc_transfer.cmd_data[4] = VAR_4;
   return (1);
  }
  break;

 case 134:
 case 135:
 case 132:
 case 133:
 case 140:
 case 136:
 case 139:
 case 129:
 case 141:
 case 131:
 case 143:
 case 142:
 case 137:
 case 0x42:
 case 0x43:
 case 0x44:
 case 0x47:
 case 0x48:
 case 0x49:
 case 0x4b:
 case 0x51:
 case 0x52:
 case 0x54:
 case 0x59:
 case 0x5b:
 case 0x5c:
 case 0x5d:
 case 0xa1:
 case 0xa5:
 case 0xa6:
 case 0xad:
 case 0xbb:
 case 0xe5:
  break;

 case 138:
 case 128:
 default:
  FUNC_0(VAR_6, VAR_5, "Unsupported ATAPI "
      "command 0x%02x - trying anyway\n",
      VAR_7[0]);
  break;
 }

 FUNC_1(VAR_6->sc_transfer.cmd_data, VAR_7, VAR_8);
 return (1);
}
