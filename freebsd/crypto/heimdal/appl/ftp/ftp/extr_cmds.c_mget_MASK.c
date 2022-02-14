
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sighand ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (char*,char*) ;
 int VAR_14 ;
 int FUNC_5 (char*,char*,char*,char*,int,int ) ;
 char* FUNC_6 (char**,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int) ;

void
FUNC_11(int VAR_15, char **VAR_16)
{
 sighand VAR_17;
 int VAR_18, VAR_19;
 char *VAR_20, *VAR_21, *VAR_22, VAR_23[VAR_0];

 if (VAR_15 < 2 && !FUNC_0(&VAR_15, &VAR_16, "remote-files")) {
  FUNC_4("usage: %s remote-files\n", VAR_16[0]);
  VAR_3 = -1;
  return;
 }
 VAR_12 = VAR_16[0];
 VAR_11 = 1;
 VAR_17 = FUNC_8(VAR_1, VAR_8);
 FUNC_7(VAR_7);
 while ((VAR_20 = FUNC_6(VAR_16,VAR_14)) != ((void*)0)) {
  if (*VAR_20 == '\0') {
   VAR_11 = 0;
   continue;
  }
  if (VAR_11 && FUNC_9(VAR_20))
      FUNC_4("*** Suspicious filename: %s\n", VAR_20);
  if (VAR_11 && FUNC_1(VAR_16[0], VAR_20)) {
   VAR_21 = VAR_20;
   if (VAR_10) {
    for (VAR_22 = VAR_23;(VAR_18 = (unsigned char)*VAR_21++);)
     *VAR_22++ = FUNC_10(VAR_18);
    *VAR_22 = '\0';
    VAR_21 = VAR_23;
   }
   if (VAR_13) {
    VAR_21 = FUNC_3(VAR_21);
   }
   if (VAR_9) {
    VAR_21 = FUNC_2(VAR_21);
   }
   FUNC_5("RETR", VAR_21, VAR_20,
        VAR_4 == VAR_2 ? "wb" : "w",
        VAR_21 != VAR_20 || !VAR_6, 0);
   if (!VAR_11 && VAR_5) {
    VAR_19 = VAR_6;
    VAR_6 = 1;
    if (FUNC_1("Continue with","mget")) {
     VAR_11++;
    }
    VAR_6 = VAR_19;
   }
  }
 }
 FUNC_8(VAR_1,VAR_17);
 VAR_11 = 0;
}
