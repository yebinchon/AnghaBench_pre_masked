
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct uio {scalar_t__ uio_resid; } ;
struct fw_xferq {scalar_t__ queued; scalar_t__ bnpacket; scalar_t__ psize; TYPE_3__* stproc; int dmach; int stfree; int * buf; int flag; int stvalid; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_6__ {TYPE_1__ stream; int ld; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct fw_drv1 {struct fw_xferq* ir; struct firewire_comm* fc; } ;
struct firewire_comm {int (* irx_enable ) (struct firewire_comm*,int ) ;int (* irx_post ) (struct firewire_comm*,int ) ;} ;
struct cdev {struct fw_drv1* si_drv1; } ;
typedef int caddr_t ;
struct TYPE_7__ {scalar_t__ poffset; } ;


 scalar_t__ FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (struct firewire_comm*) ;
 int FUNC_3 (struct firewire_comm*) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct fw_drv1*,struct uio*,int) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct fw_xferq*,int ,int ,char*,int ) ;
 int FUNC_10 (struct cdev*,struct uio*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct firewire_comm*,int ) ;
 int FUNC_14 (struct firewire_comm*,int ) ;
 int FUNC_15 (int ,scalar_t__,struct uio*) ;

__attribute__((used)) static int
FUNC_16(struct cdev *VAR_5, struct uio *VAR_6, int VAR_7)
{
 struct fw_drv1 *VAR_8;
 struct fw_xferq *VAR_9;
 struct firewire_comm *VAR_10;
 int VAR_11 = 0, VAR_12, VAR_13 = 0;
 struct fw_pkt *VAR_14;

 if (FUNC_0(VAR_5))
  return (FUNC_10(VAR_5, VAR_6, VAR_7));

 VAR_8 = VAR_5->si_drv1;
 VAR_10 = VAR_8->fc;
 VAR_9 = VAR_8->ir;

 if (VAR_9 == ((void*)0))
  return (FUNC_7(VAR_8, VAR_6, VAR_7));

 if (VAR_9->buf == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_10);
readloop:
 if (VAR_9->stproc == ((void*)0)) {

  VAR_9->stproc = FUNC_4(&VAR_9->stvalid);
  if (VAR_9->stproc != ((void*)0)) {
   VAR_12 = FUNC_11();
   FUNC_6(&VAR_9->stvalid, VAR_4);
   FUNC_12(VAR_12);
   VAR_9->queued = 0;
  }
 }
 if (VAR_9->stproc == ((void*)0)) {

  if (VAR_13 == 0) {
   VAR_13 = 1;
   VAR_9->flag |= VAR_2;
   VAR_11 = FUNC_9(VAR_9, FUNC_2(VAR_10), VAR_1, "fw_read", VAR_3);
   VAR_9->flag &= ~VAR_2;
   if (VAR_11 == 0)
    goto readloop;
  } else if (VAR_13 == 1)
   VAR_11 = VAR_0;
  FUNC_3(VAR_10);
  return VAR_11;
 } else if (VAR_9->stproc != ((void*)0)) {

  FUNC_3(VAR_10);
  VAR_14 = (struct fw_pkt *)FUNC_8(VAR_9->buf,
      VAR_9->stproc->poffset + VAR_9->queued);
  if (VAR_10->irx_post != ((void*)0))
   VAR_10->irx_post(VAR_10, VAR_14->mode.ld);
  if (VAR_14->mode.stream.len == 0) {
   VAR_11 = VAR_0;
   return VAR_11;
  }
  VAR_11 = FUNC_15((caddr_t)VAR_14,
   VAR_14->mode.stream.len + sizeof(uint32_t), VAR_6);
  VAR_9->queued++;
  if (VAR_9->queued >= VAR_9->bnpacket) {
   VAR_12 = FUNC_11();
   FUNC_5(&VAR_9->stfree, VAR_9->stproc, VAR_4);
   FUNC_12(VAR_12);
   VAR_10->irx_enable(VAR_10, VAR_9->dmach);
   VAR_9->stproc = ((void*)0);
  }
  if (VAR_6->uio_resid >= VAR_9->psize) {
   VAR_13 = -1;
   FUNC_1(VAR_10);
   goto readloop;
  }
 }
 return VAR_11;
}
