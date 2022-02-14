
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;
typedef int off_t ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (unsigned char,int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 struct passwd* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (unsigned char) ;
 int FUNC_9 (unsigned char) ;
 int FUNC_10 (unsigned char) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (unsigned char*,char*,int) ;

__attribute__((used)) static void
FUNC_13(FILE *VAR_3, char VAR_4[], char VAR_5[], off_t VAR_6)
{
 unsigned char *VAR_7, VAR_8;
 FILE *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct passwd *VAR_13;
 unsigned char VAR_14[VAR_0];


 if ((VAR_13 = FUNC_7(VAR_4)) != ((void*)0))
  (void) FUNC_11(VAR_13->pw_uid);

 if ((VAR_9 = FUNC_2(VAR_5, "r")) == ((void*)0))
  return;

 (void)FUNC_6(VAR_9, VAR_6, VAR_1);





 VAR_10 = 7;
 VAR_11 = 560;
 VAR_12 = 1;
 while (FUNC_1(VAR_14, sizeof(VAR_14), VAR_9) != ((void*)0)) {
  if (VAR_12) {
   if (VAR_14[0] == '\n') {
    VAR_12 = 0;
    continue;
   }
   if (VAR_14[0] == ' ' || VAR_14[0] == '\t' ||
       (FUNC_12(VAR_14, "From:", 5) &&
       FUNC_12(VAR_14, "Subject:", 8)))
    continue;
  }
  if (VAR_10 <= 0 || VAR_11 <= 0) {
   (void)FUNC_3(VAR_3, "...more...%s", VAR_2);
   (void)FUNC_0(VAR_9);
   return;
  }

  for (VAR_7 = VAR_14; (VAR_8 = *VAR_7) && VAR_8 != '\n'; ++VAR_7, --VAR_11) {



   if (((VAR_8 & 0x80) && VAR_8 < 0xA0) ||
       (!(VAR_8 & 0x80) && !FUNC_9(VAR_8) &&
        !FUNC_10(VAR_8) && VAR_8 != '\a' && VAR_8 != '\b')
      ) {
    if (VAR_8 & 0x80) {
     VAR_8 &= ~0x80;
     (void)FUNC_5("M-", VAR_3);
    }
    if (FUNC_8(VAR_8)) {
     VAR_8 ^= 0x40;
     (void)FUNC_4('^', VAR_3);
    }
   }
   (void)FUNC_4(VAR_8, VAR_3);
  }
  (void)FUNC_5(VAR_2, VAR_3);
  --VAR_10;
 }
 (void)FUNC_3(VAR_3, "----%s\n", VAR_2);
 (void)FUNC_0(VAR_9);
}
