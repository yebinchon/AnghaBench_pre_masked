
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
struct ssh_krl {int dummy; } ;
struct passwd {int pw_uid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int ,scalar_t__) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int * VAR_7 ;
 char* VAR_8 ;
 int FUNC_4 (char*,struct ssh_krl**) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ssh_krl*) ;
 struct ssh_krl* FUNC_8 () ;
 int FUNC_9 (struct ssh_krl*,int *) ;
 int FUNC_10 (struct ssh_krl*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct ssh_krl*,struct sshbuf*,int *,int ) ;
 int FUNC_12 (struct sshbuf*) ;
 scalar_t__ FUNC_13 (struct sshbuf*) ;
 int FUNC_14 (struct sshbuf*) ;
 struct sshbuf* FUNC_15 () ;
 int FUNC_16 (struct sshkey*) ;
 int FUNC_17 (char*,struct sshkey**,int *) ;
 int FUNC_18 (char*,struct stat*) ;
 scalar_t__ FUNC_19 (int *,char*) ;
 int FUNC_20 (scalar_t__) ;
 char* FUNC_21 (int *,int ) ;
 int FUNC_22 (struct passwd*,char*,int,struct sshkey*,struct ssh_krl*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_23(struct passwd *VAR_10, int VAR_11, int VAR_12, char **VAR_13)
{
 struct ssh_krl *VAR_14;
 struct stat VAR_15;
 struct sshkey *VAR_16 = ((void*)0);
 int VAR_17, VAR_18, VAR_19, VAR_20 = 0;
 char *VAR_21;
 struct sshbuf *VAR_22;

 if (*VAR_8 == '\0')
  FUNC_2("KRL generation requires an output file");
 if (FUNC_18(VAR_8, &VAR_15) == -1) {
  if (VAR_6 != VAR_0)
   FUNC_2("Cannot access KRL \"%s\": %s",
       VAR_8, FUNC_20(VAR_6));
  if (VAR_11)
   FUNC_2("KRL \"%s\" does not exist", VAR_8);
 }
 if (VAR_4 != ((void*)0)) {
  if (FUNC_19(VAR_4, "none") == 0)
   VAR_20 = 1;
  else {
   VAR_21 = FUNC_21(VAR_4, VAR_10->pw_uid);
   if ((VAR_19 = FUNC_17(VAR_21, &VAR_16, ((void*)0))) != 0)
    FUNC_2("Cannot load CA public key %s: %s",
        VAR_21, FUNC_6(VAR_19));
   FUNC_3(VAR_21);
  }
 }

 if (VAR_11)
  FUNC_4(VAR_8, &VAR_14);
 else if ((VAR_14 = FUNC_8()) == ((void*)0))
  FUNC_2("couldn't create KRL");

 if (VAR_5 != 0)
  FUNC_10(VAR_14, VAR_5);
 if (VAR_7 != ((void*)0))
  FUNC_9(VAR_14, VAR_7);

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
  FUNC_22(VAR_10, VAR_13[VAR_18], VAR_20, VAR_16, VAR_14);

 if ((VAR_22 = FUNC_15()) == ((void*)0))
  FUNC_2("sshbuf_new failed");
 if (FUNC_11(VAR_14, VAR_22, ((void*)0), 0) != 0)
  FUNC_2("Couldn't generate KRL");
 if ((VAR_17 = FUNC_5(VAR_8, VAR_3|VAR_1|VAR_2, 0644)) == -1)
  FUNC_2("open %s: %s", VAR_8, FUNC_20(VAR_6));
 if (FUNC_0(VAR_9, VAR_17, FUNC_14(VAR_22), FUNC_13(VAR_22)) !=
     FUNC_13(VAR_22))
  FUNC_2("write %s: %s", VAR_8, FUNC_20(VAR_6));
 FUNC_1(VAR_17);
 FUNC_12(VAR_22);
 FUNC_7(VAR_14);
 FUNC_16(VAR_16);
}
