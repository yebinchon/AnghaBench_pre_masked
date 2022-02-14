
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 char* FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*,size_t) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_0,
    char *VAR_1, size_t VAR_2,
    size_t VAR_3, int VAR_4)
{
 char VAR_5[256];
 char *VAR_6;
 char *VAR_7;
 FILE *VAR_8;




 VAR_8 = FUNC_3(VAR_0, "r");
 if (VAR_8 == ((void*)0)) {
  return;
 }

 if (VAR_4 == 0) {
  FUNC_1(VAR_1, 0, VAR_2);
 }
 while ((VAR_6 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_8)) != ((void*)0)) {
  if ((VAR_2 - FUNC_6(VAR_1)) < (VAR_3 + 1)) {
   break;
  }

  VAR_7 = FUNC_4(VAR_6, '\n');
  *VAR_7 = '\0';
  FUNC_5(VAR_1, VAR_6, VAR_2);
  FUNC_5(VAR_1, ";", VAR_2);
 }
 FUNC_2(VAR_8);
}
