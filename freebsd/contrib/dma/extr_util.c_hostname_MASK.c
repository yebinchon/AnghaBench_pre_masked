
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int name ;
struct TYPE_2__ {char* mailname; } ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,int,char*,...) ;
 scalar_t__ FUNC_6 (char*,char) ;

const char *
FUNC_7(void)
{



 static char VAR_2[255 +1];
 static int VAR_3 = 0;
 char *VAR_4;

 if (VAR_3)
  return (VAR_2);

 if (VAR_1.mailname == ((void*)0) || !*VAR_1.mailname)
  goto local;

 if (VAR_1.mailname[0] == '/') {




  FILE *VAR_5;

  VAR_5 = FUNC_2(VAR_1.mailname, "r");
  if (VAR_5 == ((void*)0))
   goto local;

  VAR_4 = FUNC_1(VAR_2, sizeof(VAR_2), VAR_5);
  FUNC_0(VAR_5);
  if (VAR_4 == ((void*)0))
   goto local;

  for (VAR_4 = VAR_2; *VAR_4 != 0 && (FUNC_4(*VAR_4) || FUNC_6("_.-", *VAR_4)); ++VAR_4)
                ;
  *VAR_4 = 0;

  if (!*VAR_2)
   goto local;

  VAR_3 = 1;
  return (VAR_2);
 } else {
  FUNC_5(VAR_2, sizeof(VAR_2), "%s", VAR_1.mailname);
  VAR_3 = 1;
  return (VAR_2);
 }

local:
 if (FUNC_3(VAR_2, sizeof(VAR_2)) != 0)
  *VAR_2 = 0;




 VAR_2[sizeof(VAR_2) - 1] = 0;

 for (VAR_4 = VAR_2; *VAR_4 != 0 && (FUNC_4(*VAR_4) || FUNC_6("_.-", *VAR_4)); ++VAR_4)
               ;
 *VAR_4 = 0;

 if (!*VAR_2)
  FUNC_5(VAR_2, sizeof(VAR_2), "unknown-hostname");

 VAR_3 = 1;
 return (VAR_2);
}
