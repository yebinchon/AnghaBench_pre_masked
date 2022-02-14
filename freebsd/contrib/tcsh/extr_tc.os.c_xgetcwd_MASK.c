
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned long st_ino; int st_dev; } ;
struct dirent {unsigned long d_ino; char* d_name; } ;
typedef int nextpathbuf ;
typedef int DIR ;


 int FUNC_0 (int,int,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (char*,struct stat*) ;
 int * FUNC_6 (char*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,char*,size_t) ;
 char* FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,size_t,int ,char*,...) ;

char *
FUNC_13(char *VAR_3, size_t VAR_4)
{
    DIR *VAR_5;
    struct dirent *VAR_6;

    struct stat VAR_7, VAR_8, VAR_9, VAR_10;
    char VAR_11[VAR_1], VAR_12[VAR_1 * 2];
    char *VAR_13, *VAR_14, *VAR_15;
    int VAR_16 = 0;


    if (FUNC_8("/", &VAR_7) == -1) {
 (void) FUNC_12(VAR_3, VAR_4, FUNC_0(23, 23,
   "getcwd: Cannot stat \"/\" (%s)"),
   FUNC_9(VAR_2));
 return ((void*)0);
    }
    VAR_11[VAR_1 - 1] = '\0';
    VAR_13 = &VAR_11[VAR_1 - 1];
    VAR_12[VAR_1 - 1] = '\0';
    VAR_15 = VAR_14 = &VAR_12[VAR_1 - 1];


    if (FUNC_5(".", &VAR_8) == -1) {
 (void) FUNC_12(VAR_3, VAR_4, FUNC_0(23, 24,
    "getcwd: Cannot stat \".\" (%s)"),
    FUNC_9(VAR_2));
 return ((void*)0);
    }
    VAR_14 = FUNC_11(VAR_14, "../", VAR_14 - VAR_12);


    for (;;) {


 if (VAR_8.st_ino == VAR_7.st_ino &&
     FUNC_1(VAR_8.st_dev, VAR_7.st_dev)) {
     (void) FUNC_10(VAR_3, *VAR_13 != '/' ? "/" : VAR_13, VAR_4);
     VAR_3[VAR_4 - 1] = '\0';
     return VAR_3;
 }


 if (FUNC_8(VAR_14, &VAR_10) == -1) {
     (void) FUNC_12(VAR_3, VAR_4, FUNC_0(23, 25,
        "getcwd: Cannot stat directory \"%s\" (%s)"),
        VAR_14, FUNC_9(VAR_2));
     return ((void*)0);
 }
 if ((VAR_5 = FUNC_6(VAR_14)) == ((void*)0)) {
     (void) FUNC_12(VAR_3, VAR_4, FUNC_0(23, 26,
        "getcwd: Cannot open directory \"%s\" (%s)"),
        VAR_14, FUNC_9(VAR_2));
     return ((void*)0);
 }


 if (FUNC_1(VAR_10.st_dev, VAR_8.st_dev)) {

     for (VAR_6 = FUNC_7(VAR_5); VAR_6 != ((void*)0); VAR_6 = FUNC_7(VAR_5)) {




  if (VAR_6->d_ino == VAR_8.st_ino)
      break;

     }
 }
 else {




     for (VAR_6 = FUNC_7(VAR_5); VAR_6 != ((void*)0); VAR_6 = FUNC_7(VAR_5)) {
  if (FUNC_2(VAR_6->d_name) || FUNC_3(VAR_6->d_name))
      continue;
  (void)FUNC_10(VAR_15, VAR_6->d_name,
      (size_t) (&VAR_12[sizeof(VAR_12) - 1] - VAR_15));
  if (FUNC_5(VAR_14, &VAR_9) == -1) {






      if (VAR_16 == 0)
   VAR_16 = VAR_2;
      continue;
  }

  if (VAR_9.st_ino == VAR_8.st_ino &&
      FUNC_1(VAR_9.st_dev, VAR_8.st_dev))
      break;
     }
 }
 if (VAR_6 == ((void*)0)) {
     (void) FUNC_12(VAR_3, VAR_4, FUNC_0(23, 27,
        "getcwd: Cannot find \".\" in \"..\" (%s)"),
        FUNC_9(VAR_16 ? VAR_16 : VAR_0));
     FUNC_4(VAR_5);
     return ((void*)0);
 }
 else
     VAR_16 = 0;
 VAR_8 = VAR_10;
 VAR_13 = FUNC_11(VAR_13, VAR_6->d_name, VAR_13 - VAR_11);
 VAR_13 = FUNC_11(VAR_13, "/", VAR_13 - VAR_11);
 VAR_14 = FUNC_11(VAR_14, "../", VAR_14 - VAR_12);
 *VAR_15 = '\0';
 FUNC_4(VAR_5);
    }
}
