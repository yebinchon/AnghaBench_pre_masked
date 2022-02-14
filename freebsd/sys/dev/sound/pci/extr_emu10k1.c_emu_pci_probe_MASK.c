
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 char *VAR_3 = ((void*)0);

 switch (FUNC_1(VAR_2)) {
 case 130:
  VAR_3 = "Creative EMU10K1";
  break;

 case 129:
  if (FUNC_2(VAR_2) == 0x04)
   VAR_3 = "Creative Audigy 2 (EMU10K2)";
  else
   VAR_3 = "Creative Audigy (EMU10K2)";
  break;

 case 128:
  VAR_3 = "Creative Audigy 2 (EMU10K3)";
  break;

 default:
  return VAR_1;
 }

 FUNC_0(VAR_2, VAR_3);
 return VAR_0;
}
