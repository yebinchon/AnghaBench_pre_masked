
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct taskqgroup {int dummy; } ;
struct grouptask {int dummy; } ;
typedef int iflib_intr_type_t ;
typedef TYPE_3__* if_irq_t ;
typedef TYPE_4__* if_ctx_t ;
typedef int gtask_fn_t ;
struct TYPE_12__ {int * ifc_dev; struct grouptask ifc_vflr_task; TYPE_2__* ifc_rxqs; TYPE_1__* ifc_txqs; } ;
struct TYPE_11__ {int * ii_res; } ;
struct TYPE_10__ {struct grouptask ifr_task; } ;
struct TYPE_9__ {struct grouptask ift_task; } ;


 int FUNC_0 (struct grouptask*,int ,int *,void*) ;



 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int,int,struct grouptask*,struct taskqgroup*,void*,char const*) ;
 int FUNC_2 (char*) ;
 struct taskqgroup* VAR_3 ;
 struct taskqgroup* VAR_4 ;
 int FUNC_3 (struct taskqgroup*,struct grouptask*,void*,int *,int *,char const*) ;

void
FUNC_4(if_ctx_t VAR_5, if_irq_t VAR_6, iflib_intr_type_t VAR_7, void *VAR_8, int VAR_9, const char *VAR_10)
{
 struct grouptask *VAR_11;
 struct taskqgroup *VAR_12;
 gtask_fn_t *VAR_13;
 void *VAR_14;
 int VAR_15;

 switch (VAR_7) {
 case 128:
  VAR_14 = &VAR_5->ifc_txqs[VAR_9];
  VAR_11 = &VAR_5->ifc_txqs[VAR_9].ift_task;
  VAR_12 = VAR_4;
  VAR_13 = VAR_2;
  break;
 case 129:
  VAR_14 = &VAR_5->ifc_rxqs[VAR_9];
  VAR_11 = &VAR_5->ifc_rxqs[VAR_9].ifr_task;
  VAR_12 = VAR_4;
  VAR_13 = VAR_1;
  break;
 case 130:
  VAR_14 = VAR_5;
  VAR_11 = &VAR_5->ifc_vflr_task;
  VAR_12 = VAR_3;
  VAR_13 = VAR_0;
  break;
 default:
  FUNC_2("unknown net intr type");
 }
 FUNC_0(VAR_11, 0, VAR_13, VAR_14);
 if (VAR_6 != ((void*)0)) {
  VAR_15 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_9, VAR_11, VAR_12,
      VAR_14, VAR_10);
  if (VAR_15)
   FUNC_3(VAR_12, VAR_11, VAR_14, VAR_5->ifc_dev,
       VAR_6->ii_res, VAR_10);
 } else {
  FUNC_3(VAR_12, VAR_11, VAR_14, ((void*)0), ((void*)0), VAR_10);
 }
}
