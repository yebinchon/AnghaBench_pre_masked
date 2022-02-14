
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char* const*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,size_t*) ;
 int FUNC_3 (char* const) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, char * const VAR_2[], size_t *VAR_3,
    int *VAR_4, int *VAR_5, int *VAR_6) {
 int VAR_7;
 size_t VAR_8;

 while ((VAR_7 = FUNC_1(VAR_1, VAR_2, "nEh?vl:")) != -1) {
  switch (VAR_7) {
   default:
    FUNC_3(VAR_2[0]);
    FUNC_0(1);
    break;
   case 'h' :
   case '?' :
    FUNC_3(VAR_2[0]);
    FUNC_0(0);
    break;
   case 'l' :
    FUNC_2(VAR_0, "%zu", &VAR_8);
    *VAR_3 = VAR_8 + 1;
    break;
   case 'n' :
    *VAR_4 = 1;
    break;
   case 'E' :
    *VAR_5 = 1;
    break;
   case 'v' :
    *VAR_6 = 1;
    break;
  }
 }
}
