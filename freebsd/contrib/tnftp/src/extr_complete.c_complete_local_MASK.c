
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct dirent {char* d_name; size_t d_namlen; } ;
typedef int path ;
typedef int dir ;
struct TYPE_6__ {char** sl_str; } ;
typedef TYPE_1__ StringList ;
typedef int DIR ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 unsigned char FUNC_2 (char*,int,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_6 () ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int * FUNC_9 (char*) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,char*,int) ;
 size_t FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,char*,size_t) ;
 char* FUNC_18 (char*,char) ;

__attribute__((used)) static unsigned char
FUNC_19(char *VAR_4, int VAR_5)
{
 StringList *VAR_6;
 char VAR_7[VAR_2];
 char *VAR_8;
 DIR *VAR_9;
 struct dirent *VAR_10;
 unsigned char VAR_11;
 size_t VAR_12;

 if ((VAR_8 = FUNC_18(VAR_4, '/')) == ((void*)0)) {
  VAR_7[0] = '.';
  VAR_7[1] = '\0';
  VAR_8 = VAR_4;
 } else {
  if (VAR_8 == VAR_4) {
   VAR_7[0] = '/';
   VAR_7[1] = '\0';
  } else
   (void)FUNC_15(VAR_7, VAR_4, VAR_8 - VAR_4 + 1);
  VAR_8++;
 }
 if (VAR_7[0] == '~') {
  char *VAR_13;

  if ((VAR_13 = FUNC_8(VAR_7)) == ((void*)0))
   return (VAR_0);
  (void)FUNC_15(VAR_7, VAR_13, sizeof(VAR_7));
  FUNC_4(VAR_13);
 }

 if ((VAR_9 = FUNC_9(VAR_7)) == ((void*)0))
  return (VAR_0);

 VAR_6 = FUNC_6();
 VAR_12 = FUNC_16(VAR_8);

 for (VAR_10 = FUNC_10(VAR_9); VAR_10 != ((void*)0); VAR_10 = FUNC_10(VAR_9)) {
  if (!FUNC_13(VAR_10->d_name, ".") || !FUNC_13(VAR_10->d_name, ".."))
   continue;





  if (VAR_12 > VAR_10->d_namlen)
   continue;

  if (FUNC_17(VAR_8, VAR_10->d_name, VAR_12) == 0) {
   char *VAR_14;

   VAR_14 = FUNC_7(VAR_10->d_name);
   FUNC_5(VAR_6, VAR_14);
  }
 }
 FUNC_1(VAR_9);

 VAR_11 = FUNC_2(VAR_8, VAR_5, VAR_6);
 if (VAR_11 == VAR_1) {
  struct stat VAR_15;
  char VAR_16[VAR_2];

  (void)FUNC_15(VAR_16, VAR_7, sizeof(VAR_16));
  (void)FUNC_14(VAR_16, "/", sizeof(VAR_16));
  (void)FUNC_14(VAR_16, VAR_6->sl_str[0], sizeof(VAR_16));

  if (FUNC_12(VAR_16, &VAR_15) >= 0) {
   char VAR_17[2] = " ";

   if (FUNC_0(VAR_15.st_mode))
    VAR_17[0] = '/';
   if (FUNC_3(VAR_3, VAR_17) == -1)
    VAR_11 = VAR_0;
  }
 }
 FUNC_11(VAR_6, 1);
 return (VAR_11);
}
