
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ib_slvl_table_t ;


 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (char*,int,char*,...) ;

void FUNC_2(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 ib_slvl_table_t *VAR_4 = VAR_2;
 uint8_t VAR_5;
 int VAR_6, VAR_7 = 0;
 VAR_7 = FUNC_1(VAR_0, VAR_1, "|");
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  FUNC_0(VAR_4, VAR_6, &VAR_5);
  VAR_7 += FUNC_1(VAR_0 + VAR_7, VAR_1 - VAR_7, "%2u|", VAR_5);
  if (VAR_7 >= VAR_1)
   break;
 }
 FUNC_1(VAR_0 + VAR_7, VAR_1 - VAR_7, "\n");
}
