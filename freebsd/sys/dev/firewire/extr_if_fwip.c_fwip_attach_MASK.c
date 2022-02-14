
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


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; TYPE_4__ if_snd; int if_ioctl; int if_start; int if_init; TYPE_3__* if_softc; } ;
struct TYPE_9__ {struct ifnet* fwip_ifp; struct fwip_softc* fwip; } ;
struct TYPE_8__ {TYPE_5__* fc; int post_busreset; int * post_explore; int dev; } ;
struct fwip_softc {int dma_ch; TYPE_3__ fw_softc; TYPE_2__ fd; int start_send; int mtx; } ;
struct fw_hwaddr {scalar_t__ sspd; void* sender_unicast_FIFO_lo; int sender_unicast_FIFO_hi; int sender_max_rec; void* sender_unique_ID_lo; void* sender_unique_ID_hi; } ;
typedef int device_t ;
struct TYPE_12__ {struct fw_hwaddr fc_hwaddr; } ;
struct TYPE_7__ {int lo; int hi; } ;
struct TYPE_11__ {scalar_t__ speed; int maxrec; TYPE_1__ eui; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_1 (struct ifnet*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int ,struct fwip_softc*) ;
 int VAR_8 ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*,struct fw_hwaddr*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct ifnet* FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*,int ,int) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int
FUNC_15(device_t VAR_15)
{
 struct fwip_softc *VAR_16;
 struct ifnet *VAR_17;
 int VAR_18, VAR_19;
 struct fw_hwaddr *VAR_20;

 VAR_16 = ((struct fwip_softc *)FUNC_5(VAR_15));
 VAR_18 = FUNC_6(VAR_15);
 VAR_17 = VAR_16->fw_softc.fwip_ifp = FUNC_10(VAR_5);
 if (VAR_17 == ((void*)0))
  return (VAR_0);

 FUNC_12(&VAR_16->mtx, "fwip", ((void*)0), VAR_7);

 VAR_16->dma_ch = -1;

 VAR_16->fd.fc = FUNC_3(VAR_15);
 if (VAR_14 < 0)
  VAR_14 = VAR_16->fd.fc->speed;

 VAR_16->fd.dev = VAR_15;
 VAR_16->fd.post_explore = ((void*)0);
 VAR_16->fd.post_busreset = VAR_11;
 VAR_16->fw_softc.fwip = VAR_16;
 FUNC_2(&VAR_16->start_send, 0, VAR_13, VAR_16);




 VAR_20 = &FUNC_1(VAR_16->fw_softc.fwip_ifp)->fc_hwaddr;
 VAR_20->sender_unique_ID_hi = FUNC_8(VAR_16->fd.fc->eui.hi);
 VAR_20->sender_unique_ID_lo = FUNC_8(VAR_16->fd.fc->eui.lo);
 VAR_20->sender_max_rec = VAR_16->fd.fc->maxrec;
 VAR_20->sspd = VAR_16->fd.fc->speed;
 VAR_20->sender_unicast_FIFO_hi = FUNC_9((uint16_t)(VAR_6 >> 32));
 VAR_20->sender_unicast_FIFO_lo = FUNC_8((uint32_t)VAR_6);


 VAR_17->if_softc = &VAR_16->fw_softc;

 FUNC_11(VAR_17, FUNC_4(VAR_15), VAR_18);
 VAR_17->if_init = VAR_9;
 VAR_17->if_start = VAR_12;
 VAR_17->if_ioctl = VAR_10;
 VAR_17->if_flags = (VAR_2|VAR_4|VAR_3);
 VAR_17->if_snd.ifq_maxlen = VAR_8;




 VAR_19 = FUNC_13();
 FUNC_7(VAR_17, VAR_20);
 FUNC_14(VAR_19);

 FUNC_0(VAR_17, "interface created\n");
 return 0;
}
