
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {int* word; struct wordent* next; } ;
struct command {int t_dflg; struct command* t_dcdr; struct command* t_dcar; int t_dtyp; } ;


 int VAR_0 ;
 struct command* FUNC_0 (struct wordent const*,struct wordent const*,int) ;
 struct command* FUNC_1 (int,int) ;

__attribute__((used)) static struct command *
FUNC_2(const struct wordent *VAR_1, const struct wordent *VAR_2, int VAR_3)
{
    const struct wordent *VAR_4;
    struct command *VAR_5;
    int VAR_6 = 0;

    for (VAR_4 = VAR_1; VAR_4 != VAR_2; VAR_4 = VAR_4->next)
 switch (VAR_4->word[0]) {

 case '(':
     VAR_6++;
     continue;

 case ')':
     VAR_6--;
     continue;

 case '|':
     if (VAR_4->word[1] != '|')
  continue;
     if (VAR_6 == 0) {
  VAR_5 = FUNC_1(1, sizeof(*VAR_5));
  VAR_5->t_dtyp = VAR_0;
  VAR_5->t_dcar = FUNC_0(VAR_1, VAR_4, VAR_3);
  VAR_5->t_dcdr = FUNC_2(VAR_4->next, VAR_2, VAR_3);
  VAR_5->t_dflg = 0;
  return (VAR_5);
     }
     continue;

 default:
     break;
 }
    return (FUNC_0(VAR_1, VAR_2, VAR_3));
}
