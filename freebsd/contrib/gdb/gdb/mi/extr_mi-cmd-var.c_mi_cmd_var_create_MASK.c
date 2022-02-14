
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum varobj_type { ____Placeholder_varobj_type } varobj_type ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*,char*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char) ;
 struct cleanup* FUNC_4 (int (*) (char*),...) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,char*,char*) ;
 int VAR_6 ;
 struct varobj* FUNC_10 (char*,char*,int ,int) ;
 char* FUNC_11 () ;
 int FUNC_12 (struct varobj*) ;
 char* FUNC_13 (struct varobj*) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*) ;

enum mi_cmd_result
FUNC_16 (char *VAR_8, char **VAR_9, int VAR_10)
{
  CORE_ADDR VAR_11 = 0;
  struct varobj *VAR_12;
  char *VAR_13;
  char *VAR_14;
  char *VAR_15;
  char *VAR_16;
  struct cleanup *VAR_17;
  enum varobj_type VAR_18;

  if (VAR_10 != 3)
    {



      FUNC_1 ("mi_cmd_var_create: Usage: NAME FRAME EXPRESSION.");
    }

  VAR_13 = FUNC_15 (VAR_9[0]);


  VAR_17 = FUNC_4 (VAR_4, &VAR_13);

  VAR_14 = FUNC_15 (VAR_9[1]);
  VAR_17 = FUNC_4 (FUNC_14, VAR_14);

  VAR_15 = FUNC_15 (VAR_9[2]);

  if (FUNC_6 (VAR_13, "-") == 0)
    {
      FUNC_14 (VAR_13);
      VAR_13 = FUNC_11 ();
    }
  else if (!FUNC_3 (*VAR_13))
    FUNC_1 ("mi_cmd_var_create: name of object must begin with a letter");

  if (FUNC_6 (VAR_14, "*") == 0)
    VAR_18 = VAR_1;
  else if (FUNC_6 (VAR_14, "@") == 0)
    VAR_18 = VAR_2;
  else
    {
      VAR_18 = VAR_3;
      VAR_11 = FUNC_7 (VAR_14);
    }

  if (VAR_7)
    FUNC_2 (VAR_5,
      "Name=\"%s\", Frame=\"%s\" (0x%s), Expression=\"%s\"\n",
   VAR_13, VAR_14, FUNC_5 (VAR_11), VAR_15);

  VAR_12 = FUNC_10 (VAR_13, VAR_15, VAR_11, VAR_18);

  if (VAR_12 == ((void*)0))
    FUNC_1 ("mi_cmd_var_create: unable to create variable object");

  FUNC_9 (VAR_6, "name", VAR_13);
  FUNC_8 (VAR_6, "numchild", FUNC_12 (VAR_12));
  VAR_16 = FUNC_13 (VAR_12);
  if (VAR_16 == ((void*)0))
    FUNC_9 (VAR_6, "type", "");
  else
    {
      FUNC_9 (VAR_6, "type", VAR_16);
      FUNC_14 (VAR_16);
    }

  FUNC_0 (VAR_17);
  return VAR_0;
}
