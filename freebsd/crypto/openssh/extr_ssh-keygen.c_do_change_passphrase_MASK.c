
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct sshkey {int dummy; } ;
struct passwd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct passwd*,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,char*) ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,int ) ;
 int VAR_8 ;
 char* FUNC_9 (int) ;
 int FUNC_10 (struct sshkey*) ;
 int FUNC_11 (int ,char*,struct sshkey**,char**) ;
 int FUNC_12 (struct sshkey*,int ,char*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,struct stat*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int VAR_9 ;
 char* FUNC_17 (scalar_t__) ;

__attribute__((used)) static void
FUNC_18(struct passwd *VAR_10)
{
 char *VAR_11;
 char *VAR_12, *VAR_13, *VAR_14;
 struct stat VAR_15;
 struct sshkey *VAR_16;
 int VAR_17;

 if (!VAR_3)
  FUNC_0(VAR_10, "Enter file in which the key is");
 if (FUNC_13(VAR_4, &VAR_15) < 0)
  FUNC_4("%s: %s", VAR_4, FUNC_15(VAR_2));

 VAR_17 = FUNC_11(VAR_4, "", &VAR_16, &VAR_11);
 if (VAR_17 == VAR_1) {
  if (VAR_6)
   VAR_12 = FUNC_17(VAR_6);
  else
   VAR_12 =
       FUNC_8("Enter old passphrase: ",
       VAR_0);
  VAR_17 = FUNC_11(VAR_4, VAR_12,
      &VAR_16, &VAR_11);
  FUNC_3(VAR_12, FUNC_16(VAR_12));
  FUNC_5(VAR_12);
  if (VAR_17 != 0)
   goto badkey;
 } else if (VAR_17 != 0) {
 badkey:
  FUNC_4("Failed to load key %s: %s", VAR_4, FUNC_9(VAR_17));
 }
 if (VAR_11)
  FUNC_6("Key has comment '%s'\n", VAR_11);


 if (VAR_5) {
  VAR_13 = FUNC_17(VAR_5);
  VAR_14 = ((void*)0);
 } else {
  VAR_13 =
   FUNC_8("Enter new passphrase (empty for no "
       "passphrase): ", VAR_0);
  VAR_14 = FUNC_8("Enter same passphrase again: ",
      VAR_0);


  if (FUNC_14(VAR_13, VAR_14) != 0) {
   FUNC_3(VAR_13, FUNC_16(VAR_13));
   FUNC_3(VAR_14, FUNC_16(VAR_14));
   FUNC_5(VAR_13);
   FUNC_5(VAR_14);
   FUNC_7("Pass phrases do not match.  Try again.\n");
   FUNC_2(1);
  }

  FUNC_3(VAR_14, FUNC_16(VAR_14));
  FUNC_5(VAR_14);
 }


 if ((VAR_17 = FUNC_12(VAR_16, VAR_4, VAR_13,
     VAR_11, VAR_9, VAR_7, VAR_8)) != 0) {
  FUNC_1("Saving key \"%s\" failed: %s.",
      VAR_4, FUNC_9(VAR_17));
  FUNC_3(VAR_13, FUNC_16(VAR_13));
  FUNC_5(VAR_13);
  FUNC_10(VAR_16);
  FUNC_5(VAR_11);
  FUNC_2(1);
 }

 FUNC_3(VAR_13, FUNC_16(VAR_13));
 FUNC_5(VAR_13);
 FUNC_10(VAR_16);
 FUNC_5(VAR_11);

 FUNC_7("Your identification has been saved with the new passphrase.\n");
 FUNC_2(0);
}
