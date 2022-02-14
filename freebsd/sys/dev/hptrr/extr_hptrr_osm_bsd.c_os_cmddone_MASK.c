
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_10__ {scalar_t__ data_out; scalar_t__ data_in; } ;
struct TYPE_13__ {int Result; TYPE_2__ flags; int priv; } ;
struct TYPE_12__ {int dma_map; TYPE_3__* vbus_ext; int timeout; union ccb* ccb; } ;
struct TYPE_11__ {int io_dmat; } ;
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
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void FUNC_7(PCOMMAND VAR_8)
{
 POS_CMDEXT VAR_9 = (POS_CMDEXT)VAR_8->priv;
 union ccb *VAR_10 = VAR_9->ccb;

 FUNC_0(("os_cmddone(%p, %d)", VAR_8, VAR_8->Result));

 FUNC_3(&VAR_9->timeout);

 switch(VAR_8->Result) {
 case 128:
  VAR_10->ccb_h.status = VAR_4;
  break;
 case 133:
  VAR_10->ccb_h.status = VAR_3;
  break;
 case 132:
  VAR_10->ccb_h.status = VAR_2;
  break;
 case 131:
  VAR_10->ccb_h.status = VAR_5;
  break;
 case 129:
  VAR_10->ccb_h.status = VAR_7;
  break;
 case 130:
  VAR_10->ccb_h.status = VAR_2;
  break;
 default:
  VAR_10->ccb_h.status = VAR_6;
  break;
 }

 if (VAR_8->flags.data_in) {
  FUNC_1(VAR_9->vbus_ext->io_dmat, VAR_9->dma_map, VAR_0);
 }
 else if (VAR_8->flags.data_out) {
  FUNC_1(VAR_9->vbus_ext->io_dmat, VAR_9->dma_map, VAR_1);
 }

 FUNC_2(VAR_9->vbus_ext->io_dmat, VAR_9->dma_map);

 FUNC_4(VAR_9);
 FUNC_5(VAR_8);
 FUNC_6(VAR_10);
}
