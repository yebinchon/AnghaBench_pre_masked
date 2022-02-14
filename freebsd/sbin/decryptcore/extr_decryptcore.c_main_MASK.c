
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keyfile ;
typedef int encryptedcore ;
typedef int core ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char const*,char*,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int,int) ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,int,char*,char const*,char const*) ;
 int FUNC_14 (char*,char*,int) ;
 size_t FUNC_15 (char const*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;

int
FUNC_18(int VAR_12, char **VAR_13)
{
 char VAR_14[VAR_6], VAR_15[VAR_6], VAR_16[VAR_6];
 const char *VAR_17, *VAR_18, *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 size_t VAR_24;
 bool VAR_25, VAR_26;

 VAR_22 = 1;

 FUNC_10(VAR_7);
 FUNC_12("(decryptcore) ");

 VAR_21 = 0;
 *VAR_14 = '\0';
 VAR_17 = ((void*)0);
 VAR_18 = ((void*)0);
 *VAR_15 = '\0';
 VAR_25 = 0;
 *VAR_16 = '\0';
 VAR_19 = ((void*)0);
 VAR_26 = 0;
 while ((VAR_20 = FUNC_3(VAR_12, VAR_13, "Lc:d:e:fk:n:p:v")) != -1) {
  switch (VAR_20) {
  case 'L':
   VAR_26 = 1;
   break;
  case 'c':
   if (FUNC_14(VAR_14, VAR_10, sizeof(VAR_14)) >= sizeof(VAR_14))
    FUNC_8(1, "Core file path is too long.");
   break;
  case 'd':
   VAR_17 = VAR_10;
   break;
  case 'e':
   if (FUNC_14(VAR_15, VAR_10,
       sizeof(VAR_15)) >= sizeof(VAR_15)) {
    FUNC_8(1, "Encrypted core file path is too long.");
   }
   break;
  case 'f':
   VAR_25 = 1;
   break;
  case 'k':
   if (FUNC_14(VAR_16, VAR_10, sizeof(VAR_16)) >=
       sizeof(VAR_16)) {
    FUNC_8(1, "Key file path is too long.");
   }
   break;
  case 'n':
   VAR_18 = VAR_10;
   break;
  case 'p':
   VAR_19 = VAR_10;
   break;
  case 'v':
   VAR_21++;
   break;
  default:
   FUNC_17();
  }
 }
 VAR_12 -= VAR_11;
 VAR_13 += VAR_11;

 if (VAR_12 != 0)
  FUNC_17();


 if ((VAR_17 != ((void*)0) || VAR_18 != ((void*)0)) &&
     (*VAR_16 != '\0' || *VAR_15 != '\0' || *VAR_14 != '\0')) {
  FUNC_17();
 }




 if (VAR_18 != ((void*)0)) {
  for (VAR_24 = 0; VAR_24 < FUNC_15(VAR_18, VAR_6); VAR_24++) {
   if (FUNC_4((int)VAR_18[VAR_24]) == 0)
    FUNC_17();
  }

  if (VAR_17 == ((void*)0))
   VAR_17 = VAR_0;
  FUNC_0(FUNC_13(VAR_16, sizeof(VAR_16),
      "%s/key.%s", VAR_17, VAR_18) > 0);
  FUNC_0(FUNC_13(VAR_14, sizeof(VAR_14),
      "%s/vmcore.%s", VAR_17, VAR_18) > 0);
  FUNC_0(FUNC_13(VAR_15, sizeof(VAR_15),
      "%s/vmcore_encrypted.%s", VAR_17, VAR_18) > 0);
 }

 if (VAR_19 == ((void*)0) || *VAR_16 == '\0' || *VAR_15 == '\0' ||
     *VAR_14 == '\0') {
  FUNC_17();
 }

 if (VAR_26)
  FUNC_11(VAR_8);
 FUNC_6(VAR_21);

 if (VAR_25 && FUNC_16(VAR_14) == -1 && VAR_9 != VAR_1) {
  FUNC_7(VAR_2, "Unable to remove old core");
  goto out;
 }
 VAR_23 = FUNC_5(VAR_14, VAR_5 | VAR_3 | VAR_4, 0600);
 if (VAR_23 == -1) {
  FUNC_7(VAR_2, "Unable to open %s", VAR_14);
  goto out;
 }

 if (!FUNC_1(VAR_23, VAR_19, VAR_16, VAR_15)) {
  if (FUNC_16(VAR_14) == -1 && VAR_9 != VAR_1)
   FUNC_7(VAR_2, "Unable to remove core");
  goto out;
 }

 VAR_22 = 0;
out:
 FUNC_9();
 FUNC_2(VAR_22);
}
