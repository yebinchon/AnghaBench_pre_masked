
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int longlong_t ;
typedef int buf ;
typedef scalar_t__ boolean_t ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int * FUNC_2 (char const*,char) ;
 int FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_1, const char *VAR_2, const char *VAR_3,
    uint64_t VAR_4, boolean_t VAR_5)
{
 if (VAR_5) {
  if (VAR_3 != ((void*)0)) {
   (void) FUNC_1(VAR_1, "incremental\t%s\t%s",
       VAR_3, VAR_2);
  } else {
   (void) FUNC_1(VAR_1, "full\t%s",
       VAR_2);
  }
 } else {
  if (VAR_3 != ((void*)0)) {
   if (FUNC_2(VAR_3, '@') == ((void*)0) &&
       FUNC_2(VAR_3, '#') == ((void*)0)) {
    (void) FUNC_1(VAR_1, FUNC_0(VAR_0,
        "send from @%s to %s"),
        VAR_3, VAR_2);
   } else {
    (void) FUNC_1(VAR_1, FUNC_0(VAR_0,
        "send from %s to %s"),
        VAR_3, VAR_2);
   }
  } else {
   (void) FUNC_1(VAR_1, FUNC_0(VAR_0,
       "full send of %s"),
       VAR_2);
  }
 }

 if (VAR_5) {
  (void) FUNC_1(VAR_1, "\t%llu",
      (longlong_t)VAR_4);
 } else if (VAR_4 != 0) {
  char VAR_6[16];
  FUNC_3(VAR_4, VAR_6, sizeof (VAR_6));
  (void) FUNC_1(VAR_1, FUNC_0(VAR_0,
      " estimated size is %s"), VAR_6);
 }
 (void) FUNC_1(VAR_1, "\n");
}
