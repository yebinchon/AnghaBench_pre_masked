
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int t_dflg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct command*,scalar_t__,int *,int *,int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_1(struct command *VAR_4)
{
    VAR_4->t_dflg &= VAR_1;
    VAR_4->t_dflg |= VAR_0;





    FUNC_0(VAR_4, (VAR_3 > 0 ? VAR_3 : -1), ((void*)0), ((void*)0), VAR_2);
}
