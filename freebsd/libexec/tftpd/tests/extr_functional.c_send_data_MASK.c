
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(uint16_t VAR_0, const char* VAR_1, size_t VAR_2)
{
 char VAR_3[1024];

 VAR_3[0] = 0;
 VAR_3[1] = 3;
 VAR_3[2] = VAR_0 >> 8;
 VAR_3[3] = VAR_0 & 0xFF;
 FUNC_0(&VAR_3[4], VAR_1, VAR_2);
 FUNC_1(VAR_3, 4 + VAR_2);
}
