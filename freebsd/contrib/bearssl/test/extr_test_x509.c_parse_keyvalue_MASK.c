
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HT ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 char* FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int VAR_0 ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t) ;

__attribute__((used)) static int
FUNC_9(HT *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_2 = FUNC_2(VAR_0);
 VAR_6 = FUNC_3(VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 ++) {
  if (!FUNC_4(VAR_2[VAR_5])) {
   break;
  }
 }
 if (VAR_5 == 0) {
  return -1;
 }
 VAR_3 = FUNC_8(VAR_5 + 1);
 FUNC_6(VAR_3, VAR_2, VAR_5);
 VAR_3[VAR_5] = 0;
 if (FUNC_0(VAR_1, VAR_3) != ((void*)0)) {
  FUNC_7(VAR_3);
  return -1;
 }
 while (VAR_5 < VAR_6 && FUNC_5(VAR_2[VAR_5])) {
  VAR_5 ++;
 }
 if (VAR_5 >= VAR_6 || VAR_2[VAR_5] != '=') {
  FUNC_7(VAR_3);
  return -1;
 }
 VAR_5 ++;
 while (VAR_5 < VAR_6 && FUNC_5(VAR_2[VAR_5])) {
  VAR_5 ++;
 }
 VAR_4 = FUNC_8(VAR_6 - VAR_5 + 1);
 FUNC_6(VAR_4, VAR_2 + VAR_5, VAR_6 - VAR_5);
 VAR_4[VAR_6 - VAR_5] = 0;
 FUNC_1(VAR_1, VAR_3, VAR_4);
 FUNC_7(VAR_3);
 return 0;
}
