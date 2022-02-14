
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uio {int uio_resid; } ;
struct fw_xferq {scalar_t__ queued; scalar_t__ bnpacket; int dmach; TYPE_3__* stproc; int stvalid; int * buf; int stfree; } ;
struct TYPE_5__ {int len; scalar_t__ payload; } ;
struct TYPE_6__ {TYPE_1__ stream; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct fw_isohdr {int dummy; } ;
struct fw_drv1 {struct fw_xferq* it; struct firewire_comm* fc; } ;
struct firewire_comm {int (* itx_enable ) (struct firewire_comm*,int ) ;} ;
struct cdev {struct fw_drv1* si_drv1; } ;
typedef int caddr_t ;
struct TYPE_7__ {scalar_t__ poffset; } ;


 scalar_t__ FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (struct firewire_comm*) ;
 int FUNC_3 (struct firewire_comm*) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct fw_drv1*,struct uio*,int) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct fw_xferq*,int ,int ,char*,int ) ;
 int FUNC_10 (struct cdev*,struct uio*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct firewire_comm*,int ) ;
 int FUNC_14 (struct firewire_comm*,int ) ;
 int FUNC_15 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_16(struct cdev *VAR_4, struct uio *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8, VAR_9 = 0;
 struct fw_drv1 *VAR_10;
 struct fw_pkt *VAR_11;
 struct firewire_comm *VAR_12;
 struct fw_xferq *VAR_13;

 if (FUNC_0(VAR_4))
  return (FUNC_10(VAR_4, VAR_5, VAR_6));

 VAR_10 = VAR_4->si_drv1;
 VAR_12 = VAR_10->fc;
 VAR_13 = VAR_10->it;

 if (VAR_13 == ((void*)0))
  return (FUNC_7(VAR_10, VAR_5, VAR_6));

 if (VAR_13->buf == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_12);
isoloop:
 if (VAR_13->stproc == ((void*)0)) {
  VAR_13->stproc = FUNC_4(&VAR_13->stfree);
  if (VAR_13->stproc != ((void*)0)) {
   VAR_8 = FUNC_11();
   FUNC_6(&VAR_13->stfree, VAR_3);
   FUNC_12(VAR_8);
   VAR_13->queued = 0;
  } else if (VAR_9 == 0) {
   VAR_9 = 1;





   VAR_7 = FUNC_9(VAR_13, FUNC_2(VAR_12), VAR_1, "fw_write", VAR_2);
   if (VAR_7)
    goto out;
   goto isoloop;
  } else {
   VAR_7 = VAR_0;
   goto out;
  }
 }
 FUNC_3(VAR_12);
 VAR_11 = (struct fw_pkt *)FUNC_8(VAR_13->buf,
   VAR_13->stproc->poffset + VAR_13->queued);
 VAR_7 = FUNC_15((caddr_t)VAR_11, sizeof(struct fw_isohdr), VAR_5);
 VAR_7 = FUNC_15((caddr_t)VAR_11->mode.stream.payload,
    VAR_11->mode.stream.len, VAR_5);
 VAR_13->queued++;
 if (VAR_13->queued >= VAR_13->bnpacket) {
  VAR_8 = FUNC_11();
  FUNC_5(&VAR_13->stvalid, VAR_13->stproc, VAR_3);
  FUNC_12(VAR_8);
  VAR_13->stproc = ((void*)0);
  VAR_7 = VAR_12->itx_enable(VAR_12, VAR_13->dmach);
 }
 if (VAR_5->uio_resid >= sizeof(struct fw_isohdr)) {
  VAR_9 = 0;
  FUNC_1(VAR_12);
  goto isoloop;
 }
 return VAR_7;

out:
 FUNC_3(VAR_12);
 return VAR_7;
}
