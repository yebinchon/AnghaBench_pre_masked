
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 u_int16_t VAR_4;
 u_int16_t VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 == VAR_2) {
  switch(VAR_5) {
  case 141:
  case 140:
  case 138:
  case 139:
  case 128:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
   FUNC_0(VAR_3, "nForce2/3/4 MCP SMBus Controller");
   return (VAR_0);
  }
 }

 return (VAR_1);
}
