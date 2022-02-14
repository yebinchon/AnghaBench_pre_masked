
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int td_nextid; int td_curvgen; int td_mergelock; void* td_iihash; void* td_idhash; void* td_layouthash; } ;
typedef TYPE_1__ tdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int) ;

tdata_t *
FUNC_3(void)
{
 tdata_t *VAR_8 = FUNC_2(sizeof (tdata_t));

 VAR_8->td_layouthash = FUNC_0(VAR_2, VAR_7,
     VAR_6);
 VAR_8->td_idhash = FUNC_0(VAR_1, VAR_5,
     VAR_4);





 VAR_8->td_iihash = FUNC_0(VAR_0, VAR_3, ((void*)0));
 VAR_8->td_nextid = 1;
 VAR_8->td_curvgen = 1;

 FUNC_1(&VAR_8->td_mergelock, ((void*)0));

 return (VAR_8);
}
