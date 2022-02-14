
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pw_name; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,char*,...) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,char*,int*,int*) ;
 int FUNC_4 (int,char*) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int,char**) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*) ;

void
FUNC_10(int VAR_8, char **VAR_9)
{
 int VAR_10;
 char *VAR_11, *VAR_12, *VAR_13, *VAR_14;

 for (VAR_10 = 0; VAR_10 < VAR_8 - 1; VAR_10++) {
  int VAR_15;

  if (!(VAR_13 = FUNC_2(VAR_9[VAR_10]))) {
   VAR_15 = FUNC_0(&VAR_11, "exec %d%s%s %s %s", VAR_0,
       VAR_3 ? " -PR" : "", VAR_4 ? " -p" : "",
       VAR_9[VAR_10], VAR_9[VAR_8 - 1]);
   if (VAR_15 == -1)
    FUNC_4 (1, "malloc");
   if (FUNC_9(VAR_11))
    ++VAR_2;
   FUNC_5(VAR_11);
   continue;
  }
  *VAR_13++ = 0;
  if (*VAR_13 == 0)
   VAR_13 = ".";
  if ((VAR_12 = FUNC_8(VAR_9[VAR_10], '@')) == ((void*)0)) {
   VAR_12 = VAR_9[VAR_10];
   VAR_14 = VAR_5->pw_name;
  } else {
   *VAR_12++ = 0;
   VAR_14 = VAR_9[VAR_10];
   if (*VAR_14 == '\0')
    VAR_14 = VAR_5->pw_name;
   else if (!FUNC_6(VAR_14))
    continue;
  }
  VAR_15 = FUNC_0(&VAR_11, "%d -f %s", VAR_1, VAR_13);
  if (VAR_15 == -1)
   FUNC_4 (1, "malloc");
  if (FUNC_3(VAR_12, VAR_14, VAR_11, &VAR_6, &VAR_7) < 0) {
   FUNC_5(VAR_11);
   ++VAR_2;
   continue;
  }
  FUNC_5(VAR_11);
  FUNC_7(1, VAR_9 + VAR_8 - 1);
  FUNC_1(VAR_6);
  VAR_6 = VAR_7 = -1;
 }
}
