
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,...) ;
 char* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(FILE* VAR_1, char* VAR_2, uint8_t* VAR_3, size_t VAR_4, uint16_t VAR_5)
{
 char* VAR_6 = FUNC_3(VAR_3, VAR_4);
 if(!VAR_6) {
  FUNC_2("malloc failure in write to %s", VAR_2);
  return 0;
 }
 if(FUNC_0(VAR_1, ";;id: %s %d\n", VAR_6, (int)VAR_5) < 0) {
  FUNC_2("could not write to %s: %s", VAR_2, FUNC_4(VAR_0));
  FUNC_1(VAR_6);
  return 0;
 }
 FUNC_1(VAR_6);
 return 1;
}
