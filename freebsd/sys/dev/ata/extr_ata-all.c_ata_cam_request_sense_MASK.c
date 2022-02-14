
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {size_t target_id; int timeout; } ;
struct TYPE_9__ {int sense_len; int sense_data; } ;
union ccb {TYPE_5__ ccb_h; TYPE_3__ csio; } ;
struct TYPE_7__ {int * ccb; } ;
struct TYPE_8__ {TYPE_1__ atapi; } ;
struct ata_request {size_t unit; int timeout; union ccb* ccb; int callout; scalar_t__ retries; int bytecount; int transfersize; int flags; TYPE_2__ u; void* data; int parent; int * dev; } ;
struct TYPE_12__ {scalar_t__ (* begin_transaction ) (struct ata_request*) ;} ;
struct ata_channel {int requestsense; int state; struct ata_request* running; TYPE_6__ hw; int state_mtx; TYPE_4__* curr; } ;
typedef int device_t ;
struct TYPE_10__ {int atapi; scalar_t__ mode; int bytecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct ata_request*) ;
 int FUNC_1 (struct ata_request*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 struct ata_channel* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct ata_request*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_10, struct ata_request *VAR_11)
{
 struct ata_channel *VAR_12 = FUNC_3(VAR_10);
 union ccb *VAR_13 = VAR_11->ccb;

 VAR_12->requestsense = 1;

 FUNC_1(VAR_11, sizeof(*VAR_11));
 VAR_11->dev = ((void*)0);
 VAR_11->parent = VAR_10;
 VAR_11->unit = VAR_13->ccb_h.target_id;
 VAR_11->data = (void *)&VAR_13->csio.sense_data;
 VAR_11->bytecount = VAR_13->csio.sense_len;
 VAR_11->u.atapi.ccb[0] = VAR_0;
 VAR_11->u.atapi.ccb[4] = VAR_13->csio.sense_len;
 VAR_11->flags |= VAR_5;
 if (VAR_12->curr[VAR_13->ccb_h.target_id].atapi == 16)
  VAR_11->flags |= VAR_6;
 if (VAR_12->curr[VAR_13->ccb_h.target_id].mode >= VAR_2)
  VAR_11->flags |= VAR_7;
 VAR_11->flags |= VAR_8;
 VAR_11->transfersize = FUNC_4(VAR_11->bytecount,
     VAR_12->curr[VAR_13->ccb_h.target_id].bytecount);
 VAR_11->retries = 0;
 VAR_11->timeout = (VAR_13->ccb_h.timeout + 999) / 1000;
 FUNC_2(&VAR_11->callout, &VAR_12->state_mtx, VAR_9);
 VAR_11->ccb = VAR_13;

 VAR_12->running = VAR_11;
 VAR_12->state = VAR_1;
 if (VAR_12->hw.begin_transaction(VAR_11) == VAR_4) {
  VAR_12->running = ((void*)0);
  VAR_12->state = VAR_3;
  FUNC_0(VAR_10, VAR_11);
  return;
 }
}
