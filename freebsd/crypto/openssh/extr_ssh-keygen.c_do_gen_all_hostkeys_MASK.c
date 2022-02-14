
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct sshkey {int dummy; } ;
struct passwd {char* pw_name; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (char*) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (char*) ;
 int VAR_11 ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int VAR_12 ;
 int FUNC_13 (char*,int,char*,char*,char*) ;
 char* FUNC_14 (int) ;
 int FUNC_15 (struct sshkey*) ;
 int FUNC_16 (struct sshkey*,struct sshkey**) ;
 int FUNC_17 (int,scalar_t__,struct sshkey**) ;
 int FUNC_18 (struct sshkey*,char*,char*,char*,int ,int ,int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (struct sshkey*,int *) ;
 scalar_t__ FUNC_21 (char*,struct stat*) ;
 int VAR_13 ;
 char* FUNC_22 (scalar_t__) ;
 int FUNC_23 (int,int *,scalar_t__*) ;
 int VAR_14 ;
 int FUNC_24 (char**,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_25(struct passwd *VAR_15)
{
 struct {
  char *key_type;
  char *key_type_display;
  char *path;
 } VAR_16[] = {







  { "ed25519", "ED25519",VAR_3 },



  { ((void*)0), ((void*)0), ((void*)0) }
 };

 int VAR_17 = 0;
 struct stat VAR_18;
 struct sshkey *VAR_19, *VAR_20;
 char VAR_21[1024], *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;
 FILE *VAR_30;

 for (VAR_26 = 0; VAR_16[VAR_26].key_type; VAR_26++) {
  VAR_20 = VAR_19 = ((void*)0);
  VAR_22 = VAR_23 = VAR_24 = VAR_25 = ((void*)0);

  FUNC_24(&VAR_24, "%s%s",
      VAR_10, VAR_16[VAR_26].path);


  if (FUNC_21(VAR_24, &VAR_18) == 0) {
   if (VAR_18.st_size != 0)
    goto next;
  } else if (VAR_8 != VAR_0) {
   FUNC_1("Could not stat %s: %s", VAR_16[VAR_26].path,
       FUNC_22(VAR_8));
   goto failnext;
  }





  FUNC_24(&VAR_22, "%s%s.XXXXXXXXXX",
      VAR_10, VAR_16[VAR_26].path);
  FUNC_24(&VAR_23, "%s%s.pub.XXXXXXXXXX",
      VAR_10, VAR_16[VAR_26].path);
  FUNC_24(&VAR_25, "%s%s.pub",
      VAR_10, VAR_16[VAR_26].path);

  if (VAR_17 == 0) {
   VAR_17 = 1;
   FUNC_11("%s: generating new host keys: ", VAR_6);
  }
  FUNC_11("%s ", VAR_16[VAR_26].key_type_display);
  FUNC_7(VAR_13);
  VAR_27 = FUNC_19(VAR_16[VAR_26].key_type);
  if ((VAR_28 = FUNC_10(VAR_22)) == -1) {
   FUNC_1("Could not save your public key in %s: %s",
       VAR_22, FUNC_22(VAR_8));
   goto failnext;
  }
  FUNC_0(VAR_28);
  VAR_7 = 0;
  FUNC_23(VAR_27, ((void*)0), &VAR_7);
  if ((VAR_29 = FUNC_17(VAR_27, VAR_7, &VAR_19)) != 0) {
   FUNC_1("sshkey_generate failed: %s", FUNC_14(VAR_29));
   goto failnext;
  }
  if ((VAR_29 = FUNC_16(VAR_19, &VAR_20)) != 0)
   FUNC_2("sshkey_from_private failed: %s", FUNC_14(VAR_29));
  FUNC_13(VAR_21, sizeof VAR_21, "%s@%s", VAR_15->pw_name,
      VAR_9);
  if ((VAR_29 = FUNC_18(VAR_19, VAR_22, "",
      VAR_21, VAR_14, VAR_11, VAR_12)) != 0) {
   FUNC_1("Saving key \"%s\" failed: %s",
       VAR_22, FUNC_14(VAR_29));
   goto failnext;
  }
  if ((VAR_28 = FUNC_10(VAR_23)) == -1) {
   FUNC_1("Could not save your public key in %s: %s",
       VAR_23, FUNC_22(VAR_8));
   goto failnext;
  }
  (void)FUNC_3(VAR_28, 0644);
  VAR_30 = FUNC_5(VAR_28, "w");
  if (VAR_30 == ((void*)0)) {
   FUNC_1("fdopen %s failed: %s", VAR_23, FUNC_22(VAR_8));
   FUNC_0(VAR_28);
   goto failnext;
  }
  if ((VAR_29 = FUNC_20(VAR_20, VAR_30)) != 0) {
   FUNC_1("write key failed: %s", FUNC_14(VAR_29));
   FUNC_4(VAR_30);
   goto failnext;
  }
  FUNC_8(VAR_30, " %s\n", VAR_21);
  if (FUNC_6(VAR_30) != 0) {
   FUNC_1("write key failed: %s", FUNC_22(VAR_8));
   FUNC_4(VAR_30);
   goto failnext;
  }
  if (FUNC_4(VAR_30) != 0) {
   FUNC_1("key close failed: %s", FUNC_22(VAR_8));
   goto failnext;
  }


  if (FUNC_12(VAR_23, VAR_25) != 0) {
   FUNC_1("Unable to move %s into position: %s",
       VAR_25, FUNC_22(VAR_8));
   goto failnext;
  }
  if (FUNC_12(VAR_22, VAR_24) != 0) {
   FUNC_1("Unable to move %s into position: %s",
       VAR_16[VAR_26].path, FUNC_22(VAR_8));
 failnext:
   VAR_17 = 0;
   goto next;
  }
 next:
  FUNC_15(VAR_19);
  FUNC_15(VAR_20);
  FUNC_9(VAR_22);
  FUNC_9(VAR_23);
  FUNC_9(VAR_24);
  FUNC_9(VAR_25);
 }
 if (VAR_17 != 0)
  FUNC_11("\n");
}
