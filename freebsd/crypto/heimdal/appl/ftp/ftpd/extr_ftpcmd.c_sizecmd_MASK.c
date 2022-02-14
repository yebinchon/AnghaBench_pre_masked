
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_size; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*,struct stat*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_9(char *VAR_2)
{
 switch (VAR_1) {
 case 128:
 case 129: {
  struct stat VAR_3;
  if (FUNC_8(VAR_2, &VAR_3) < 0 || !FUNC_0(VAR_3.st_mode))
   FUNC_7(550, "%s: not a plain file.", VAR_2);
  else
   FUNC_7(213, "%lu", (unsigned long)VAR_3.st_size);
  break;
 }
 case 130: {
  FILE *VAR_4;
  int VAR_5;
  size_t VAR_6;
  struct stat VAR_7;
  VAR_4 = FUNC_3(VAR_2, "r");
  if (VAR_4 == ((void*)0)) {
   FUNC_6(550, VAR_2);
   return;
  }
  if (FUNC_4(FUNC_2(VAR_4), &VAR_7) < 0 || !FUNC_0(VAR_7.st_mode)) {
   FUNC_7(550, "%s: not a plain file.", VAR_2);
   FUNC_1(VAR_4);
   return;
  }

  VAR_6 = 0;
  while((VAR_5=FUNC_5(VAR_4)) != VAR_0) {
   if (VAR_5 == '\n')
    VAR_6++;
   VAR_6++;
  }
  FUNC_1(VAR_4);

  FUNC_7(213, "%lu", (unsigned long)VAR_6);
  break;
 }
 default:
  FUNC_7(504, "SIZE not implemented for Type %c.", "?AEIL"[VAR_1]);
 }
}
