
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * list; } ;
typedef TYPE_1__ arglist ;
typedef int alist ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*,int,char*,int*,int*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_1__*,char,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char**,char**,int*,char**) ;
 int FUNC_10 (char*,char**,char**,char**) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int,char**,char*) ;
 int VAR_7 ;
 int FUNC_12 (char**,char*,int ,char*,char*) ;

void
FUNC_13(int VAR_8, char **VAR_9)
{
 char *VAR_10, *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 arglist VAR_14;
 int VAR_15, VAR_16, VAR_17 = -1;

 FUNC_7(&VAR_14, '\0', sizeof(VAR_14));
 VAR_14.list = ((void*)0);

 for (VAR_15 = 0; VAR_15 < VAR_8 - 1; VAR_15++) {
  FUNC_5(VAR_13);
  FUNC_5(VAR_11);
  FUNC_5(VAR_12);
  VAR_16 = FUNC_9(VAR_9[VAR_15], &VAR_13, &VAR_11, &VAR_17, &VAR_12);
  if (VAR_16 == -1) {
   FUNC_4(VAR_7, "%s: invalid uri\n", VAR_9[VAR_15]);
   ++VAR_2;
   continue;
  }
  if (VAR_16 != 0)
   FUNC_10(VAR_9[VAR_15], &VAR_13, &VAR_11, &VAR_12);
  if (VAR_13 != ((void*)0) && !FUNC_8(VAR_13)) {
   ++VAR_2;
   continue;
  }
  if (!VAR_11) {
   FUNC_6(&VAR_14);
   FUNC_0(&VAR_14, "%s", VAR_0);
   if (VAR_3)
    FUNC_0(&VAR_14, "-r");
   if (VAR_4)
    FUNC_0(&VAR_14, "-p");
   FUNC_0(&VAR_14, "--");
   FUNC_0(&VAR_14, "%s", VAR_9[VAR_15]);
   FUNC_0(&VAR_14, "%s", VAR_9[VAR_8-1]);
   if (FUNC_3(&VAR_14))
    ++VAR_2;
   continue;
  }

  FUNC_12(&VAR_10, "%s -f %s%s",
      VAR_1, *VAR_12 == '-' ? "-- " : "", VAR_12);
  if (FUNC_2(VAR_11, VAR_13, VAR_17, VAR_10, &VAR_5, &VAR_6) < 0) {
   FUNC_5(VAR_10);
   ++VAR_2;
   continue;
  }
  FUNC_5(VAR_10);
  FUNC_11(1, VAR_9 + VAR_8 - 1, VAR_12);
  (void) FUNC_1(VAR_5);
  VAR_5 = VAR_6 = -1;
 }
 FUNC_5(VAR_13);
 FUNC_5(VAR_11);
 FUNC_5(VAR_12);
}
