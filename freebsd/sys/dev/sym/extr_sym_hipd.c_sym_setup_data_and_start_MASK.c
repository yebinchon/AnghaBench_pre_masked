
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_hdr {int flags; int status; } ;
struct ccb_scsiio {struct ccb_hdr ccb_h; int dxfer_len; } ;
typedef TYPE_1__* hcb_p ;
typedef TYPE_2__* ccb_p ;
struct TYPE_9__ {int host_status; int dmamap; int dmamapped; TYPE_1__* arg; int data_len; } ;
struct TYPE_8__ {int sim; int data_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,union ccb*,int (*) (TYPE_2__*,int *,int ,int ),TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(hcb_p VAR_9, struct ccb_scsiio *VAR_10, ccb_p VAR_11)
{
 struct ccb_hdr *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_6);

 VAR_12 = &VAR_10->ccb_h;




 VAR_11->data_len = VAR_10->dxfer_len;
 VAR_11->arg = VAR_9;




 VAR_13 = (VAR_12->flags & VAR_1);
 if (VAR_13 == VAR_2) {
  FUNC_2(VAR_11, ((void*)0), 0, 0);
  return;
 }

 VAR_11->dmamapped = (VAR_13 == VAR_0) ? VAR_7 : VAR_8;
 VAR_14 = FUNC_1(VAR_9->data_dmat, VAR_11->dmamap,
          (union ccb *)VAR_10, FUNC_2, VAR_11, 0);
 if (VAR_14 == VAR_4) {
  VAR_11->host_status = VAR_5;
  FUNC_3(VAR_9->sim, 1);
  VAR_10->ccb_h.status |= VAR_3;
 }
}
