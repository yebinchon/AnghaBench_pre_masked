
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dane_ctx_st {scalar_t__ mdmax; int * mdord; int * mdevp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dane_ctx_st *VAR_0)
{
    FUNC_0(VAR_0->mdevp);
    VAR_0->mdevp = ((void*)0);

    FUNC_0(VAR_0->mdord);
    VAR_0->mdord = ((void*)0);
    VAR_0->mdmax = 0;
}
