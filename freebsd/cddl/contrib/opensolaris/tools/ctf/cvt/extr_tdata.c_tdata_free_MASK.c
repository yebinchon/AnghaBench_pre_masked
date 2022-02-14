
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int td_mergelock; struct TYPE_5__* td_parname; struct TYPE_5__* td_parlabel; int td_fwdlist; int td_idhash; int td_layouthash; int td_iihash; } ;
typedef TYPE_1__ tdata_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,int *) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int * VAR_1 ;

void
FUNC_5(tdata_t *VAR_2)
{
 FUNC_1(VAR_2->td_iihash, VAR_0, ((void*)0));
 FUNC_1(VAR_2->td_layouthash, VAR_1, ((void*)0));
 FUNC_1(VAR_2->td_idhash, ((void*)0), ((void*)0));
 FUNC_2(VAR_2->td_fwdlist, ((void*)0), ((void*)0));

 FUNC_4(VAR_2);

 FUNC_0(VAR_2->td_parlabel);
 FUNC_0(VAR_2->td_parname);

 FUNC_3(&VAR_2->td_mergelock);

 FUNC_0(VAR_2);
}
