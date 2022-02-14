
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {void* word; struct wordent* next; struct wordent* prev; } ;
struct Strbuf {int * s; scalar_t__ len; scalar_t__ size; } ;
typedef char eChar ;
typedef int Char ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Strbuf*,int ) ;
 int FUNC_1 (struct Strbuf*) ;
 void* FUNC_2 (int *) ;
 int VAR_4 ;






 char FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char) ;
 void* FUNC_8 (int) ;

__attribute__((used)) static struct wordent *
FUNC_9(struct wordent *VAR_5)
{
    int VAR_6;
    eChar VAR_7, VAR_8;
    int VAR_9;
    struct Strbuf *VAR_10;
    VAR_10 = FUNC_8(sizeof(*VAR_10));
    VAR_10->size = 0;
    VAR_10->s = ((void*)0);
    VAR_7 = FUNC_3(1);
    VAR_8 = 0;
    VAR_9 = 0;
    for (;;) {
 VAR_10->len = 0;
 FUNC_1 (VAR_10);
 while (VAR_7 == ' ' || VAR_7 == '\t')
     VAR_7 = FUNC_3(1);
 if (VAR_7 == '#')
     do
  VAR_7 = FUNC_3(1);
     while (VAR_7 != VAR_0 && VAR_7 != '\n');
 if (VAR_7 == VAR_0)
     goto past;
 if (VAR_7 == '\n')
     goto nl;
 FUNC_7(VAR_7);
 VAR_6 = 1;
 do {
     VAR_9 = (VAR_7 == '\\');
     VAR_7 = FUNC_3(1);
     if (VAR_7 == '\\' && !VAR_9) {
  if ((VAR_7 = FUNC_3(1)) == '\n') {
      VAR_9 = 1;
      VAR_7 = ' ';
  } else {
      FUNC_7(VAR_7);
      VAR_7 = '\\';
  }
     }
     if ((VAR_7 == '\'' || VAR_7 == '"') && !VAR_9) {
  if (VAR_8 == 0)
      VAR_8 = VAR_7;
  else if (VAR_8 == VAR_7)
      VAR_8 = 0;
     }
     if (VAR_7 == VAR_0)
  goto past;

     FUNC_0(VAR_10, (Char) VAR_7);

     if (!VAR_6 && !VAR_8 && VAR_7 == '(' && !VAR_9) {
  break;
     }
     VAR_6 = 0;
 } while (VAR_8 || VAR_9 || (VAR_7 != ' ' && VAR_7 != '\t' && VAR_7 != '\n'));
 VAR_10->len--;
 if (VAR_10->len) {
     FUNC_1(VAR_10);
     VAR_5->word = FUNC_2(VAR_10->s);
     VAR_5->next = FUNC_8(sizeof (*VAR_5));
     VAR_5->next->prev = VAR_5;
     VAR_5 = VAR_5->next;
 }
 if (VAR_7 == '\n') {
 nl:
     VAR_10->len = 0;
     FUNC_0(VAR_10, (Char) VAR_7);
     FUNC_1(VAR_10);
     VAR_5->word = FUNC_2(VAR_10->s);
     return VAR_5;
 }
    }

past:
    switch (VAR_4) {

    case 129:
 FUNC_6(VAR_1 | VAR_2, "then/endif");
 break;

    case 131:
 FUNC_6(VAR_1 | VAR_2, "endif");
 break;

    case 132:
    case 128:
 FUNC_6(VAR_1 | VAR_2, "endsw");
 break;

    case 133:
 FUNC_6(VAR_1 | VAR_2, "end");
 break;

    case 130:
 FUNC_4(FUNC_5(VAR_3));
 FUNC_6(VAR_1 | VAR_2, "label");
 break;

    default:
 break;
    }

    return ((void*)0);
}
