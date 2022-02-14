
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* status; int timeout_ch; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_11__ {scalar_t__ data_out; scalar_t__ data_in; } ;
struct TYPE_14__ {int Result; TYPE_2__ flags; int priv; } ;
struct TYPE_13__ {int dma_map; TYPE_3__* vbus_ext; int timeout; union ccb* ccb; } ;
struct TYPE_12__ {int io_dmat; } ;
typedef TYPE_4__* POS_CMDEXT ;
typedef TYPE_5__* PCOMMAND ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (char*) ;






 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,TYPE_5__*,int ) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void FUNC_8(PCOMMAND VAR_9)
{
 POS_CMDEXT VAR_10 = (POS_CMDEXT)VAR_9->priv;
 union ccb *VAR_11 = VAR_10->ccb;

 FUNC_0(("<8>os_cmddone(%p, %d)", VAR_9, VAR_9->Result));



 FUNC_6(VAR_8, VAR_9, VAR_11->ccb_h.timeout_ch);

 switch(VAR_9->Result) {
 case 128:
  VAR_11->ccb_h.status = VAR_4;
  break;
 case 133:
  VAR_11->ccb_h.status = VAR_3;
  break;
 case 132:
  VAR_11->ccb_h.status = VAR_2;
  break;
 case 131:
  VAR_11->ccb_h.status = VAR_5;
  break;
 case 129:
  VAR_11->ccb_h.status = VAR_7;
  break;
 case 130:
  VAR_11->ccb_h.status = VAR_2;
  break;
 default:
  VAR_11->ccb_h.status = VAR_6;
  break;
 }

 if (VAR_9->flags.data_in) {
  FUNC_1(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map, VAR_0);
 }
 else if (VAR_9->flags.data_out) {
  FUNC_1(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map, VAR_1);
 }

 FUNC_2(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map);

 FUNC_4(VAR_10);
 FUNC_5(VAR_9);
 FUNC_7(VAR_11);
}
