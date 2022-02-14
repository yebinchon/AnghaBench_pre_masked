
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {char* word; struct wordent* next; struct wordent* prev; } ;
struct Strbuf {scalar_t__ len; } ;
typedef char Char ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 struct Strbuf VAR_3 ;
 int FUNC_0 (struct Strbuf*,char) ;
 char* FUNC_1 (struct Strbuf*) ;
 char VAR_4 ;

Char *
FUNC_2(const struct wordent *VAR_5, int VAR_6, int VAR_7)
{
    struct Strbuf VAR_8 = VAR_3;
    const struct wordent *VAR_9;
    Char *VAR_10;
    Char VAR_11;
    int VAR_12;

    VAR_11 = '\0';

    if (!VAR_5 || (VAR_9 = VAR_5->next) == VAR_5 || VAR_9 == (VAR_5 = VAR_5->prev))
 return FUNC_1(&VAR_8);

    for (VAR_12 = 0; ; VAR_12++) {
 if ((VAR_12 >= VAR_6) && (VAR_12 <= VAR_7)) {
     for (VAR_10 = VAR_9->word; *VAR_10; VAR_10++) {





  if ((*VAR_10 & VAR_2)
      && (((*VAR_10 & VAR_4) == VAR_0 && VAR_0 != '\0') ||
   (((*VAR_10 & VAR_4) == '\'') && (VAR_11 != '\\')) ||
   (((*VAR_10 & VAR_4) == '\"') && (VAR_11 != '\\')))) {
      FUNC_0(&VAR_8, '\\');
  }






  FUNC_0(&VAR_8, *VAR_10 & VAR_4);

  VAR_11 = *VAR_10;
     }
     FUNC_0(&VAR_8, ' ');
 }
 VAR_9 = VAR_9->next;
 if (VAR_9 == VAR_5)
     break;
    }
    if (VAR_8.len != 0)
 VAR_8.len--;

    return FUNC_1(&VAR_8);
}
