
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{

 switch (FUNC_1(VAR_2)) {
 case 0x87a010b5:
  FUNC_0(VAR_2, "PLX Non-Transparent Bridge NT0 Link");
  return (VAR_0);
 case 0x87a110b5:
  FUNC_0(VAR_2, "PLX Non-Transparent Bridge NT1 Link");
  return (VAR_0);
 case 0x87b010b5:
  FUNC_0(VAR_2, "PLX Non-Transparent Bridge NT0 Virtual");
  return (VAR_0);
 case 0x87b110b5:
  FUNC_0(VAR_2, "PLX Non-Transparent Bridge NT1 Virtual");
  return (VAR_0);
 }
 return (VAR_1);
}
