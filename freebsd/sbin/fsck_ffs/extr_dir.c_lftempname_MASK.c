
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ino_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(char *VAR_1, ino_t VAR_2)
{
 ino_t VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1 + 2;
 for (VAR_3 = VAR_0; VAR_3 > 0; VAR_3 /= 10)
  VAR_4++;
 *--VAR_4 = 0;
 VAR_5 = VAR_4 - VAR_1;
 VAR_3 = VAR_2;
 while (VAR_4 > VAR_1) {
  *--VAR_4 = (VAR_3 % 10) + '0';
  VAR_3 /= 10;
 }
 *VAR_4 = '#';
 return (VAR_5);
}
