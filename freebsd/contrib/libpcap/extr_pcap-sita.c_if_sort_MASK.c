
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str2 ;
typedef int str1 ;


 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_1, char *VAR_2) {
 char *VAR_3, *VAR_4;
 char VAR_5[VAR_0], VAR_6[VAR_0];
 int VAR_7, VAR_8;
 int VAR_9;

 if ((VAR_3 = FUNC_0(VAR_1, '_'))) {
  VAR_7 = VAR_3 - VAR_1;
  VAR_3++;
 } else {
  VAR_7 = FUNC_2(VAR_1);
  VAR_3 = 0;
 }
 if ((VAR_4 = FUNC_0(VAR_2, '_'))) {
  VAR_8 = VAR_4 - VAR_2;
  VAR_4++;
 } else {
  VAR_8 = FUNC_2(VAR_2);
  VAR_4 = 0;
 }
 FUNC_3(VAR_5, VAR_1, (VAR_7 > sizeof(VAR_5)) ? VAR_7 : sizeof(VAR_5)); *(VAR_5 + VAR_7) = 0;
 FUNC_3(VAR_6, VAR_2, (VAR_8 > sizeof(VAR_6)) ? VAR_8 : sizeof(VAR_6)); *(VAR_6 + VAR_8) = 0;
 VAR_9 = FUNC_1(VAR_5, VAR_6);
 if (VAR_9 != 0) return VAR_9;
 return FUNC_1(VAR_3, VAR_4);
}
