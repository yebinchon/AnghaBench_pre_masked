
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,int ) ;
 int VAR_1 ;
 char* FUNC_1 (char const*,int **) ;
 int FUNC_2 (scalar_t__,char*,char*) ;
 int FUNC_3 (char*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (char*) ;

FILE *FUNC_7(const char *VAR_3, char **VAR_4)
{
 FILE *VAR_5;
 char *VAR_6;

 if (FUNC_4(VAR_3, "-")) {
  VAR_5 = VAR_2;
  VAR_6 = FUNC_6("<stdin>");
 } else {
  VAR_6 = FUNC_1(VAR_3, &VAR_5);
  if (!VAR_5)
   FUNC_0("Couldn't open \"%s\": %s\n", VAR_3,
       FUNC_5(VAR_1));
 }

 if (VAR_0)
  FUNC_2(VAR_0, " %s", VAR_6);

 if (VAR_4)
  *VAR_4 = VAR_6;
 else
  FUNC_3(VAR_6);

 return VAR_5;
}
