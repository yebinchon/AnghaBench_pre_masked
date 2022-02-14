
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;
typedef int FILE ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(
 FILE *VAR_0,
 char *VAR_1,
 int VAR_2,
 l_fp *VAR_3
 )
{
 char *VAR_4;
 char *VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 char VAR_8[256];

 VAR_4 = VAR_8;



 for (VAR_6 = (int)FUNC_2(VAR_1); VAR_6 < 11; VAR_6++)
  *VAR_4++ = ' ';

 for (VAR_6 = VAR_2; VAR_6 > 0; VAR_6--) {
  if (VAR_6 != (size_t)VAR_2)
   *VAR_4++ = ' ';
  VAR_5 = FUNC_0(VAR_3, 2);
  VAR_7 = FUNC_2(VAR_5);
  if (VAR_7 > 7) {
   VAR_5[7] = '\0';
   VAR_7 = 7;
  }
  while (VAR_7 < 7) {
   *VAR_4++ = ' ';
   VAR_7++;
  }
  while (*VAR_5 != '\0')
      *VAR_4++ = *VAR_5++;
  VAR_3++;
 }
 *VAR_4 = '\0';
 FUNC_1(VAR_0, VAR_1, VAR_8);
}
