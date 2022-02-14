
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_softc {int sha2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct g_bde_softc*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,int) ;
 char* FUNC_8 (char*,char*,int,int) ;
 char* VAR_5 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12(struct g_bde_softc *VAR_6, int VAR_7, const char *VAR_8,
    const char *VAR_9)
{
 char VAR_10[VAR_0 + VAR_4];
 char VAR_11[VAR_0 + VAR_4];
 char *VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 if (VAR_9 != ((void*)0)) {

  VAR_13 = FUNC_5(VAR_9, VAR_1, 0);
  if (VAR_13 < 0)
   FUNC_1(1, "%s", VAR_9);
  VAR_14 = FUNC_7(VAR_13, VAR_10, VAR_0);
  if (VAR_14 == -1)
   FUNC_1(1, "%s", VAR_9);
  FUNC_0(VAR_13);


  FUNC_3(VAR_6, VAR_10, VAR_14);
  FUNC_4(VAR_10, VAR_6->sha2, VAR_4);
  FUNC_4(VAR_11, VAR_6->sha2, VAR_4);
  VAR_15 = VAR_4;
 }

 if (VAR_8 != ((void*)0)) {
  if (FUNC_11(VAR_8) >= VAR_0)
   FUNC_2(1, "Passphrase too long");
  FUNC_10(VAR_10 + VAR_15, VAR_8);

  FUNC_3(VAR_6, VAR_10, FUNC_11(VAR_10 + VAR_15) + VAR_15);
  FUNC_4(VAR_5, VAR_6->sha2, VAR_4);
  return;
 }
 for (;;) {
  VAR_12 = FUNC_8(
      VAR_7 ? "Enter new passphrase:" : "Enter passphrase: ",
      VAR_10 + VAR_15, sizeof VAR_10 - VAR_15,
      VAR_2 | VAR_3);
  if (VAR_12 == ((void*)0))
   FUNC_1(1, "readpassphrase");

  if (VAR_7) {
   VAR_12 = FUNC_8("Reenter new passphrase: ",
       VAR_11 + VAR_15, sizeof VAR_11 - VAR_15,
       VAR_2 | VAR_3);
   if (VAR_12 == ((void*)0))
    FUNC_1(1, "readpassphrase");

   if (FUNC_9(VAR_10 + VAR_15, VAR_11 + VAR_15)) {
    FUNC_6("They didn't match.\n");
    continue;
   }
  }
  if (FUNC_11(VAR_10 + VAR_15) < 3) {
   FUNC_6("Too short passphrase.\n");
   continue;
  }
  break;
 }
 FUNC_3(VAR_6, VAR_10, FUNC_11(VAR_10 + VAR_15) + VAR_15);
 FUNC_4(VAR_5, VAR_6->sha2, VAR_4);
}
