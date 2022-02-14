
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(int VAR_0, size_t VAR_1)
{
 switch (VAR_0) {
 case 133:
 case 131:
  return 64;
 case 129:
 case 134:
 case 132:
 case 130:
  return 32;
 case 135:
  return VAR_1 <= 32 ? 16 : 32;
 case 128:
  return VAR_1 <= 32 ? 16 : 32;
 default:
  return 16;
 }
}
