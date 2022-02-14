
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum vs_opt { ____Placeholder_vs_opt } vs_opt ;





 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (int ,char*,char*,...) ;
 char* FUNC_3 (char*,char) ;

char *
FUNC_4(char *VAR_1, char *VAR_2)
{





  char *VAR_3 = VAR_1;
  char *VAR_4 = VAR_1;
  char *VAR_5;




  while (*(VAR_5 = FUNC_1(&VAR_3))) {
    enum vs_opt VAR_6 = 128;
    char *VAR_7 = FUNC_3(VAR_5, '=');

    if (!VAR_7 || VAR_7[1] == '\0' || VAR_7 == VAR_5) {



      FUNC_2(VAR_0, "key %s: No option or assignment in \"%s\"", VAR_2, VAR_5);
      return VAR_3;
    }






    if (*(VAR_7-1) == '!') {
      VAR_6 = 129;
    } else if (*(VAR_7-1) == ':') {
      VAR_6 = 128;
    } else if (VAR_7[1] == '=') {
      VAR_6 = 130;
    } else if (VAR_7[1] == '!') {
      VAR_6 = 129;
    }
    switch (VAR_6) {
    case 130:
    case 129:

      FUNC_2(VAR_0, "skipping selector to \"%s\"", VAR_3);

      VAR_4 = VAR_3;
      break;

    case 128:

      FUNC_0("found first assignment past selectors \"%s\"", VAR_3);
      return VAR_4;
    }
  }


  return VAR_4;
}
