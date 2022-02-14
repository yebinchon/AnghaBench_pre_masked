
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPPC_comp_state {int histptr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

void FUNC_1(char *VAR_1)
{
    struct MPPC_comp_state *VAR_2 = (struct MPPC_comp_state*)VAR_1;

    FUNC_0(VAR_1, sizeof(struct MPPC_comp_state));
    VAR_2->histptr = VAR_0;
}
