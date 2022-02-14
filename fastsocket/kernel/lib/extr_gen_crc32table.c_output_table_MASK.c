
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_1[], int VAR_2, char *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++) {
  if (VAR_4 % VAR_0 == 0)
   FUNC_0("\n");
  FUNC_0("%s(0x%8.8xL), ", VAR_3, VAR_1[VAR_4]);
 }
 FUNC_0("%s(0x%8.8xL)\n", VAR_3, VAR_1[VAR_2 - 1]);
}
