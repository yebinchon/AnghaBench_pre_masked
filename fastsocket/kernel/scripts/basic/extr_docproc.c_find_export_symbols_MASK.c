
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symfile {int dummy; } ;
typedef int real_filename ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 struct symfile* FUNC_0 (char*) ;
 int FUNC_1 (struct symfile*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (char) ;
 scalar_t__ FUNC_9 (char) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 char* FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15(char * VAR_4)
{
 FILE * VAR_5;
 struct symfile *VAR_6;
 char VAR_7[VAR_0];
 if (FUNC_5(VAR_4) == ((void*)0)) {
  char VAR_8[VAR_1 + 1];
  FUNC_10(VAR_8, 0, sizeof(VAR_8));
  FUNC_13(VAR_8, VAR_2, VAR_1);
  FUNC_13(VAR_8, "/", VAR_1 - FUNC_12(VAR_8));
  FUNC_13(VAR_8, VAR_4,
    VAR_1 - FUNC_12(VAR_8));
  VAR_6 = FUNC_0(VAR_4);
  VAR_5 = FUNC_6(VAR_8, "r");
  if (VAR_5 == ((void*)0))
  {
   FUNC_7(VAR_3, "docproc: ");
   FUNC_11(VAR_8);
   FUNC_2(1);
  }
  while (FUNC_4(VAR_7, VAR_0, VAR_5)) {
   char *VAR_9;
   char *VAR_10;
   if (((VAR_9 = FUNC_14(VAR_7, "EXPORT_SYMBOL_GPL")) != ((void*)0)) ||
                            ((VAR_9 = FUNC_14(VAR_7, "EXPORT_SYMBOL")) != ((void*)0))) {

    while (FUNC_8(*VAR_9) || *VAR_9 == '_')
     VAR_9++;

    while (FUNC_9(*VAR_9))
     VAR_9++;
    if (*VAR_9 != '(')
     continue;
    else
     VAR_9++;
    while (FUNC_9(*VAR_9))
     VAR_9++;
    VAR_10 = VAR_9;
    while (FUNC_8(*VAR_10) || *VAR_10 == '_')
     VAR_10++;
    *VAR_10 = '\0';
    FUNC_1(VAR_6, VAR_9);
   }
  }
  FUNC_3(VAR_5);
 }
}
