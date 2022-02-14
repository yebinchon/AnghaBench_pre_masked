
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct puc_softc {intptr_t sc_cfg_data; int sc_dev; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;






 intptr_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct puc_softc *VAR_3, enum puc_cfg_cmd VAR_4, int VAR_5,
    intptr_t *VAR_6)
{
 static const uint16_t VAR_7[] = {
     0x0002, 0x4036, 0x4037, 0x4038, 0x4078, 0x4079, 0x4085,
     0x4088, 0x4089, 0x5037, 0x5078, 0x5079, 0x5085, 0x6079,
     0x7079, 0x8079, 0x8137, 0x8138, 0x8237, 0x8238, 0x9079,
     0x9137, 0x9138, 0x9237, 0x9238, 0xA079, 0xB079, 0xC079,
     0xD079, 0
 };
 static const uint16_t VAR_8[] = {
     0x4055, 0x4056, 0x4095, 0x4096, 0x5056, 0x8156, 0x8157,
     0x8256, 0x8257, 0x9056, 0x9156, 0x9157, 0x9158, 0x9159,
     0x9256, 0x9257, 0xA056, 0xA157, 0xA158, 0xA159, 0xB056,
     0xB157, 0
 };
 static const uint16_t VAR_9[] = {
     0x4065, 0x4066, 0x5065, 0x5066, 0x8166, 0x9066, 0x9166,
     0x9167, 0x9168, 0xA066, 0xA167, 0xA168, 0
 };
 static const struct {
  int ports;
  const uint16_t *ids;
 } VAR_10[] = {
     { 2, VAR_7 },
     { 4, VAR_8 },
     { 8, VAR_9 },
     { 0, ((void*)0) }
 };
 static char VAR_11[64];
 int VAR_12, VAR_13;
 uint16_t VAR_14;

 switch (VAR_4) {
 case 133:
  if (VAR_5 < 2)
   *VAR_6 = VAR_0 * 8;
  else
   *VAR_6 = VAR_0;
  return (0);
 case 132:
  FUNC_1(VAR_11, sizeof(VAR_11),
      "Timedia technology %d Port Serial", (int)VAR_3->sc_cfg_data);
  *VAR_6 = (intptr_t)VAR_11;
  return (0);
 case 131:
  VAR_14 = FUNC_0(VAR_3->sc_dev);
  VAR_12 = 0;
  while (VAR_10[VAR_12].ports != 0) {
   VAR_13 = 0;
   while (VAR_10[VAR_12].ids[VAR_13] != 0) {
    if (VAR_14 == VAR_10[VAR_12].ids[VAR_13]) {
     VAR_3->sc_cfg_data = VAR_10[VAR_12].ports;
     *VAR_6 = VAR_3->sc_cfg_data;
     return (0);
    }
    VAR_13++;
   }
   VAR_12++;
  }
  return (VAR_1);
 case 130:
  *VAR_6 = (VAR_5 == 1 || VAR_5 == 3) ? 8 : 0;
  return (0);
 case 129:
  *VAR_6 = 0x10 + ((VAR_5 > 3) ? VAR_5 - 2 : VAR_5 >> 1) * 4;
  return (0);
 case 128:
  *VAR_6 = VAR_2;
  return (0);
 default:
  break;
 }
 return (VAR_1);
}
