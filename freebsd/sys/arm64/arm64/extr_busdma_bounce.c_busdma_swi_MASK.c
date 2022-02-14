
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bus_dmamap {int callback_arg; int callback; int mem; TYPE_2__* dmat; } ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_4__ {int lockfuncarg; int (* lockfunc ) (int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bus_dmamap* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,struct bus_dmamap*,int *,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(void)
{
 bus_dma_tag_t VAR_6;
 struct bus_dmamap *VAR_7;

 FUNC_3(&VAR_3);
 while ((VAR_7 = FUNC_0(&VAR_4)) != ((void*)0)) {
  FUNC_1(&VAR_4, VAR_5);
  FUNC_4(&VAR_3);
  VAR_6 = VAR_7->dmat;
  (VAR_6->common.lockfunc)(VAR_6->common.lockfuncarg, VAR_0);
  FUNC_2(VAR_7->dmat, VAR_7, &VAR_7->mem,
      VAR_7->callback, VAR_7->callback_arg, VAR_2);
  (VAR_6->common.lockfunc)(VAR_6->common.lockfuncarg,
      VAR_1);
  FUNC_3(&VAR_3);
 }
 FUNC_4(&VAR_3);
}
