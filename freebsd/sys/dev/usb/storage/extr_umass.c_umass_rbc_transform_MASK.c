
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int cmd_len; int cmd_data; } ;
struct umass_softc {int sc_quirks; TYPE_1__ sc_transfer; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,int) ;




 int VAR_0 ;






 int VAR_1 ;



 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct umass_softc *VAR_2, uint8_t *VAR_3, uint8_t VAR_4)
{
 if ((VAR_4 == 0) ||
     (VAR_4 > sizeof(VAR_2->sc_transfer.cmd_data))) {
  FUNC_0(VAR_2, VAR_1, "Invalid command "
      "length: %d bytes\n", VAR_4);
  return (0);
 }
 switch (VAR_3[0]) {

 case 136:
 case 135:
 case 133:
 case 132:
 case 129:
 case 130:
 case 140:
 case 139:
 case 138:
 case 131:
 case 128:





 case 134:
 case 137:

  FUNC_1(VAR_2->sc_transfer.cmd_data, VAR_3, VAR_4);

  if ((VAR_2->sc_quirks & VAR_0) && (VAR_4 < 12)) {
   FUNC_2(VAR_2->sc_transfer.cmd_data + VAR_4,
       0, 12 - VAR_4);
   VAR_4 = 12;
  }
  VAR_2->sc_transfer.cmd_len = VAR_4;
  return (1);


 default:
  FUNC_0(VAR_2, VAR_1, "Unsupported RBC "
      "command 0x%02x\n", VAR_3[0]);
  return (0);
 }
}
