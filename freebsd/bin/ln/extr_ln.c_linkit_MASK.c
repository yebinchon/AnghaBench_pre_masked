
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuf ;
struct stat {int st_mode; } ;
typedef scalar_t__ ssize_t ;
typedef int path ;
typedef int bbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (int ,char const*,int ,char const*,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (char*,char const*,int,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_11 (char*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_12 (char const*,struct stat*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (char*,char const*,int) ;
 scalar_t__ FUNC_14 (char const*,struct stat*) ;
 scalar_t__ FUNC_15 (char const*,char const*) ;
 scalar_t__ FUNC_16 (char const*) ;
 scalar_t__ VAR_16 ;
 int FUNC_17 (char*,char const*) ;
 int FUNC_18 (char*,char const*,char const*) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int
FUNC_19(const char *VAR_18, const char *VAR_19, int VAR_20)
{
 struct stat VAR_21;
 const char *VAR_22;
 int VAR_23, VAR_24, VAR_25;
 char VAR_26[VAR_6];
 char VAR_27[VAR_6];
 char VAR_28[VAR_6];

 if (!VAR_13) {

  if ((VAR_7 ? FUNC_7 : FUNC_12)(VAR_18, &VAR_21)) {
   FUNC_17("%s", VAR_18);
   return (1);
  }

  if (FUNC_0(VAR_21.st_mode)) {
   VAR_8 = VAR_2;
   FUNC_17("%s", VAR_18);
   return (1);
  }
 }





 if (!VAR_5 && (VAR_20 ||
     (FUNC_7(VAR_19, &VAR_21) == 0 && FUNC_0(VAR_21.st_mode)) ||
     (!VAR_10 && FUNC_12(VAR_19, &VAR_21) == 0 && FUNC_0(VAR_21.st_mode)))) {
  if (FUNC_13(VAR_28, VAR_18, sizeof(VAR_28)) >= sizeof(VAR_28) ||
      (VAR_22 = FUNC_1(VAR_28)) == ((void*)0) ||
      FUNC_11(VAR_26, sizeof(VAR_26), "%s/%s", VAR_19, VAR_22) >=
      (ssize_t)sizeof(VAR_26)) {
   VAR_8 = VAR_3;
   FUNC_17("%s", VAR_18);
   return (1);
  }
  VAR_19 = VAR_26;
 }





 if (VAR_13 && VAR_17) {
  if (*VAR_18 == '/') {

   if (FUNC_12(VAR_18, &VAR_21) != 0)
     FUNC_17("warning: %s inaccessible", VAR_18);
  } else {





   FUNC_13(VAR_28, VAR_19, sizeof(VAR_28));
   VAR_22 = FUNC_2(VAR_28);
   if (VAR_22 != ((void*)0)) {
    (void)FUNC_11(VAR_27, sizeof(VAR_27), "%s/%s",
      VAR_22, VAR_18);
    if (FUNC_12(VAR_27, &VAR_21) != 0)
     FUNC_17("warning: %s", VAR_18);
   }
  }
 }




 VAR_24 = !FUNC_7(VAR_19, &VAR_21);
 if (VAR_24) {
  if (!VAR_13 && FUNC_10(VAR_18, VAR_19)) {
   FUNC_18("%s and %s are the same directory entry",
       VAR_18, VAR_19);
   return (1);
  }
 }




 if (VAR_9 && VAR_24) {
  if (VAR_5 && FUNC_0(VAR_21.st_mode)) {
   if (FUNC_9(VAR_19)) {
    FUNC_17("%s", VAR_19);
    return (1);
   }
  } else if (FUNC_16(VAR_19)) {
   FUNC_17("%s", VAR_19);
   return (1);
  }
 } else if (VAR_11 && VAR_24) {
  FUNC_3(VAR_15);
  FUNC_4(VAR_14, "replace %s? ", VAR_19);

  VAR_25 = VAR_23 = FUNC_5();
  while(VAR_23 != '\n' && VAR_23 != VAR_4)
   VAR_23 = FUNC_5();
  if (VAR_25 != 'y' && VAR_25 != 'Y') {
   FUNC_4(VAR_14, "not replaced\n");
   return (1);
  }

  if (VAR_5 && FUNC_0(VAR_21.st_mode)) {
   if (FUNC_9(VAR_19)) {
    FUNC_17("%s", VAR_19);
    return (1);
   }
  } else if (FUNC_16(VAR_19)) {
   FUNC_17("%s", VAR_19);
   return (1);
  }
 }


 if (VAR_13 ? FUNC_15(VAR_18, VAR_19) :
     FUNC_6(VAR_0, VAR_18, VAR_0, VAR_19,
     VAR_7 ? 0 : VAR_1)) {
  FUNC_17("%s", VAR_19);
  return (1);
 }
 if (VAR_16)
  (void)FUNC_8("%s %c> %s\n", VAR_19, VAR_12, VAR_18);
 return (0);
}
