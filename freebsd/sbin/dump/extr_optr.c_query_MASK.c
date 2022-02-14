
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char const* VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_7 ;

int
FUNC_10(const char *VAR_8)
{
 char VAR_9[64];
 int VAR_10, VAR_11;
 FILE *VAR_12;

 if ((VAR_12 = FUNC_5(VAR_2, "r")) == ((void*)0))
  FUNC_7("fopen on %s fails: %s\n", VAR_2, FUNC_9(VAR_4));
 VAR_3 = VAR_8;
 VAR_7 = 0;
 FUNC_1(0);
 VAR_10 = -1;
 VAR_11 = 0;
 do {
  if (FUNC_4(VAR_9, 63, VAR_12) == ((void*)0)) {
   FUNC_2(VAR_12);
   if (++VAR_11 > 30)
    FUNC_7("excessive operator query failures\n");
  } else if (VAR_9[0] == 'y' || VAR_9[0] == 'Y') {
   VAR_10 = 1;
  } else if (VAR_9[0] == 'n' || VAR_9[0] == 'N') {
   VAR_10 = 0;
  } else {
   (void) FUNC_6(VAR_6,
       "  DUMP: \"Yes\" or \"No\"?\n");
   (void) FUNC_6(VAR_6,
       "  DUMP: %s: (\"yes\" or \"no\") ", VAR_8);
  }
 } while (VAR_10 < 0);




 (void) FUNC_0(0);
 if (FUNC_8(VAR_0, VAR_5) == VAR_1)
  FUNC_8(VAR_0, VAR_1);
 (void) FUNC_3(VAR_12);
 return(VAR_10);
}
