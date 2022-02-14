
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct sym_ccb {int dummy; } ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_16__ {void* addr; } ;
struct TYPE_14__ {void* restart; void* start; } ;
struct TYPE_15__ {TYPE_1__ go; } ;
struct TYPE_17__ {TYPE_3__ smsg_ext; TYPE_2__ head; } ;
struct TYPE_19__ {struct TYPE_19__* sns_bbuf; int link_ccbq; TYPE_4__ phys; struct TYPE_19__* link_ccbh; int ccb_ba; int ch; int dmamap; } ;
struct TYPE_18__ {scalar_t__ actccbs; int free_ccbq; TYPE_6__** ccbh; int data_dmat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 void* FUNC_8 (int,char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_6__*,int,char*) ;
 int FUNC_11 (TYPE_6__*) ;

__attribute__((used)) static ccb_p FUNC_12(hcb_p VAR_6)
{
 ccb_p VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_4(VAR_0);





 if (VAR_6->actccbs >= VAR_1)
  return ((void*)0);




 VAR_7 = FUNC_8(sizeof(struct sym_ccb), "CCB");
 if (!VAR_7)
  return ((void*)0);




 VAR_7->sns_bbuf = FUNC_8(VAR_2, "SNS_BBUF");
 if (!VAR_7->sns_bbuf)
  goto out_free;




 if (FUNC_5(VAR_6->data_dmat, 0, &VAR_7->dmamap))
  goto out_free;



 VAR_6->actccbs++;




 FUNC_6(&VAR_7->ch, 1);




 VAR_7->ccb_ba = FUNC_11(VAR_7);




 VAR_8 = FUNC_0(VAR_7->ccb_ba);
 VAR_7->link_ccbh = VAR_6->ccbh[VAR_8];
 VAR_6->ccbh[VAR_8] = VAR_7;




 VAR_7->phys.head.go.start = FUNC_7(FUNC_2 (VAR_6, VAR_4));
 VAR_7->phys.head.go.restart = FUNC_7(FUNC_3 (VAR_6, VAR_3));




 VAR_7->phys.smsg_ext.addr = FUNC_7(FUNC_1(VAR_6, VAR_5[2]));




 FUNC_9(&VAR_7->link_ccbq, &VAR_6->free_ccbq);

 return VAR_7;
out_free:
 if (VAR_7->sns_bbuf)
  FUNC_10(VAR_7->sns_bbuf, VAR_2, "SNS_BBUF");
 FUNC_10(VAR_7, sizeof(*VAR_7), "CCB");
 return ((void*)0);
}
