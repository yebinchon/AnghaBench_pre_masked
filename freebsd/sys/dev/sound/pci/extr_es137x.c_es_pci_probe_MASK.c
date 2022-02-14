
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 switch(FUNC_2(VAR_2)) {
 case 136:
  FUNC_1(VAR_2, "AudioPCI ES1370");
  return (VAR_0);
 case 129:
  switch(FUNC_3(VAR_2)) {
  case 134:
   FUNC_1(VAR_2, "AudioPCI ES1371-A");
   return (VAR_0);
  case 133:
   FUNC_1(VAR_2, "AudioPCI ES1371-B");
   return (VAR_0);
  case 131:
   FUNC_1(VAR_2, "AudioPCI ES1373-A");
   return (VAR_0);
  case 130:
   FUNC_1(VAR_2, "AudioPCI ES1373-B");
   return (VAR_0);
  case 132:
   FUNC_1(VAR_2, "AudioPCI ES1373-8");
   return (VAR_0);
  case 135:
   FUNC_1(VAR_2, "Creative CT5880-A");
   return (VAR_0);
  default:
   FUNC_1(VAR_2, "AudioPCI ES1371-?");
   FUNC_0(VAR_2,
       "unknown revision %d -- please report to "
       "freebsd-multimedia@freebsd.org\n",
       FUNC_3(VAR_2));
   return (VAR_0);
  }
 case 128:
  FUNC_1(VAR_2, "Strange AudioPCI ES1371-? (vid=3274)");
  FUNC_0(VAR_2,
      "unknown revision %d -- please report to "
      "freebsd-multimedia@freebsd.org\n", FUNC_3(VAR_2));
  return (VAR_0);
 case 141:
  switch(FUNC_3(VAR_2)) {
  case 142:
   FUNC_1(VAR_2,
       "Creative SB AudioPCI CT4730/EV1938");
   return (VAR_0);
  default:
   FUNC_1(VAR_2, "Creative SB AudioPCI CT4730-?");
   FUNC_0(VAR_2,
       "unknown revision %d -- please report to "
       "freebsd-multimedia@freebsd.org\n",
       FUNC_3(VAR_2));
   return (VAR_0);
  }
 case 137:
  switch(FUNC_3(VAR_2)) {
  case 140:
   FUNC_1(VAR_2, "Creative CT5880-C");
   return (VAR_0);
  case 139:
   FUNC_1(VAR_2, "Creative CT5880-D");
   return (VAR_0);
  case 138:
   FUNC_1(VAR_2, "Creative CT5880-E");
   return (VAR_0);
  default:
   FUNC_1(VAR_2, "Creative CT5880-?");
   FUNC_0(VAR_2,
       "unknown revision %d -- please report to "
       "freebsd-multimedia@freebsd.org\n",
       FUNC_3(VAR_2));
   return (VAR_0);
  }
 default:
  return (VAR_1);
 }
}
