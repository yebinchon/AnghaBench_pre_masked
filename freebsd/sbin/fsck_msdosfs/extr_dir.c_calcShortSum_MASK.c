
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static u_char
FUNC_0(u_char *VAR_0)
{
 u_char VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 11; VAR_2++) {
  VAR_1 = (VAR_1 << 7)|(VAR_1 >> 1);
  VAR_1 += VAR_0[VAR_2];
 }

 return VAR_1;
}
