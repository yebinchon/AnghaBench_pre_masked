
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * td_iihash; int * td_layouthash; int * td_labels; int * td_fwdlist; void* td_nextid; void* td_curvgen; void* td_curemark; } ;
typedef TYPE_1__ tdata_t ;


 void* FUNC_0 (void*,void*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;

void
FUNC_7(tdata_t *VAR_1, tdata_t *VAR_2)
{
 VAR_1->td_curemark = FUNC_0(VAR_1->td_curemark, VAR_2->td_curemark);
 VAR_1->td_curvgen = FUNC_0(VAR_1->td_curvgen, VAR_2->td_curvgen);
 VAR_1->td_nextid = FUNC_0(VAR_1->td_nextid, VAR_2->td_nextid);

 FUNC_2(VAR_1->td_iihash, VAR_2->td_iihash);


 FUNC_5(VAR_1, VAR_2->td_iihash);

 FUNC_3(&VAR_1->td_fwdlist, VAR_2->td_fwdlist);
 VAR_2->td_fwdlist = ((void*)0);

 FUNC_4(&VAR_1->td_labels, VAR_2->td_labels,
     VAR_0);
 VAR_2->td_labels = ((void*)0);



 FUNC_1(VAR_2->td_layouthash, ((void*)0), ((void*)0));
 VAR_2->td_layouthash = ((void*)0);

 FUNC_1(VAR_2->td_iihash, ((void*)0), ((void*)0));
 VAR_2->td_iihash = ((void*)0);

 FUNC_6(VAR_2);
}
