
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cc_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(cc_t VAR_1)
{
 static char VAR_2[5];







 unsigned int VAR_3 = (unsigned int)VAR_1;

 if (VAR_3 == 0x7f)
  return ("^?");
 if (VAR_1 == (cc_t)VAR_0) {
  return "off";
 }
 if (VAR_3 >= 0x80) {
  VAR_2[0] = '\\';
  VAR_2[1] = ((VAR_1>>6)&07) + '0';
  VAR_2[2] = ((VAR_1>>3)&07) + '0';
  VAR_2[3] = (VAR_1&07) + '0';
  VAR_2[4] = 0;
 } else if (VAR_3 >= 0x20) {
  VAR_2[0] = VAR_1;
  VAR_2[1] = 0;
 } else {
  VAR_2[0] = '^';
  VAR_2[1] = '@'+VAR_1;
  VAR_2[2] = 0;
 }
 return (VAR_2);
}
