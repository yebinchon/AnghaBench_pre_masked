
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 uint8_t VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 != VAR_0)
  return (VAR_1);

 switch(FUNC_0(VAR_2)) {
 case 1:
  FUNC_2(VAR_2,"Apple Standard Keyboard");
  break;
 case 2:
  FUNC_2(VAR_2,"Apple Extended Keyboard");
  break;
 case 4:
  FUNC_2(VAR_2,"Apple ISO Keyboard");
  break;
 case 5:
  FUNC_2(VAR_2,"Apple Extended ISO Keyboard");
  break;
 case 8:
  FUNC_2(VAR_2,"Apple Keyboard II");
  break;
 case 9:
  FUNC_2(VAR_2,"Apple ISO Keyboard II");
  break;
 case 12:
  FUNC_2(VAR_2,"PowerBook Keyboard");
  break;
 case 13:
  FUNC_2(VAR_2,"PowerBook ISO Keyboard");
  break;
 case 24:
  FUNC_2(VAR_2,"PowerBook Extended Keyboard");
  break;
 case 27:
  FUNC_2(VAR_2,"Apple Design Keyboard");
  break;
 case 195:
  FUNC_2(VAR_2,"PowerBook G3 Keyboard");
  break;
 case 196:
  FUNC_2(VAR_2,"iBook Keyboard");
  break;
 default:
  FUNC_2(VAR_2,"ADB Keyboard");
  break;
 }

 return (0);
}
