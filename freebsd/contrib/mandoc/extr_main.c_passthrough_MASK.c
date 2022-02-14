
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,size_t*,int *) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (int ,int,int ,char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_12(int VAR_8, int VAR_9)
{
 const char VAR_10[] = "S\bSY\bYN\bNO\bOP\bPS\bSI\bIS\bS";
 const char VAR_11[] = "SYNOPSIS";

 FILE *VAR_12;
 char *VAR_13, *VAR_14;
 size_t VAR_15;
 ssize_t VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_15 = 0;

 if (FUNC_4(VAR_7) == VAR_0) {
  FUNC_8(VAR_2, 0, 0, "%s", FUNC_10(VAR_6));
  goto done;
 }
 if ((VAR_12 = FUNC_2(VAR_8, "r")) == ((void*)0)) {
  FUNC_0(VAR_8);
  FUNC_8(VAR_1, 0, 0, "%s", FUNC_10(VAR_6));
  goto done;
 }

 VAR_18 = VAR_19 = 0;
 while ((VAR_16 = FUNC_6(&VAR_13, &VAR_15, VAR_12)) != -1) {
  VAR_18++;
  VAR_14 = VAR_13;
  if (VAR_9) {
   if (VAR_19) {
    if ( ! FUNC_7((unsigned char)*VAR_14))
     goto done;
    while (FUNC_7((unsigned char)*VAR_14)) {
     VAR_14++;
     VAR_16--;
    }
   } else {
    if (FUNC_9(VAR_14, VAR_10) == 0 ||
        FUNC_9(VAR_14, VAR_11) == 0)
     VAR_19 = 1;
    continue;
   }
  }
  for (; VAR_16 > 0; VAR_16 -= VAR_17) {
   if ((VAR_17 = FUNC_11(VAR_5, VAR_14, VAR_16)) == -1) {
    FUNC_8(VAR_4, 0, 0,
        "%s", FUNC_10(VAR_6));
    goto done;
   }
  }
 }
 if (FUNC_3(VAR_12))
  FUNC_8(VAR_3, VAR_18, 0, "%s", FUNC_10(VAR_6));

done:
 FUNC_5(VAR_13);
 if (VAR_12 != ((void*)0))
  FUNC_1(VAR_12);
}
