
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 uintptr_t FUNC_0 (int ,int ,int ,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 uintptr_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 uintptr_t VAR_5, VAR_6, VAR_7;
 const char *VAR_8;
 char VAR_9[255];

 VAR_7 = FUNC_0(FUNC_1(VAR_4), VAR_4, VAR_0, &VAR_5);

 if (VAR_5 != VAR_3)
  return (VAR_2);

 VAR_8 = "UNKNOWN";
 VAR_7 = FUNC_0(FUNC_1(VAR_4), VAR_4, VAR_1, &VAR_6);
 switch (VAR_6) {
 case 132:
  VAR_8 = "front";
  break;
 case 130:
  VAR_8 = "rear";
  break;
 case 133:
  VAR_8 = "center";
  break;
 case 128:
  VAR_8 = "subwoofer";
  break;
 case 129:
  VAR_8 = "side";
  break;
 case 131:
  VAR_8 = "multichannel recording";
  break;
 }

 FUNC_3(VAR_9, 255, "EMU10Kx DSP %s PCM interface", VAR_8);
 FUNC_2(VAR_4, VAR_9);
 return (0);
}
