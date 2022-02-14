
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,long,char const*,int,char const*,char const*,char const*) ;
 int * VAR_6 ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;

int
FUNC_9(long VAR_7, const char *VAR_8, int VAR_9, const char *VAR_10,
    const char *VAR_11, const char *VAR_12)
{
 FILE *VAR_13;
 char *VAR_14, *VAR_15, *VAR_16;

 if (VAR_7 & VAR_5) {
  if ((VAR_14 = FUNC_4("MSGVERB")) != ((void*)0) && *VAR_14 != '\0' &&
      FUNC_7(VAR_14) <= FUNC_7(VAR_0)) {
   if ((VAR_15 = FUNC_6(VAR_14)) == ((void*)0))
    return (VAR_3);
   else if (FUNC_8(VAR_15) == 0) {
    FUNC_3(VAR_15);
    goto def;
   }
  } else {
def:
   if ((VAR_15 = FUNC_6(VAR_0)) == ((void*)0))
    return (VAR_3);
  }
  VAR_16 = FUNC_5(VAR_15, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_12);
  if (VAR_16 == ((void*)0)) {
   FUNC_3(VAR_15);
   return (VAR_3);
  }
  if (*VAR_16 != '\0')
   FUNC_2(VAR_6, "%s", VAR_16);
  FUNC_3(VAR_15);
  FUNC_3(VAR_16);
 }
 if (VAR_7 & VAR_1) {
  VAR_16 = FUNC_5(VAR_0, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12);
  if (VAR_16 == ((void*)0))
   return (VAR_2);
  if (*VAR_16 != '\0') {
   if ((VAR_13 = FUNC_1("/dev/console", "ae")) == ((void*)0)) {
    FUNC_3(VAR_16);
    return (VAR_2);
   }
   FUNC_2(VAR_13, "%s", VAR_16);
   FUNC_0(VAR_13);
  }
  FUNC_3(VAR_16);
 }
 return (VAR_4);
}
