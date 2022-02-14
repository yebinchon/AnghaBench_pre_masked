
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct wordent {int* word; struct wordent const* next; } const wordent ;
struct command {int t_dflg; int t_dcdr; struct command* t_dcar; int t_dtyp; struct command* t_dspr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 struct command* FUNC_2 (struct wordent const*,struct wordent const*,int) ;
 int FUNC_3 (struct wordent const*,struct wordent const*,int) ;
 struct command* FUNC_4 (int,int) ;

__attribute__((used)) static struct command *
FUNC_5(const struct wordent *VAR_9, const struct wordent *VAR_10, int VAR_11)
{
    const struct wordent *VAR_12;
    struct command *VAR_13, *VAR_14;
    int VAR_15;

    VAR_15 = 0;
    for (VAR_12 = VAR_9; VAR_12 != VAR_10; VAR_12 = VAR_12->next)
 switch (VAR_12->word[0]) {

 case '(':
     VAR_15++;
     continue;

 case ')':
     VAR_15--;
     if (VAR_15 < 0)
  FUNC_1(VAR_1);
     continue;

 case '|':
     if (VAR_12->word[1] == '|')
  continue;


 case '>':
     if (VAR_12->next != VAR_10 && FUNC_0(VAR_12->next->word, VAR_8))
  VAR_12 = VAR_12->next;
     continue;

 case '&':
     if (VAR_15 != 0)
  break;
     if (VAR_12->word[1] == '&')
  continue;
     VAR_14 = FUNC_2(VAR_9, VAR_12, VAR_11);
     if (VAR_14->t_dtyp == VAR_5 ||
  VAR_14->t_dtyp == VAR_4 ||
  VAR_14->t_dtyp == VAR_6) {
  VAR_13 = FUNC_4(1, sizeof(*VAR_13));
  VAR_13->t_dtyp = VAR_7;
  VAR_13->t_dflg = VAR_2 | VAR_3;
  VAR_13->t_dspr = VAR_14;
  VAR_14 = VAR_13;
     }
     else
  VAR_14->t_dflg |= VAR_2 | VAR_3;
     VAR_13 = FUNC_4(1, sizeof(*VAR_13));
     VAR_13->t_dtyp = VAR_5;
     VAR_13->t_dflg = 0;
     VAR_13->t_dcar = VAR_14;
     VAR_13->t_dcdr = FUNC_3(VAR_12, VAR_10, VAR_11);
     return (VAR_13);
 default:
     break;
 }
    if (VAR_15 == 0)
 return (FUNC_2(VAR_9, VAR_10, VAR_11));
    FUNC_1(VAR_0);
    return (0);
}
