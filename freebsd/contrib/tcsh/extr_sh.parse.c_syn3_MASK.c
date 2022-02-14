
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct wordent {int* word; struct wordent const* next; } const wordent ;
struct command {int t_dflg; int t_dtyp; int t_dspr; void* t_dlef; void* t_drit; int ** t_dcom; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (char*,int ) ;
 int VAR_21 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct wordent const*,struct wordent const*,int) ;
 void* FUNC_6 (int,int) ;

__attribute__((used)) static struct command *
FUNC_7(const struct wordent *VAR_22, const struct wordent *VAR_23, int VAR_24)
{
    const struct wordent *VAR_25;
    const struct wordent *VAR_26, *VAR_27;
    struct command *VAR_28;
    int VAR_29;
    Char **VAR_30;
    int VAR_31, VAR_32;
    int VAR_33 = 0;

    if (VAR_22 != VAR_23) {
 VAR_25 = VAR_22;
again:
 switch (FUNC_4(VAR_25->word)) {

 case 135:
     VAR_25 = VAR_25->next;
     if (VAR_25 != VAR_23)
  goto again;
     break;

 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
     VAR_33 = 1;
     break;
 default:
     break;
 }
    }
    VAR_31 = 0;
    VAR_29 = 0;
    for (VAR_25 = VAR_22; VAR_25 != VAR_23; VAR_25 = VAR_25->next)
 switch (VAR_25->word[0]) {

 case '(':
     if (VAR_33)
  VAR_31++;
     VAR_29++;
     continue;

 case ')':
     if (VAR_33)
  VAR_31++;
     VAR_29--;
     continue;

 case '>':
 case '<':
     if (VAR_29 != 0) {
  if (VAR_33)
      VAR_31++;
  continue;
     }
     if (VAR_25->next == VAR_23)
  continue;
     if (FUNC_1(VAR_18, VAR_25->next->word[0]))
  continue;
     VAR_31--;
     continue;

 default:
     if (!VAR_33 && VAR_29 != 0)
  continue;
     VAR_31++;
     continue;
 }
    if (VAR_31 < 0)
 VAR_31 = 0;
    VAR_28 = FUNC_6(1, sizeof(*VAR_28));
    VAR_30 = FUNC_6(VAR_31 + 1, sizeof(Char **));
    VAR_28->t_dcom = VAR_30;
    VAR_31 = 0;
    if (VAR_23->word[0] == ')')
 VAR_28->t_dflg = VAR_8;
    VAR_26 = 0;
    VAR_27 = 0;
    VAR_29 = 0;
    for (VAR_25 = VAR_22; VAR_25 != VAR_23; VAR_25 = VAR_25->next) {
 VAR_32 = VAR_25->word[0];
 switch (VAR_32) {

 case '(':
     if (VAR_29 == 0) {
  if (VAR_26 != 0 && !VAR_33)
      FUNC_3(VAR_0);
  VAR_26 = VAR_25->next;
     }
     VAR_29++;
     goto savep;

 case ')':
     VAR_29--;
     if (VAR_29 == 0)
  VAR_27 = VAR_25;
     goto savep;

 case '>':
     if (VAR_29 != 0)
  goto savep;
     if (VAR_25->word[1] == '>')
  VAR_28->t_dflg |= VAR_7;
     if (VAR_25->next != VAR_23 && FUNC_2(VAR_25->next->word, VAR_19)) {
  VAR_28->t_dflg |= VAR_11, VAR_25 = VAR_25->next;
  if (VAR_24 & (VAR_17 | VAR_14)) {
      FUNC_3(VAR_5);
      continue;
  }
     }
     if (VAR_25->next != VAR_23 && FUNC_2(VAR_25->next->word, VAR_20))
  VAR_28->t_dflg |= VAR_9, VAR_25 = VAR_25->next;
     if (VAR_25->next == VAR_23) {
  FUNC_3(VAR_3);
  continue;
     }
     VAR_25 = VAR_25->next;
     if (FUNC_1(VAR_18, VAR_25->word[0])) {
  FUNC_3(VAR_3);
  continue;
     }
     if (((VAR_24 & VAR_17) && (VAR_24 & VAR_14) == 0) || VAR_28->t_drit)
  FUNC_3(VAR_5);
     else
  VAR_28->t_drit = FUNC_0(VAR_25->word);
     continue;

 case '<':
     if (VAR_29 != 0)
  goto savep;
     if (VAR_25->word[1] == '<')
  VAR_28->t_dflg |= VAR_10;
     if (VAR_25->next == VAR_23) {
  FUNC_3(VAR_3);
  continue;
     }
     VAR_25 = VAR_25->next;
     if (FUNC_1(VAR_18, VAR_25->word[0])) {
  FUNC_3(VAR_3);
  continue;
     }
     if ((VAR_24 & VAR_15) && (VAR_28->t_dflg & VAR_10))
  FUNC_3(VAR_6);
     else if ((VAR_24 & VAR_16) || VAR_28->t_dlef)
  FUNC_3(VAR_2);
     else
  VAR_28->t_dlef = FUNC_0(VAR_25->word);
     continue;

    savep:
     if (!VAR_33)
  continue;
 default:
     if (VAR_29 != 0 && !VAR_33)
  continue;
     if (VAR_21 == 0)
  VAR_30[VAR_31] = FUNC_0(VAR_25->word);
     VAR_31++;
     continue;
 }
    }
    if (VAR_26 != 0 && !VAR_33) {
 if (VAR_31 != 0)
     FUNC_3(VAR_1);
 VAR_28->t_dtyp = VAR_13;
 VAR_28->t_dspr = FUNC_5(VAR_26, VAR_27, VAR_15);
    }
    else {
 if (VAR_31 == 0)
     FUNC_3(VAR_4);
 VAR_28->t_dtyp = VAR_12;
    }
    return (VAR_28);
}
