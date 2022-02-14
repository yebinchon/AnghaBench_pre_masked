
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tdtrav_data_t ;
struct TYPE_6__ {TYPE_1__* iib_td; int * iib_tdtd; } ;
typedef TYPE_2__ iiburst_t ;
struct TYPE_5__ {int td_iihash; int td_curvgen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int *,int *,int *,int ,int *,void*) ;

__attribute__((used)) static void
FUNC_2(iiburst_t *VAR_2)
{
 tdtrav_data_t VAR_3;

 FUNC_1(&VAR_3, &VAR_2->iib_td->td_curvgen, ((void*)0), VAR_1,
     ((void*)0), (void *)VAR_2);

 VAR_2->iib_tdtd = &VAR_3;

 (void) FUNC_0(VAR_2->iib_td->td_iihash, VAR_0, VAR_2);
}
