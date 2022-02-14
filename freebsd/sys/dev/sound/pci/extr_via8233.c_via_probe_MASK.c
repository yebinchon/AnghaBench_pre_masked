
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
 switch(FUNC_1(VAR_2)) {
 case 135:
  switch(FUNC_2(VAR_2)) {
  case 131:
   FUNC_0(VAR_2, "VIA VT8233 (pre)");
   return (VAR_0);
  case 132:
   FUNC_0(VAR_2, "VIA VT8233C");
   return (VAR_0);
  case 134:
   FUNC_0(VAR_2, "VIA VT8233");
   return (VAR_0);
  case 133:
   FUNC_0(VAR_2, "VIA VT8233A");
   return (VAR_0);
  case 130:
   FUNC_0(VAR_2, "VIA VT8235");
   return (VAR_0);
  case 129:
   FUNC_0(VAR_2, "VIA VT8237");
   return (VAR_0);
  case 128:
   FUNC_0(VAR_2, "VIA VT8251");
   return (VAR_0);
  default:
   FUNC_0(VAR_2, "VIA VT8233X");
   return (VAR_0);
  }
 }
 return (VAR_1);
}
