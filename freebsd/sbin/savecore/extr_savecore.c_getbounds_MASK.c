
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,int *,int) ;
 scalar_t__ VAR_6 ;
 int * FUNC_7 (int,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_7)
{
 FILE *VAR_8;
 char VAR_9[6];
 int VAR_10;





 if (VAR_4)
  return (0);

 VAR_10 = 0;

 if ((VAR_8 = FUNC_7(VAR_7, "bounds", VAR_3, "r")) == ((void*)0)) {
  if (VAR_6)
   FUNC_4("unable to open bounds file, using 0\n");
  return (VAR_10);
 }
 if (FUNC_2(VAR_9, sizeof(VAR_9), VAR_8) == ((void*)0)) {
  if (FUNC_1(VAR_8))
   FUNC_3(VAR_2, "bounds file is empty, using 0");
  else
   FUNC_3(VAR_2, "bounds file: %s", FUNC_5(VAR_5));
  FUNC_0(VAR_8);
  return (VAR_10);
 }

 VAR_5 = 0;
 VAR_10 = (int)FUNC_6(VAR_9, ((void*)0), 10);
 if (VAR_10 == 0 && (VAR_5 == VAR_0 || VAR_5 == VAR_1))
  FUNC_3(VAR_2, "invalid value found in bounds, using 0");
 FUNC_0(VAR_8);
 return (VAR_10);
}
