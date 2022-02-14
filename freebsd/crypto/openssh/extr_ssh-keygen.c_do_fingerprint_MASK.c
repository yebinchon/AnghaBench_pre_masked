
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sshkey {int dummy; } ;
struct passwd {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct passwd*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sshkey*,char*) ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char**,size_t*,int *) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_10 (struct sshkey*) ;
 int * VAR_4 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 size_t FUNC_12 (char*,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char*) ;
 int * FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char**,int) ;
 struct sshkey* FUNC_17 (char**) ;

__attribute__((used)) static void
FUNC_18(struct passwd *VAR_5)
{
 FILE *VAR_6;
 struct sshkey *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0), *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 size_t VAR_12 = 0;
 int VAR_13, VAR_14 = 1;
 const char *VAR_15;
 u_long VAR_16 = 0;

 if (!VAR_2)
  FUNC_0(VAR_5, "Enter file in which the key is");
 VAR_15 = VAR_3;

 if (FUNC_11(VAR_3, "-") == 0) {
  VAR_6 = VAR_4;
  VAR_15 = "(stdin)";
 } else if ((VAR_6 = FUNC_7(VAR_15, "r")) == ((void*)0))
  FUNC_3("%s: %s: %s", VAR_0, VAR_15, FUNC_13(VAR_1));

 while (FUNC_9(&VAR_11, &VAR_12, VAR_6) != -1) {
  VAR_16++;
  VAR_9 = VAR_11;
  VAR_9[FUNC_12(VAR_9, "\n")] = '\0';

  VAR_9 = VAR_11 + FUNC_14(VAR_11, " \t");
  if (*VAR_9 == '#' || *VAR_9 == '\0')
   continue;
  if (VAR_16 == 1 && FUNC_11(VAR_3, "-") != 0 &&
      FUNC_15(VAR_9, "PRIVATE KEY") != ((void*)0)) {
   FUNC_8(VAR_11);
   FUNC_4(VAR_6);
   FUNC_6(VAR_15);
   FUNC_2(0);
  }






  if ((VAR_7 = FUNC_17(&VAR_9)) == ((void*)0)) {
   VAR_13 = FUNC_16(VAR_9, &VAR_10, 10);
   if (VAR_13 == 0 || VAR_10 == ((void*)0) ||
       (*VAR_10 != ' ' && *VAR_10 != '\t')) {
    int VAR_17 = 0;

    VAR_8 = VAR_9;
    for (; *VAR_9 && (VAR_17 || (*VAR_9 != ' ' &&
        *VAR_9 != '\t')); VAR_9++) {
     if (*VAR_9 == '\\' && VAR_9[1] == '"')
      VAR_9++;
     else if (*VAR_9 == '"')
      VAR_17 = !VAR_17;
    }
    if (!*VAR_9)
     continue;
    *VAR_9++ = '\0';
   }
  }

  if (VAR_7 == ((void*)0) && (VAR_7 = FUNC_17(&VAR_9)) == ((void*)0)) {
   FUNC_1("%s:%lu: not a public key", VAR_15, VAR_16);
   continue;
  }


  for (; *VAR_9 == ' ' || *VAR_9 == '\t'; VAR_9++)
   ;
  if (*VAR_9 != '\0' && *VAR_9 != '#')
   VAR_8 = VAR_9;

  FUNC_5(VAR_7, VAR_8);
  FUNC_10(VAR_7);
  VAR_14 = 0;
 }
 FUNC_4(VAR_6);
 FUNC_8(VAR_11);

 if (VAR_14)
  FUNC_3("%s is not a public key file.", VAR_15);
 FUNC_2(0);
}
