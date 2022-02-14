
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pw_name; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,char*,...) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,char*,int*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int,char**) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;

void
FUNC_12(char *VAR_6, int VAR_7, char **VAR_8)
{
 int VAR_9;
 char *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15;

 *VAR_6++ = 0;
 if (*VAR_6 == 0)
  VAR_6 = ".";

 if ((VAR_14 = FUNC_9(VAR_8[VAR_7 - 1], '@')) != ((void*)0)) {

  *VAR_14++ = 0;
  VAR_15 = VAR_8[VAR_7 - 1];
  if (*VAR_15 == '\0')
   VAR_15 = ((void*)0);
  else if (!FUNC_6(VAR_15))
   FUNC_4(1);
 } else {
  VAR_14 = VAR_8[VAR_7 - 1];
  VAR_15 = ((void*)0);
 }
 VAR_14 = FUNC_11(VAR_14);

 for (VAR_9 = 0; VAR_9 < VAR_7 - 1; VAR_9++) {
  VAR_12 = FUNC_1(VAR_8[VAR_9]);
  if (VAR_12) {
   int VAR_16;
   *VAR_12++ = 0;
   if (*VAR_12 == 0)
    VAR_12 = ".";
   VAR_11 = FUNC_9(VAR_8[VAR_9], '@');
   if (VAR_11) {
    *VAR_11++ = '\0';
    VAR_11 = FUNC_11(VAR_11);
    VAR_13 = VAR_8[VAR_9];
    if (*VAR_13 == '\0')
     VAR_13 = VAR_3->pw_name;
    else if (!FUNC_6(VAR_13))
     continue;
    VAR_16 = FUNC_0(&VAR_10,
        "%d%s %s -l %s -n %d %s '%s%s%s:%s'",
      VAR_0, VAR_2 ? " -e" : "",
      VAR_11, VAR_13, VAR_1, VAR_12,
        VAR_15 ? VAR_15 : "", VAR_15 ? "@" : "",
        VAR_14, VAR_6);
   } else {
    VAR_11 = FUNC_11(VAR_8[VAR_9]);
    VAR_16 = FUNC_0(&VAR_10,
      "exec %d%s %s -n %d %s '%s%s%s:%s'",
      VAR_0, VAR_2 ? " -e" : "",
      VAR_11, VAR_1, VAR_12,
      VAR_15 ? VAR_15 : "", VAR_15 ? "@" : "",
      VAR_14, VAR_6);
   }
   if (VAR_16 == -1)
    FUNC_3 (1, "malloc");
   FUNC_10(VAR_10);
   FUNC_5(VAR_10);
  } else {
   if (VAR_4 == -1) {
    if (FUNC_0(&VAR_10, "%d -t %s", VAR_1, VAR_6) == -1)
     FUNC_3 (1, "malloc");
    VAR_11 = VAR_14;

    if (FUNC_2(VAR_11, VAR_15, VAR_10, &VAR_4, &VAR_5) < 0)
     FUNC_4(1);

    if (FUNC_7() < 0)
     FUNC_4(1);
    FUNC_5(VAR_10);
   }
   FUNC_8(1, VAR_8+VAR_9);
  }
 }
}
