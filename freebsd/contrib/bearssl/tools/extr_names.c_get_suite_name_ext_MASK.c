
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(unsigned VAR_0, char *VAR_1, size_t VAR_2)
{
 const char *VAR_3;
 char VAR_4[30];
 size_t VAR_5;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_4, "unknown (0x%04X)", VAR_0);
  VAR_3 = VAR_4;
 }
 VAR_5 = 1 + FUNC_3(VAR_3);
 if (VAR_5 > VAR_2) {
  if (VAR_2 > 0) {
   VAR_1[0] = 0;
  }
  return -1;
 }
 FUNC_1(VAR_1, VAR_3, VAR_5);
 return 0;
}
