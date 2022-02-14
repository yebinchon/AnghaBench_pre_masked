
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



 int VAR_0 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (char*,size_t,int ,int) ;
 int FUNC_2 (char*,size_t,char*,char const*) ;
 int VAR_1 ;

void
FUNC_3(char *VAR_2, size_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 const char *VAR_6;
 int VAR_7;

 if ((VAR_6 = FUNC_0(VAR_1, VAR_4)) == ((void*)0))
  VAR_6 = "unknown";

 VAR_7 = FUNC_2(VAR_2, VAR_3, "%s", VAR_6);
 VAR_2 += VAR_7;
 VAR_3 -= VAR_7;

 switch(VAR_4) {
 case 128:
  if (VAR_5 != 0) {
   *VAR_2++ = ':';
   VAR_7--;
   FUNC_1(VAR_2, VAR_3, VAR_0, VAR_5);
  }
  break;
 }
}
