
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_endian ;





 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0) {
 case 128: return "none";
 case 130: return "2's complement, little endian";
 case 129: return "2's complement, big endian";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "<unknown: %#x>", VAR_0);
  return (VAR_1);
 }
}
