
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;






 int FUNC_0 (int ) ;

__attribute__((used)) static const char *
FUNC_1(u_int32_t VAR_0)
{
 const char *VAR_1;

 switch (FUNC_0(VAR_0)) {
  case 129: VAR_1 = "Reset"; break;
  case 130: VAR_1 = "Ready"; break;
  case 128:VAR_1 = "Running"; break;
  case 131: VAR_1 = "Fault"; break;
  default: VAR_1 = "Unknown"; break;
 }
 return VAR_1;
}
