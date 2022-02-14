
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char * FUNC_0(int VAR_0, const char *VAR_1)
{
 switch (VAR_0) {
 case 128:
  return "certificate is not yet valid";
 case 129:
  return "certificate has expired";
 default:
  return VAR_1;
 }
}
