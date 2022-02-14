
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned char) ;
 int FUNC_1 (char*,char*) ;

isc_result_t
FUNC_2(unsigned char *VAR_1, unsigned int VAR_2, char *VAR_3) {

 VAR_3[0]='\0';
 char VAR_4[] = "AA";
 unsigned int VAR_5;
 FUNC_1(VAR_3, "0x");
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0(VAR_4, "%02X", VAR_1[VAR_5]);
  FUNC_1(VAR_3, VAR_4);
 }
 FUNC_1(VAR_3, "\0");
 return (VAR_0);
}
