
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {int dummy; } ;
typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(const struct req *VAR_0, const char *VAR_1)
{
 FILE *VAR_2;
 char *VAR_3;
 size_t VAR_4;
 ssize_t VAR_5;
 int VAR_6;
 int VAR_7, VAR_8;

 if ((VAR_2 = FUNC_1(VAR_1, "r")) == ((void*)0)) {
  FUNC_7("<p>You specified an invalid manual file.</p>");
  return;
 }

 FUNC_7("<div class=\"catman\">\n"
      "<pre>");

 VAR_3 = ((void*)0);
 VAR_4 = 0;

 while ((VAR_5 = FUNC_3(&VAR_3, &VAR_4, VAR_2)) != -1) {
  VAR_8 = VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_5 - 1; VAR_6++) {






   if ('\b' == VAR_3[VAR_6] || '\n' == VAR_3[VAR_6])
    continue;
   if ('\b' != VAR_3[VAR_6 + 1]) {
    if (VAR_7)
     FUNC_5("</i>");
    if (VAR_8)
     FUNC_5("</b>");
    VAR_7 = VAR_8 = 0;
    FUNC_4(VAR_3[VAR_6]);
    continue;
   } else if (VAR_6 + 2 >= VAR_5)
    continue;



   if ('_' == VAR_3[VAR_6]) {
    if (VAR_8)
     FUNC_5("</b>");
    if ( ! VAR_7)
     FUNC_5("<i>");
    VAR_8 = 0;
    VAR_7 = 1;
    VAR_6 += 2;
    FUNC_4(VAR_3[VAR_6]);
    continue;
   }






   if (('+' == VAR_3[VAR_6] && 'o' == VAR_3[VAR_6 + 2]) ||
     ('o' == VAR_3[VAR_6] && '+' == VAR_3[VAR_6 + 2]) ||
     ('|' == VAR_3[VAR_6] && '=' == VAR_3[VAR_6 + 2]) ||
     ('=' == VAR_3[VAR_6] && '|' == VAR_3[VAR_6 + 2]) ||
     ('*' == VAR_3[VAR_6] && '=' == VAR_3[VAR_6 + 2]) ||
     ('=' == VAR_3[VAR_6] && '*' == VAR_3[VAR_6 + 2]) ||
     ('*' == VAR_3[VAR_6] && '|' == VAR_3[VAR_6 + 2]) ||
     ('|' == VAR_3[VAR_6] && '*' == VAR_3[VAR_6 + 2])) {
    if (VAR_7)
     FUNC_5("</i>");
    if (VAR_8)
     FUNC_5("</b>");
    VAR_7 = VAR_8 = 0;
    FUNC_6('*');
    VAR_6 += 2;
    continue;
   } else if (('|' == VAR_3[VAR_6] && '-' == VAR_3[VAR_6 + 2]) ||
     ('-' == VAR_3[VAR_6] && '|' == VAR_3[VAR_6 + 1]) ||
     ('+' == VAR_3[VAR_6] && '-' == VAR_3[VAR_6 + 1]) ||
     ('-' == VAR_3[VAR_6] && '+' == VAR_3[VAR_6 + 1]) ||
     ('+' == VAR_3[VAR_6] && '|' == VAR_3[VAR_6 + 1]) ||
     ('|' == VAR_3[VAR_6] && '+' == VAR_3[VAR_6 + 1])) {
    if (VAR_7)
     FUNC_5("</i>");
    if (VAR_8)
     FUNC_5("</b>");
    VAR_7 = VAR_8 = 0;
    FUNC_6('+');
    VAR_6 += 2;
    continue;
   }



   if (VAR_7)
    FUNC_5("</i>");
   if ( ! VAR_8)
    FUNC_5("<b>");
   VAR_8 = 1;
   VAR_7 = 0;
   VAR_6 += 2;
   FUNC_4(VAR_3[VAR_6]);
  }






  if (VAR_7)
   FUNC_5("</i>");
  if (VAR_8)
   FUNC_5("</b>");

  if (VAR_6 == VAR_5 - 1 && VAR_3[VAR_6] != '\n')
   FUNC_4(VAR_3[VAR_6]);

  FUNC_6('\n');
 }
 FUNC_2(VAR_3);

 FUNC_7("</pre>\n"
      "</div>");

 FUNC_0(VAR_2);
}
