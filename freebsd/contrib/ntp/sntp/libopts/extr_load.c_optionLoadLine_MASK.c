
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fOptSet; } ;
typedef TYPE_1__ tOptions ;
typedef int tOptState ;
typedef int proc_state_mask_t ;


 int FUNC_0 (char*,char const*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int *,char*,int ,int ) ;

void
FUNC_4(tOptions * VAR_4, char const * VAR_5)
{
    tOptState VAR_6 = FUNC_2(VAR_3);
    char * VAR_7;
    proc_state_mask_t VAR_8 = VAR_4->fOptSet;
    VAR_4->fOptSet &= ~VAR_2;
    FUNC_0(VAR_7, VAR_5, "opt line");
    FUNC_3(VAR_4, &VAR_6, VAR_7, VAR_0, VAR_1);
    FUNC_1(VAR_7);
    VAR_4->fOptSet = VAR_8;
}
