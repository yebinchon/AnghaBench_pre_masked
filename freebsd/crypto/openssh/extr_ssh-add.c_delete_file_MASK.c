
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int,struct sshkey*) ;
 int FUNC_7 (struct sshkey*,struct sshkey*) ;
 int FUNC_8 (struct sshkey*) ;
 int FUNC_9 (char const*,struct sshkey**,char**) ;
 int VAR_3 ;
 int FUNC_10 (char**,char*,char const*) ;

__attribute__((used)) static int
FUNC_11(int VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
 struct sshkey *VAR_8, *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 int VAR_12, VAR_13 = -1;

 if ((VAR_12 = FUNC_9(VAR_5, &VAR_8, &VAR_11)) != 0) {
  FUNC_4("Bad key file %s: %s\n", VAR_5, FUNC_5(VAR_12));
  return -1;
 }
 if ((VAR_12 = FUNC_6(VAR_4, VAR_8)) == 0) {
  if (!VAR_7) {
   FUNC_2(VAR_3, "Identity removed: %s (%s)\n",
       VAR_5, VAR_11);
  }
  VAR_13 = 0;
 } else
  FUNC_2(VAR_3, "Could not remove identity \"%s\": %s\n",
      VAR_5, FUNC_5(VAR_12));

 if (VAR_6)
  goto out;


 FUNC_3(VAR_11);
 VAR_11 = ((void*)0);
 FUNC_10(&VAR_10, "%s-cert.pub", VAR_5);
 if ((VAR_12 = FUNC_9(VAR_10, &VAR_9, &VAR_11)) != 0) {
  if (VAR_12 != VAR_1 || VAR_2 != VAR_0)
   FUNC_0("Failed to load certificate \"%s\": %s",
       VAR_10, FUNC_5(VAR_12));
  goto out;
 }

 if (!FUNC_7(VAR_9, VAR_8))
  FUNC_1("Certificate %s does not match private key %s",
      VAR_10, VAR_5);

 if ((VAR_12 = FUNC_6(VAR_4, VAR_9)) == 0) {
  if (!VAR_7) {
   FUNC_2(VAR_3, "Identity removed: %s (%s)\n",
       VAR_10, VAR_11);
  }
  VAR_13 = 0;
 } else
  FUNC_2(VAR_3, "Could not remove identity \"%s\": %s\n",
      VAR_10, FUNC_5(VAR_12));

 out:
 FUNC_8(VAR_9);
 FUNC_8(VAR_8);
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);

 return VAR_13;
}
