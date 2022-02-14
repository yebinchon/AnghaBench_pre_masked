
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {int* word; struct wordent* next; } ;
struct command {struct command* t_dcdr; struct command* t_dcar; int t_dtyp; int t_dflg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct command* FUNC_0 (struct wordent const*,struct wordent const*,int) ;
 struct command* FUNC_1 (int,int) ;

__attribute__((used)) static struct command *
FUNC_2(const struct wordent *VAR_5, const struct wordent *VAR_6, int VAR_7)
{
    const struct wordent *VAR_8, *VAR_9;
    struct command *VAR_10;
    int VAR_11 = 0;
    int VAR_12;

    for (VAR_8 = VAR_5; VAR_8 != VAR_6; VAR_8 = VAR_8->next)
 switch (VAR_8->word[0]) {

 case '(':
     VAR_11++;
     continue;

 case ')':
     VAR_11--;
     continue;

 case '|':
     if (VAR_11 != 0)
  continue;
     VAR_10 = FUNC_1(1, sizeof(*VAR_10));
     VAR_12 = VAR_7 | VAR_4;
     VAR_9 = VAR_8->next;
     if (VAR_9 != VAR_6 && VAR_9->word[0] == '&') {
  VAR_12 |= VAR_2;
  VAR_10->t_dflg |= VAR_0;
     }
     VAR_10->t_dtyp = VAR_1;
     VAR_10->t_dcar = FUNC_0(VAR_5, VAR_8, VAR_12);
     if (VAR_9 != VAR_6 && VAR_9->word[0] == '&')
  VAR_8 = VAR_9;
     VAR_10->t_dcdr = FUNC_2(VAR_8->next, VAR_6, VAR_7 | VAR_3);
     return (VAR_10);

 default:
     break;
 }
    return (FUNC_0(VAR_5, VAR_6, VAR_7));
}
