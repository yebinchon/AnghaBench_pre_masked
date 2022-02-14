
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {char** vec; } ;
struct Strbuf {int dummy; } ;
typedef char Char ;


 int FUNC_0 (struct Strbuf*,char) ;
 int FUNC_1 (char const*) ;
 char const VAR_0 ;
 struct varent* FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;

int
FUNC_7(struct Strbuf *VAR_1, const Char **VAR_2, Char VAR_3)
{
    struct varent *VAR_4;
    const Char *VAR_5 = *VAR_2;
    Char *VAR_6, *VAR_7;
    size_t VAR_8;
    int VAR_9 = 0;


    VAR_6 = FUNC_6((FUNC_1(VAR_5) + 1) * sizeof (*VAR_6));
    for (VAR_8 = 0; ; VAR_8++) {
 VAR_6[VAR_8] = *++VAR_5 & VAR_0;
 if (VAR_8 == 0 && VAR_6[VAR_8] == '{') {
     VAR_9 = 1;
     VAR_6[VAR_8] = *++VAR_5 & VAR_0;
 }
 if (!FUNC_3(VAR_6[VAR_8]) && VAR_6[VAR_8] != '_') {

     VAR_6[VAR_8] = '\0';
     break;
 }
    }
    if (VAR_9 && (*VAR_5 & VAR_0) == '}')
 VAR_5++;

    VAR_4 = FUNC_2(VAR_6);
    if (VAR_4 && VAR_4->vec) {
 for (VAR_8 = 0; VAR_4->vec[VAR_8] != ((void*)0); VAR_8++) {
     for (VAR_7 = VAR_4->vec[VAR_8]; *VAR_7; VAR_7++)
  if (*VAR_7 != '\n' && *VAR_7 != '\r')
      FUNC_0(VAR_1, *VAR_7 | VAR_3);
     if (VAR_4->vec[VAR_8+1])
  FUNC_0(VAR_1, ' ' | VAR_3);
 }
    }
    else {
 VAR_7 = (!VAR_4) ? FUNC_4(VAR_6) : ((void*)0);
 if (VAR_7) {
     for (; *VAR_7; VAR_7++)
  if (*VAR_7 != '\n' && *VAR_7 != '\r')
      FUNC_0(VAR_1, *VAR_7 | VAR_3);
 } else {
     *VAR_2 = VAR_5;
     FUNC_5(VAR_6);
     return 0;
 }
    }

    *VAR_2 = VAR_5;
    FUNC_5(VAR_6);
    return 1;
}
