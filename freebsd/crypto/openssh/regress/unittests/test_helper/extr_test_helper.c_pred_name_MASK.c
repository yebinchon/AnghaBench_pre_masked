
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test_predicate { ____Placeholder_test_predicate } test_predicate ;
__attribute__((used)) static const char *
FUNC_0(enum test_predicate VAR_0)
{
 switch (VAR_0) {
 case 133:
  return "EQ";
 case 128:
  return "NE";
 case 129:
  return "LT";
 case 130:
  return "LE";
 case 131:
  return "GT";
 case 132:
  return "GE";
 default:
  return "UNKNOWN";
 }
}
