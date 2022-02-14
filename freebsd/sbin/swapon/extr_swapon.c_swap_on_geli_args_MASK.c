
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char**,char*,char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,size_t,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char**,char*) ;
 char* FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char const*,char**,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static char *
FUNC_12(const char *VAR_4)
{
 const char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 const char *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 int VAR_19;
 size_t VAR_20;
 u_long VAR_21;


 VAR_5 = VAR_6 = VAR_7 = "";
 VAR_9 = VAR_10 = VAR_11 = VAR_12 = "";


 VAR_13 = " -s ";
 VAR_8 = ((void*)0);

 if (VAR_4 != ((void*)0)) {
  VAR_17 = VAR_18 = FUNC_6(VAR_4);

  while ((VAR_16 = FUNC_7(&VAR_17, ",")) != ((void*)0)) {
   if ((VAR_14 = FUNC_8(VAR_16, "aalgo=")) == VAR_16) {
    VAR_5 = VAR_14 + sizeof("aalgo=") - 1;
    VAR_9 = " -a ";
   } else if ((VAR_14 = FUNC_8(VAR_16, "ealgo=")) == VAR_16) {
    VAR_6 = VAR_14 + sizeof("ealgo=") - 1;
    VAR_10 = " -e ";
   } else if ((VAR_14 = FUNC_8(VAR_16, "keylen=")) == VAR_16) {
    VAR_7 = VAR_14 + sizeof("keylen=") - 1;
    VAR_3 = 0;
    VAR_21 = FUNC_9(VAR_7, &VAR_14, 10);
    if (VAR_3 == 0) {
     if (*VAR_14 != '\0' || VAR_21 > VAR_2)
      VAR_3 = VAR_0;
    }
    if (VAR_3) {
     FUNC_10("Invalid keylen: %s", VAR_7);
     FUNC_2(VAR_18);
     return (((void*)0));
    }
    VAR_11 = " -l ";
   } else if ((VAR_14 = FUNC_8(VAR_16, "sectorsize=")) == VAR_16) {
    VAR_8 = VAR_14 + sizeof("sectorsize=") - 1;
    VAR_3 = 0;
    VAR_21 = FUNC_9(VAR_8, &VAR_14, 10);
    if (VAR_3 == 0) {
     if (*VAR_14 != '\0' || VAR_21 > VAR_2)
      VAR_3 = VAR_0;
    }
    if (VAR_3) {
     FUNC_10("Invalid sectorsize: %s",
         VAR_8);
     FUNC_2(VAR_18);
     return (((void*)0));
    }
   } else if (FUNC_5(VAR_16, "notrim") == 0) {
    if (VAR_1) {
     FUNC_10("Options \"notrim\" and "
         "\"trimonce\" conflict");
     FUNC_2(VAR_18);
     return (((void*)0));
    }
    VAR_12 = " -T ";
   } else if (FUNC_5(VAR_16, "late") == 0) {

   } else if (FUNC_5(VAR_16, "noauto") == 0) {

   } else if (FUNC_5(VAR_16, "sw") == 0) {

   } else if (FUNC_5(VAR_16, "trimonce") == 0) {

   } else {
    FUNC_11("Invalid option: %s", VAR_16);
    FUNC_2(VAR_18);
    return (((void*)0));
   }
  }
 } else
  VAR_18 = ((void*)0);





 if (VAR_8 == ((void*)0)) {

  VAR_19 = FUNC_3();
  VAR_20 = FUNC_4(((void*)0), 0, "%d", VAR_19) + 1;
  VAR_14 = FUNC_0(VAR_20);
  FUNC_4(VAR_14, VAR_20, "%d", VAR_19);
  VAR_8 = VAR_14;
 }

 (void)FUNC_1(&VAR_15, "%s%s%s%s%s%s%s%s%s -d",
     VAR_9, VAR_5, VAR_10, VAR_6, VAR_11, VAR_7, VAR_12,
     VAR_13, VAR_8);

 FUNC_2(VAR_18);
 return (VAR_15);
}
