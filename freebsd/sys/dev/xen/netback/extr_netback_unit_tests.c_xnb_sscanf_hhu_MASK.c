
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, size_t VAR_1)
{
 const char VAR_2[] = "137";
 uint8_t VAR_3[12];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
  VAR_3[VAR_4] = 'X';

 FUNC_0(FUNC_1(VAR_2, "%hhu", &VAR_3[4]) == 1);
 for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
  FUNC_0(VAR_3[VAR_4] == (VAR_4 == 4 ? 137 : 'X'));
}
