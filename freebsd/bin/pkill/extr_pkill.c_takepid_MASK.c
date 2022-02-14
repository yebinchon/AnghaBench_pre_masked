
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (unsigned char) ;
 long FUNC_9 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_8, int VAR_9)
{
 char *VAR_10, VAR_11[VAR_0];
 FILE *VAR_12;
 long VAR_13;

 VAR_12 = FUNC_7(VAR_8, "r");
 if (VAR_12 == ((void*)0))
  FUNC_0(VAR_6, "Cannot open pidfile `%s'", VAR_8);

 if (VAR_9) {




  if (FUNC_6(FUNC_5(VAR_12), VAR_2 | VAR_3) == 0) {
   (void)FUNC_2(VAR_12);
   FUNC_1(VAR_6, "File '%s' can be locked", VAR_8);
  } else {
   if (VAR_7 != VAR_1) {
    FUNC_1(VAR_6,
        "Error while locking file '%s'", VAR_8);
   }
  }
 }

 if (FUNC_4(VAR_11, sizeof(VAR_11), VAR_12) == ((void*)0)) {
  if (FUNC_3(VAR_12)) {
   (void)FUNC_2(VAR_12);
   FUNC_1(VAR_6, "Pidfile `%s' is empty", VAR_8);
  }
  (void)FUNC_2(VAR_12);
  FUNC_0(VAR_6, "Cannot read from pid file `%s'", VAR_8);
 }
 (void)FUNC_2(VAR_12);

 VAR_13 = FUNC_9(VAR_11, &VAR_10, 10);
 if (*VAR_10 != '\0' && !FUNC_8((unsigned char)*VAR_10))
  FUNC_1(VAR_6, "Invalid pid in file `%s'", VAR_8);
 else if (VAR_13 < VAR_5 || VAR_13 > VAR_4)
  FUNC_1(VAR_6, "Invalid pid in file `%s'", VAR_8);
 return (VAR_13);
}
