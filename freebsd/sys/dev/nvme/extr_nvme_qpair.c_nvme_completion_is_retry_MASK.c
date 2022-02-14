
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nvme_completion {int status; } ;
typedef int boolean_t ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static boolean_t
FUNC_3(const struct nvme_completion *VAR_0)
{
 uint8_t VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_2(VAR_0->status);
 VAR_2 = FUNC_1(VAR_0->status);
 VAR_3 = FUNC_0(VAR_0->status);
 switch (VAR_1) {
 case 147:
  switch (VAR_2) {
  case 143:
  case 128:
   if (VAR_3)
    return (0);
   else
    return (1);
  case 130:
  case 132:
  case 137:
  case 135:
  case 140:
  case 134:
  case 139:
  case 142:
  case 141:
  case 131:
  case 136:
  case 129:
  case 138:
  default:
   return (0);
  }
 case 148:
 case 146:
  return (0);
 case 145:
  switch (VAR_2) {
  case 133:
   if (VAR_3)
    return (0);
   else
    return (1);
  default:
   return (0);
  }
 case 144:
 default:
  return (0);
 }
}
