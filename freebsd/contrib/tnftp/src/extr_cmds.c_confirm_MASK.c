
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cline ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int,char const**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (unsigned char) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(const char *VAR_6, const char *VAR_7)
{
 const char *VAR_8;
 char VAR_9[VAR_0];
 const char *VAR_10, *VAR_11;

 if (!VAR_2 || VAR_1)
  return (1);
 if (VAR_7 == ((void*)0)) {
  VAR_10 = "Continue with";
  VAR_11 = VAR_6;
 } else {
  VAR_10 = VAR_6;
  VAR_11 = VAR_7;
 }
 while (1) {
  FUNC_1(VAR_5, "%s %s [anpqy?]? ", VAR_10, VAR_11);
  (void)FUNC_0(VAR_5);
  if (FUNC_3(VAR_4, VAR_9, sizeof(VAR_9), &VAR_8) < 0) {
   VAR_3 = 0;
   FUNC_1(VAR_5, "%s; %s aborted\n", VAR_8, VAR_6);
   return (0);
  }
  switch (FUNC_4((unsigned char)*VAR_9)) {
   case 'a':
    VAR_1 = 1;
    FUNC_1(VAR_5,
        "Prompting off for duration of %s.\n", VAR_6);
    break;
   case 'p':
    VAR_2 = 0;
    FUNC_2("Interactive mode: off.\n", VAR_5);
    break;
   case 'q':
    VAR_3 = 0;
    FUNC_1(VAR_5, "%s aborted.\n", VAR_6);

   case 'n':
    return (0);
   case '?':
    FUNC_1(VAR_5,
        "  confirmation options:\n"
        "\ta  answer `yes' for the duration of %s\n"
        "\tn  answer `no' for this file\n"
        "\tp  turn off `prompt' mode\n"
        "\tq  stop the current %s\n"
        "\ty  answer `yes' for this file\n"
        "\t?  this help list\n",
        VAR_6, VAR_6);
    continue;
  }
  return (1);
 }

}
