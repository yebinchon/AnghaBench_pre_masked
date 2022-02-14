
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tval; int sval; } ;
typedef TYPE_1__ Cell ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void
FUNC_0(Cell *VAR_9)
{
 if (&VAR_9->sval == VAR_3 || &VAR_9->sval == VAR_7 ||
     &VAR_9->sval == VAR_5 || &VAR_9->sval == VAR_6 ||
     &VAR_9->sval == VAR_4 || &VAR_9->sval == VAR_0 ||
     &VAR_9->sval == VAR_2 || &VAR_9->sval == VAR_8)
  VAR_9->tval |= VAR_1;
 else
  VAR_9->tval &= ~VAR_1;
}
