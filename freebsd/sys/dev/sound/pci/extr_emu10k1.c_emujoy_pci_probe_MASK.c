
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 char *VAR_2 = ((void*)0);

 switch (FUNC_2(VAR_1)) {
 case 0x70021102:
  VAR_2 = "Creative EMU10K1 Joystick";
  FUNC_0(VAR_1);
  break;
 case 0x70031102:
  VAR_2 = "Creative EMU10K2 Joystick";
  FUNC_0(VAR_1);
  break;
 }

 if (VAR_2) FUNC_1(VAR_1, VAR_2);
 return VAR_2 ? -1000 : VAR_0;
}
