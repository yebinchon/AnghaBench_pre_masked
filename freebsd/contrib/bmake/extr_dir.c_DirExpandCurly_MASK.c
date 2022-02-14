
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Lst ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_0, const char *VAR_1, Lst VAR_2, Lst VAR_3)
{
    const char *VAR_4;
    const char *VAR_5;
    const char *VAR_6;
    int VAR_7;


    char *VAR_8;
    int VAR_9;


    char *VAR_10;


    VAR_6 = VAR_1+1;





    for (VAR_4 = VAR_6, VAR_7 = 0; *VAR_4 != '\0'; VAR_4++) {
 if (*VAR_4 == '{') {
     VAR_7++;
 } else if ((*VAR_4 == '}') && (VAR_7-- == 0)) {
     break;
 }
    }
    if (*VAR_4 == '\0') {
 FUNC_1("Unterminated {} clause \"%s\"", VAR_6);
 return;
    } else {
 VAR_4++;
    }
    VAR_9 = VAR_1 - VAR_0 + FUNC_6(VAR_4);

    for (VAR_5 = VAR_6; VAR_5 < VAR_4; VAR_5++) {



 VAR_7 = 0;
 while (*VAR_5 != ',') {
     if (*VAR_5 == '{') {
  VAR_7++;
     } else if ((*VAR_5 == '}') && (VAR_7-- <= 0)) {
  break;
     }
     VAR_5++;
 }



 VAR_8 = FUNC_3(VAR_9 + VAR_5 - VAR_6 + 1);
 if (VAR_1 != VAR_0) {
     FUNC_7(VAR_8, VAR_0, VAR_1-VAR_0);
 }
 if (VAR_5 != VAR_6) {
     FUNC_7(&VAR_8[VAR_1-VAR_0], VAR_6, VAR_5-VAR_6);
 }
 FUNC_5(&VAR_8[(VAR_1-VAR_0)+(VAR_5-VAR_6)], VAR_4);






 for (VAR_10 = VAR_8; *VAR_10 != '\0'; VAR_10++) {
     switch(*VAR_10) {
     case '*':
     case '?':
     case '{':
     case '[':
  FUNC_0(VAR_8, VAR_2, VAR_3);
  goto next;
     }
 }
 if (*VAR_10 == '\0') {




     (void)FUNC_2(VAR_3, VAR_8);
 } else {
 next:
     FUNC_4(VAR_8);
 }
 VAR_6 = VAR_5+1;
    }
}
