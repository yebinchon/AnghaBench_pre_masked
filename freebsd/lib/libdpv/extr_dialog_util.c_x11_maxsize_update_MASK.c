
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct winsize {int dummy; } ;
struct TYPE_3__ {unsigned short ws_row; unsigned short ws_col; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int,int *) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (void*,char,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,char*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (char*,int ,int ,char const**) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12(void)
{
 FILE *VAR_7 = ((void*)0);
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 char VAR_11[VAR_1];
 char VAR_12[VAR_1];

 if (VAR_6 == ((void*)0)) {
  if ((VAR_6 = FUNC_3(sizeof(struct winsize))) == ((void*)0))
   FUNC_0(VAR_0, "Out of memory?!");
  FUNC_4((void *)VAR_6, '\0', sizeof(struct winsize));
 }


 FUNC_7(VAR_11, VAR_1, "%s --print-maxsize 2>&1", VAR_5);

 FUNC_1(VAR_2);

 if ((VAR_7 = FUNC_6(VAR_11, "r")) == ((void*)0)) {
  if (VAR_4)
   FUNC_11("WARNING! Command `%s' failed", VAR_11);
  return;
 }


 if ((FUNC_2(VAR_12, VAR_1, VAR_7) == ((void*)0)) || (FUNC_5(VAR_7) < 0))
  return;


 if (FUNC_9(VAR_12, "Xdialog: Error", 14) == 0)
  return;


 if ((VAR_10 = FUNC_8(VAR_12, ' ')) == ((void*)0))
  return;
 if ((VAR_8 = FUNC_8(VAR_10, ',')) != ((void*)0)) {

  *(VAR_8++) = '\0';
  if ((VAR_9 = FUNC_8(VAR_8, '\n')) != ((void*)0))
   *VAR_9 = '\0';
 }


 VAR_6->ws_row = (unsigned short)FUNC_10(
     VAR_10, 0, VAR_3, (const char **)((void*)0));
 VAR_6->ws_col = (unsigned short)FUNC_10(
     VAR_8, 0, VAR_3, (const char **)((void*)0));
}
