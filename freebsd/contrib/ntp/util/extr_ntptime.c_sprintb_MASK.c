
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*) ;

const char *
FUNC_2(
 u_int VAR_2,
 const char * VAR_3
 )
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6;
 int VAR_7;
 char VAR_8;
 static char VAR_9[132];

 if (VAR_3 != ((void*)0) && *VAR_3 == 8)
  FUNC_0(VAR_9, sizeof(VAR_9), "0%o", VAR_2);
 else
  FUNC_0(VAR_9, sizeof(VAR_9), "0x%x", VAR_2);
 VAR_4 = VAR_9 + FUNC_1(VAR_9);
 VAR_5 = VAR_9 + sizeof(VAR_9);
 if (VAR_3 != ((void*)0)) {
  VAR_3++;
  *VAR_4++ = ' ';
  *VAR_4++ = '(';
  VAR_7 = VAR_0;
  while ((VAR_6 = *VAR_3++) != 0) {
   if (VAR_2 & (1 << (VAR_6 - 1))) {
    if (VAR_7) {
     *VAR_4++ = ',';
     if (VAR_4 >= VAR_5)
      goto overrun;
    }
    VAR_7 = VAR_1;
    for (; (VAR_8 = *VAR_3) > 32; VAR_3++) {
     *VAR_4++ = VAR_8;
     if (VAR_4 >= VAR_5)
      goto overrun;
    }
   } else {
    for (; *VAR_3 > 32; VAR_3++)
     continue;
   }
  }
  *VAR_4++ = ')';
  if (VAR_4 >= VAR_5)
   goto overrun;
 }
 *VAR_4 = '\0';
 return VAR_9;

    overrun:
 return "sprintb buffer too small";
}
