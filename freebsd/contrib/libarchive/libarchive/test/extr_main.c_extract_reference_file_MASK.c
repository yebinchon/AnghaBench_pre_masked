
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* VAR_0 ;
 int FUNC_9 (char*,char*,char*,char const*) ;

void
FUNC_10(const char *VAR_1)
{
 char VAR_2[1024];
 FILE *VAR_3, *VAR_4;

 FUNC_9(VAR_2, "%s/%s.uu", VAR_0, VAR_1);
 VAR_3 = FUNC_6(VAR_2, "r");
 FUNC_3("Couldn't open reference file %s", VAR_2);
 FUNC_2(VAR_3 != ((void*)0));
 if (VAR_3 == ((void*)0))
  return;

 for (;;) {
  if (FUNC_5(VAR_2, sizeof(VAR_2), VAR_3) == ((void*)0)) {

   return;
  }
  if (FUNC_8(VAR_2, "begin ", 6) == 0)
   break;
 }

 VAR_4 = FUNC_6(VAR_1, "wb");
 while (FUNC_5(VAR_2, sizeof(VAR_2), VAR_3) != ((void*)0)) {
  char *VAR_5 = VAR_2;
  int VAR_6;

  if (FUNC_8(VAR_2, "end", 3) == 0)
   break;

  VAR_6 = FUNC_0(*VAR_5++);
  while (VAR_6 > 0) {
   int VAR_7 = 0;

   if (VAR_6 > 0) {
    FUNC_2(FUNC_1(VAR_5[0]));
    FUNC_2(FUNC_1(VAR_5[1]));
    VAR_7 = FUNC_0(*VAR_5++) << 18;
    VAR_7 |= FUNC_0(*VAR_5++) << 12;
    FUNC_7(VAR_7 >> 16, VAR_4);
    --VAR_6;
   }
   if (VAR_6 > 0) {
    FUNC_2(FUNC_1(VAR_5[0]));
    VAR_7 |= FUNC_0(*VAR_5++) << 6;
    FUNC_7((VAR_7 >> 8) & 0xFF, VAR_4);
    --VAR_6;
   }
   if (VAR_6 > 0) {
    FUNC_2(FUNC_1(VAR_5[0]));
    VAR_7 |= FUNC_0(*VAR_5++);
    FUNC_7(VAR_7 & 0xFF, VAR_4);
    --VAR_6;
   }
  }
 }
 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
}
