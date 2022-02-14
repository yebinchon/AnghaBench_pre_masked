
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
struct TYPE_4__ {int nsid; int cdw15; int cdw14; int cdw13; int cdw12; int cdw11; int cdw10; int rsvd3; int rsvd2; int fuse; int opc; } ;
struct nvme_request {TYPE_2__ cmd; } ;
struct TYPE_3__ {int cdw15; int cdw14; int cdw13; int cdw12; int cdw11; int cdw10; int rsvd3; int rsvd2; int fuse; int opc; } ;
struct nvme_pt_command {scalar_t__ len; struct mtx* driver_lock; TYPE_1__ cmd; scalar_t__ buf; scalar_t__ is_read; } ;
struct nvme_controller {scalar_t__ max_xfer_size; } ;
struct mtx {int dummy; } ;
struct buf {scalar_t__ b_bufsize; scalar_t__ b_data; int b_iocmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mtx*) ;
 struct mtx* FUNC_4 (int ,struct nvme_pt_command*) ;
 int FUNC_5 (struct nvme_pt_command*,struct mtx*,int ,char*,int ) ;
 int FUNC_6 (struct mtx*) ;
 int VAR_8 ;
 struct nvme_request* FUNC_7 (int ,struct nvme_pt_command*) ;
 struct nvme_request* FUNC_8 (scalar_t__,scalar_t__,int ,struct nvme_pt_command*) ;
 int FUNC_9 (struct nvme_controller*,struct nvme_request*) ;
 int FUNC_10 (struct nvme_controller*,struct nvme_request*) ;
 int FUNC_11 (struct nvme_controller*,char*,scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 struct buf* FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,struct buf*) ;
 scalar_t__ FUNC_16 (struct buf*,int) ;

int
FUNC_17(struct nvme_controller *VAR_11,
    struct nvme_pt_command *VAR_12, uint32_t VAR_13, int VAR_14,
    int VAR_15)
{
 struct nvme_request *VAR_16;
 struct mtx *VAR_17;
 struct buf *VAR_18 = ((void*)0);
 int VAR_19 = 0;
 vm_offset_t VAR_20, VAR_21;

 if (VAR_12->len > 0) {





  VAR_20 = (vm_offset_t)VAR_12->buf;
  VAR_21 = FUNC_12(VAR_20 + VAR_12->len);
  VAR_20 = FUNC_13(VAR_20);
  if (VAR_21 - VAR_20 > VAR_4)
   return VAR_3;

  if (VAR_12->len > VAR_11->max_xfer_size) {
   FUNC_11(VAR_11, "pt->len (%d) "
       "exceeds max_xfer_size (%d)\n", VAR_12->len,
       VAR_11->max_xfer_size);
   return VAR_3;
  }
  if (VAR_14) {




   FUNC_0(VAR_7);
   VAR_18 = FUNC_14(VAR_10, VAR_5);
   VAR_18->b_data = VAR_12->buf;
   VAR_18->b_bufsize = VAR_12->len;
   VAR_18->b_iocmd = VAR_12->is_read ? VAR_0 : VAR_1;
   if (FUNC_16(VAR_18, 1) < 0) {
    VAR_19 = VAR_2;
    goto err;
   }
   VAR_16 = FUNC_8(VAR_18->b_data, VAR_12->len,
       VAR_9, VAR_12);
  } else
   VAR_16 = FUNC_8(VAR_12->buf, VAR_12->len,
       VAR_9, VAR_12);
 } else
  VAR_16 = FUNC_7(VAR_9, VAR_12);


 VAR_16->cmd.opc = VAR_12->cmd.opc;
 VAR_16->cmd.fuse = VAR_12->cmd.fuse;
 VAR_16->cmd.rsvd2 = VAR_12->cmd.rsvd2;
 VAR_16->cmd.rsvd3 = VAR_12->cmd.rsvd3;
 VAR_16->cmd.cdw10 = VAR_12->cmd.cdw10;
 VAR_16->cmd.cdw11 = VAR_12->cmd.cdw11;
 VAR_16->cmd.cdw12 = VAR_12->cmd.cdw12;
 VAR_16->cmd.cdw13 = VAR_12->cmd.cdw13;
 VAR_16->cmd.cdw14 = VAR_12->cmd.cdw14;
 VAR_16->cmd.cdw15 = VAR_12->cmd.cdw15;

 VAR_16->cmd.nsid = FUNC_2(VAR_13);

 VAR_17 = FUNC_4(VAR_8, VAR_12);
 VAR_12->driver_lock = VAR_17;

 if (VAR_15)
  FUNC_9(VAR_11, VAR_16);
 else
  FUNC_10(VAR_11, VAR_16);

 FUNC_3(VAR_17);
 while (VAR_12->driver_lock != ((void*)0))
  FUNC_5(VAR_12, VAR_17, VAR_6, "nvme_pt", 0);
 FUNC_6(VAR_17);

err:
 if (VAR_18 != ((void*)0)) {
  FUNC_15(VAR_10, VAR_18);
  FUNC_1(VAR_7);
 }

 return (VAR_19);
}
