
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
 int FUNC_0 () ;

__attribute__((used)) static const char *
FUNC_1(u_int VAR_0)
{
 switch (VAR_0) {
 case 0:
  return "NONE";
 case 134:
  return "FUZZ_1_BIT_FLIP";
 case 132:
  return "FUZZ_2_BIT_FLIP";
 case 133:
  return "FUZZ_1_BYTE_FLIP";
 case 131:
  return "FUZZ_2_BYTE_FLIP";
 case 128:
  return "FUZZ_TRUNCATE_START";
 case 129:
  return "FUZZ_TRUNCATE_END";
 case 130:
  return "FUZZ_BASE64";
 default:
  FUNC_0();
 }
}
