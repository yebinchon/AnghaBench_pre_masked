
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* text; int used; } ;
struct TYPE_6__ {int term_names; } ;
typedef TYPE_1__ TERMTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (char*,char) ;
 int FUNC_5 (TYPE_2__*,char*,size_t) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static char *
FUNC_6(TERMTYPE *VAR_3, const char *VAR_4, char *VAR_5, int VAR_6)
{
    bool VAR_7 = VAR_0;
    bool VAR_8 = FUNC_2(VAR_5);

    while (*VAR_5 != '\0') {
 switch (*VAR_5) {
 case '\\':
     VAR_7 = VAR_0;
     FUNC_5(&VAR_2, VAR_5++, (size_t) 1);
     break;
 case '%':
     VAR_7 = VAR_1;
     break;
 case '?':
 case 't':
 case 'e':
     if (VAR_7) {
  VAR_7 = VAR_0;
  VAR_2.text[VAR_2.used - 1] = '\n';

  if (*VAR_5 == 'e') {
      FUNC_3(&VAR_2, VAR_6);
      FUNC_5(&VAR_2, "%", (size_t) 1);
      FUNC_5(&VAR_2, VAR_5, (size_t) 1);
      VAR_5++;
      VAR_8 = FUNC_2(VAR_5);
      if (!VAR_8 && *VAR_5 != '\0' && *VAR_5 != '%') {
   FUNC_5(&VAR_2, "\n", (size_t) 1);
   FUNC_3(&VAR_2, VAR_6 + 1);
      }
  } else {
      FUNC_3(&VAR_2, VAR_6 + 1);
      FUNC_5(&VAR_2, "%", (size_t) 1);
      FUNC_5(&VAR_2, VAR_5, (size_t) 1);
      if (*VAR_5++ == '?') {
   VAR_5 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6 + 1);
   if (*VAR_5 != '\0' && *VAR_5 != '%') {
       FUNC_5(&VAR_2, "\n", (size_t) 1);
       FUNC_3(&VAR_2, VAR_6 + 1);
   }
      } else if (VAR_6 == 1) {
   FUNC_1("%s: %%%c without %%? in %s",
        FUNC_0(VAR_3->term_names),
        *VAR_5, VAR_4);
      }
  }
  continue;
     }
     break;
 case ';':
     if (VAR_7) {
  VAR_7 = VAR_0;
  if (VAR_6 > 1) {
      VAR_2.text[VAR_2.used - 1] = '\n';
      FUNC_3(&VAR_2, VAR_6);
      FUNC_5(&VAR_2, "%", (size_t) 1);
      FUNC_5(&VAR_2, VAR_5++, (size_t) 1);
      if (VAR_5[0] == '%'
   && VAR_5[1] != '\0'
   && (FUNC_4("?e;", VAR_5[1])) == 0) {
   VAR_2.text[VAR_2.used++] = '\n';
   FUNC_3(&VAR_2, VAR_6);
      }
      return VAR_5;
  }
  FUNC_1("%s: %%; without %%? in %s",
       FUNC_0(VAR_3->term_names),
       VAR_4);
     }
     break;
 case 'p':
     if (VAR_7 && VAR_8) {
  VAR_2.text[VAR_2.used - 1] = '\n';
  FUNC_3(&VAR_2, VAR_6 + 1);
  FUNC_5(&VAR_2, "%", (size_t) 1);
     }
     VAR_8 = VAR_0;
     VAR_7 = VAR_0;
     break;
 case ' ':
     FUNC_5(&VAR_2, "\\s", (size_t) 2);
     ++VAR_5;
     continue;
 default:
     VAR_7 = VAR_0;
     break;
 }
 FUNC_5(&VAR_2, VAR_5++, (size_t) 1);
    }
    return VAR_5;
}
