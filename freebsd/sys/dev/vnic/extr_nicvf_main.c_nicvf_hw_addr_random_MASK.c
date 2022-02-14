
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(uint8_t *VAR_1)
{
 uint32_t VAR_2;
 uint8_t VAR_3[VAR_0];





 VAR_2 = FUNC_0() & 0x00ffffff;
 VAR_3[0] = 'b';
 VAR_3[1] = 's';
 VAR_3[2] = 'd';
 VAR_3[3] = VAR_2 >> 16;
 VAR_3[4] = VAR_2 >> 8;
 VAR_3[5] = VAR_2 >> 0;

 FUNC_1(VAR_1, VAR_3, VAR_0);
}
