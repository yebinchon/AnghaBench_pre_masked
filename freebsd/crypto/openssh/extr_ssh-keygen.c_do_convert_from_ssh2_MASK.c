
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshkey {int dummy; } ;
struct passwd {int dummy; } ;
typedef int line ;
typedef int encoded ;
typedef int blob ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 struct sshkey* FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int,struct sshkey**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_13(struct passwd *VAR_4, struct sshkey **VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 u_int VAR_10;
 char VAR_11[1024];
 u_char VAR_12[8096];
 char VAR_13[8096];
 FILE *VAR_14;

 if ((VAR_14 = FUNC_3(VAR_3, "r")) == ((void*)0))
  FUNC_1("%s: %s: %s", VAR_1, VAR_3, FUNC_7(VAR_2));
 VAR_13[0] = '\0';
 while ((VAR_8 = FUNC_4(VAR_14, VAR_11, sizeof(VAR_11))) != -1) {
  if (VAR_8 > 0 && VAR_11[VAR_8 - 1] == '\\')
   VAR_9++;
  if (FUNC_10(VAR_11, "----", 4) == 0 ||
      FUNC_11(VAR_11, ": ") != ((void*)0)) {
   if (FUNC_11(VAR_11, VAR_0) != ((void*)0))
    *VAR_6 = 1;
   if (FUNC_11(VAR_11, " END ") != ((void*)0)) {
    break;
   }

   continue;
  }
  if (VAR_9) {
   VAR_9--;

   continue;
  }
  FUNC_8(VAR_13, VAR_11, sizeof(VAR_13));
 }
 VAR_10 = FUNC_9(VAR_13);
 if (((VAR_10 % 4) == 3) &&
     (VAR_13[VAR_10-1] == '=') &&
     (VAR_13[VAR_10-2] == '=') &&
     (VAR_13[VAR_10-3] == '='))
  VAR_13[VAR_10-3] = '\0';
 VAR_8 = FUNC_12(VAR_13, VAR_12, sizeof(VAR_12));
 if (VAR_8 < 0)
  FUNC_1("uudecode failed.");
 if (*VAR_6)
  *VAR_5 = FUNC_0(VAR_12, VAR_8);
 else if ((VAR_7 = FUNC_6(VAR_12, VAR_8, VAR_5)) != 0)
  FUNC_1("decode blob failed: %s", FUNC_5(VAR_7));
 FUNC_2(VAR_14);
}
