
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int * LstNode ;
typedef scalar_t__ Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int *,char*,int ,int ) ;
 char* FUNC_5 (char*,int ,char**) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*,char*) ;
 int VAR_7 ;
 int FUNC_9 (char*,int,char*,char*) ;
 scalar_t__ FUNC_10 (char*,char) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_11(void)
{
 LstNode VAR_9;
 Boolean VAR_10;

 if (VAR_6 == VAR_0)
  VAR_10 = VAR_2;
 else if (VAR_5)
  VAR_10 = VAR_1;
 else
  VAR_10 = FUNC_7(".MAKE.EXPAND_VARIABLES", VAR_1);

 for (VAR_9 = FUNC_2(VAR_8); VAR_9 != ((void*)0);
     VAR_9 = FUNC_3(VAR_9)) {
  char *VAR_11 = (char *)FUNC_1(VAR_9);
  char *VAR_12;
  char *VAR_13;

  if (FUNC_10(VAR_11, '$')) {
   VAR_12 = VAR_13 = FUNC_4(((void*)0), VAR_11, VAR_4,
       VAR_3);
  } else if (VAR_10) {
   char VAR_14[128];
   int VAR_15 = FUNC_9(VAR_14, sizeof(VAR_14), "${%s}", VAR_11);

   if (VAR_15 >= (int)sizeof(VAR_14))
    FUNC_0("%s: variable name too big: %s",
        VAR_7, VAR_11);
   VAR_12 = VAR_13 = FUNC_4(((void*)0), VAR_14, VAR_4,
       VAR_3);
  } else {
   VAR_12 = FUNC_5(VAR_11, VAR_4, &VAR_13);
  }
  FUNC_8("%s\n", VAR_12 ? VAR_12 : "");
  FUNC_6(VAR_13);
 }
}
