
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int tmp ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int,char*,char const*,char*) ;
 int VAR_6 ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int ,char*,char const*,...) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_7, char *VAR_8)
{
 FILE *VAR_9;
 int VAR_10;
 char VAR_11[VAR_4];

 VAR_10 = FUNC_6(VAR_11, sizeof(VAR_11), "%s/%s", VAR_7, VAR_8);
 if (VAR_10 < 0 || (u_int)VAR_10 >= sizeof(VAR_11)) {
  FUNC_9(VAR_2, "provided banned directory line too long (%s)",
      VAR_7);
  return (0);
 }
 if ((VAR_9 = FUNC_4(VAR_11, "r")) == ((void*)0)) {
  if (VAR_5 == VAR_0) {




   return (1);
  } else {





   FUNC_9(VAR_2, "cannot open banned file %s (%s)",
       VAR_11, FUNC_7(VAR_5));
   return (0);
  }
 } else {




  FUNC_9(VAR_3, "denied access to %s: %s exists",
      VAR_8, VAR_11);


  FUNC_8(VAR_11, "\n\n-**- Sorry, you have been banned! -**-\n\n",
      sizeof(VAR_11));
  while (FUNC_5(VAR_11, VAR_6) != VAR_1 && !FUNC_1(VAR_9)) {
   if (FUNC_3(VAR_11, sizeof(VAR_11), VAR_9) == ((void*)0)) {
    FUNC_2(VAR_6);
    FUNC_0(VAR_9);
    return (0);
   }
  }
  FUNC_0(VAR_9);
 }
 FUNC_2(VAR_6);
 return (0);
}
