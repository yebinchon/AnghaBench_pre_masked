
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int len; } ;
typedef char eChar ;
typedef int Char ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Strbuf*,int ) ;
 int FUNC_1 (struct Strbuf*) ;
 int VAR_4 ;






 char FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char) ;

__attribute__((used)) static int
FUNC_7(struct Strbuf *VAR_5)
{
    int VAR_6 = 0, VAR_7;
    eChar VAR_8, VAR_9;

    if (VAR_5)
 VAR_5->len = 0;
    VAR_8 = FUNC_2(1);
    VAR_9 = 0;
    do {
 while (VAR_8 == ' ' || VAR_8 == '\t')
     VAR_8 = FUNC_2(1);
 if (VAR_8 == '#')
     do
  VAR_8 = FUNC_2(1);
     while (VAR_8 != VAR_0 && VAR_8 != '\n');
 if (VAR_8 == VAR_0)
     goto past;
 if (VAR_8 == '\n') {
     if (VAR_5)
  break;
     return (0);
 }
 FUNC_6(VAR_8);
 VAR_6 = 1;
 VAR_7 = 1;
 do {
     VAR_8 = FUNC_2(1);
     if (VAR_8 == '\\' && (VAR_8 = FUNC_2(1)) == '\n')
  VAR_8 = ' ';
     if (VAR_8 == '\'' || VAR_8 == '"') {
  if (VAR_9 == 0)
      VAR_9 = VAR_8;
  else if (VAR_9 == VAR_8)
      VAR_9 = 0;
     }
     if (VAR_8 == VAR_0)
  goto past;
     if (VAR_5)
  FUNC_0(VAR_5, (Char) VAR_8);
     if (!VAR_9 && VAR_8 == ')') {
  if (!VAR_7 && VAR_5) {
      goto past_word_end;
  } else {
      if (VAR_5) {
   VAR_5->len = 1;
   FUNC_1(VAR_5);
      }
      return VAR_6;
  }
     }
     if (!VAR_7 && !VAR_9 && VAR_8 == '(') {
  if (VAR_5)
      goto past_word_end;
  else
      break;
     }
     VAR_7 = 0;
 } while ((VAR_9 || (VAR_8 != ' ' && VAR_8 != '\t')) && VAR_8 != '\n');
    } while (VAR_5 == 0);

 past_word_end:
    FUNC_6(VAR_8);
    if (VAR_6) {
 VAR_5->len--;
 FUNC_1(VAR_5);
    }

    return (VAR_6);

past:
    switch (VAR_4) {

    case 129:
 FUNC_5(VAR_1 | VAR_2, "then/endif");
 break;

    case 131:
 FUNC_5(VAR_1 | VAR_2, "endif");
 break;

    case 132:
    case 128:
 FUNC_5(VAR_1 | VAR_2, "endsw");
 break;

    case 133:
 FUNC_5(VAR_1 | VAR_2, "end");
 break;

    case 130:
 FUNC_3(FUNC_4(VAR_3));
 FUNC_5(VAR_1 | VAR_2, "label");
 break;

    default:
 break;
    }

    return (0);
}
