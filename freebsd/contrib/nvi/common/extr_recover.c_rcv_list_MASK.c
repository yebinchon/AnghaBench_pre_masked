
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int st_mtime; } ;
struct dirent {char* d_name; } ;
struct TYPE_10__ {TYPE_1__* gp; } ;
struct TYPE_9__ {char* progname; } ;
typedef TYPE_2__ SCR ;
typedef int FILE ;
typedef int DIR ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct stat*) ;
 int FUNC_10 (TYPE_2__*,int ,char*,char*) ;
 int * FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (char*,char*,...) ;
 int FUNC_14 (TYPE_2__*,char**,char**,int *) ;
 struct dirent* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char*,struct stat*) ;
 int FUNC_17 (char*,char*) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*) ;

int
FUNC_20(SCR *VAR_5)
{
 struct dirent *VAR_6;
 struct stat VAR_7;
 DIR *VAR_8;
 FILE *VAR_9;
 int VAR_10;
 char *VAR_11, *VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16;


 if (FUNC_12(VAR_5, VAR_3, 0))
  return (1);
 VAR_11 = FUNC_0(VAR_5, VAR_3);
 if (FUNC_1(VAR_11) || (VAR_8 = FUNC_11(".")) == ((void*)0)) {
  FUNC_10(VAR_5, VAR_2, VAR_11, "recdir: %s");
  return (1);
 }


 for (VAR_10 = 0; (VAR_6 = FUNC_15(VAR_8)) != ((void*)0);) {
  if (FUNC_18(VAR_6->d_name, "recover.", 8))
   continue;


  if ((VAR_9 = FUNC_7(VAR_6->d_name, "r")) == ((void*)0))
   continue;

  switch (FUNC_5(VAR_5, ((void*)0), FUNC_6(VAR_9), 1)) {
  case 130:







   break;
  case 129:
   break;
  case 128:

   (void)FUNC_4(VAR_9);
   continue;
  }


  for (VAR_12 = ((void*)0), VAR_13 = ((void*)0);
      VAR_12 == ((void*)0) || VAR_13 == ((void*)0);) {
   if ((VAR_16 = FUNC_14(VAR_5, &VAR_14, &VAR_15, VAR_9))) {
    if (VAR_16 == 1)
     FUNC_10(VAR_5, VAR_1, VAR_6->d_name,
         "066|%s: malformed recovery file");
    goto next;
   }
   if (VAR_14 == ((void*)0))
    continue;
   if (!FUNC_17(VAR_14, "file"))
    VAR_12 = VAR_15;
   else if (!FUNC_17(VAR_14, "path"))
    VAR_13 = VAR_15;
   else
    FUNC_8(VAR_15);
  }
  VAR_4 = 0;
  if (FUNC_16(VAR_13, &VAR_7) &&
      VAR_4 == VAR_0) {
   (void)FUNC_19(VAR_6->d_name);
   goto next;
  }


  (void)FUNC_9(FUNC_6(VAR_9), &VAR_7);
  (void)FUNC_13("%.24s: %s\n",
      FUNC_3(&VAR_7.st_mtime), VAR_12);
  VAR_10 = 1;


next: (void)FUNC_4(VAR_9);
  if (VAR_12 != ((void*)0))
   FUNC_8(VAR_12);
  if (VAR_13 != ((void*)0))
   FUNC_8(VAR_13);
 }
 if (VAR_10 == 0)
  (void)FUNC_13("%s: No files to recover\n", VAR_5->gp->progname);
 (void)FUNC_2(VAR_8);
 return (0);
}
