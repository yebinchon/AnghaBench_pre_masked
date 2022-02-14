
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ u_char ;


 char* FUNC_0 (int,int) ;

__attribute__((used)) static char *
FUNC_1(u_char *VAR_0, size_t VAR_1)
{
 char VAR_2[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
 char VAR_3[] = { 'b', 'c', 'd', 'f', 'g', 'h', 'k', 'l', 'm',
     'n', 'p', 'r', 's', 't', 'v', 'z', 'x' };
 u_int VAR_4, VAR_5 = 0, VAR_6, VAR_7 = 1;
 char *VAR_8;

 VAR_6 = (VAR_1 / 2) + 1;
 if ((VAR_8 = FUNC_0(VAR_6, 6)) == ((void*)0))
  return ((void*)0);
 VAR_8[VAR_5++] = 'x';
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  u_int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  if ((VAR_4 + 1 < VAR_6) || (VAR_1 % 2 != 0)) {
   VAR_9 = (((((u_int)(VAR_0[2 * VAR_4])) >> 6) & 3) +
       VAR_7) % 6;
   VAR_10 = (((u_int)(VAR_0[2 * VAR_4])) >> 2) & 15;
   VAR_11 = ((((u_int)(VAR_0[2 * VAR_4])) & 3) +
       (VAR_7 / 6)) % 6;
   VAR_8[VAR_5++] = VAR_2[VAR_9];
   VAR_8[VAR_5++] = VAR_3[VAR_10];
   VAR_8[VAR_5++] = VAR_2[VAR_11];
   if ((VAR_4 + 1) < VAR_6) {
    VAR_12 = (((u_int)(VAR_0[(2 * VAR_4) + 1])) >> 4) & 15;
    VAR_13 = (((u_int)(VAR_0[(2 * VAR_4) + 1]))) & 15;
    VAR_8[VAR_5++] = VAR_3[VAR_12];
    VAR_8[VAR_5++] = '-';
    VAR_8[VAR_5++] = VAR_3[VAR_13];
    VAR_7 = ((VAR_7 * 5) +
        ((((u_int)(VAR_0[2 * VAR_4])) * 7) +
        ((u_int)(VAR_0[(2 * VAR_4) + 1])))) % 36;
   }
  } else {
   VAR_9 = VAR_7 % 6;
   VAR_10 = 16;
   VAR_11 = VAR_7 / 6;
   VAR_8[VAR_5++] = VAR_2[VAR_9];
   VAR_8[VAR_5++] = VAR_3[VAR_10];
   VAR_8[VAR_5++] = VAR_2[VAR_11];
  }
 }
 VAR_8[VAR_5++] = 'x';
 VAR_8[VAR_5++] = '\0';
 return VAR_8;
}
