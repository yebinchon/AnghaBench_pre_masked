
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(char* VAR_1, uint16_t* VAR_2) {
 char* VAR_3;
 char* VAR_4 = ((void*)0);
 VAR_3 = FUNC_0(1, VAR_0 + 1 );
 if(!VAR_3)
  return 0;
 FUNC_2(VAR_3, VAR_1, VAR_0);
 VAR_3[VAR_0] = '\0';
 *VAR_2 = (uint16_t)FUNC_3(VAR_3, &VAR_4, 10);
 if(!VAR_4 || *VAR_4 != '\0') {
  FUNC_1(VAR_3);
  return 0;
 }
 FUNC_1(VAR_3);
 return 1;
}
