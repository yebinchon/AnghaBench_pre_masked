
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int t_dtyp; int t_dflg; int * t_drit; int * t_dlef; struct command* t_dcdr; struct command* t_dcar; int ** t_dcom; struct command* t_dspr; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct command *VAR_17)
{
    Char **VAR_18;

    if (VAR_17 == 0)
 return;
    switch (VAR_17->t_dtyp) {

    case 129:
 FUNC_0(VAR_5);
 FUNC_1(VAR_17->t_dspr);
 FUNC_0(VAR_12);
 break;

    case 132:
 for (VAR_18 = VAR_17->t_dcom; *VAR_18; VAR_18++) {
     FUNC_0(*VAR_18);
     if (VAR_18[1])
  FUNC_0(VAR_13);
 }
 break;

    case 130:
    case 133:
    case 128:
    case 131:
 FUNC_1(VAR_17->t_dcar);
 switch (VAR_17->t_dtyp) {
 case 130:
     FUNC_0(VAR_15);
     break;
 case 133:
     FUNC_0(VAR_14);
     break;
 case 128:
     FUNC_0(VAR_16);
     break;
 case 131:
     FUNC_0(VAR_7);
     break;
 default:
     break;
 }
 FUNC_1(VAR_17->t_dcdr);
 return;

    default:
 break;
    }
    if ((VAR_17->t_dflg & VAR_1) == 0 && VAR_17->t_dlef) {
 FUNC_0((VAR_17->t_dflg & VAR_3) ? VAR_8 : VAR_9);
 FUNC_0(VAR_17->t_dlef);
    }
    if ((VAR_17->t_dflg & VAR_2) == 0 && VAR_17->t_drit) {
 FUNC_0((VAR_17->t_dflg & VAR_0) ? VAR_11 : VAR_10);
 if (VAR_17->t_dflg & VAR_4)
     FUNC_0(VAR_6);
 FUNC_0(VAR_13);
 FUNC_0(VAR_17->t_drit);
    }
}
