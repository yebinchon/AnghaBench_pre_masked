
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_13__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; TYPE_6__ if_snd; int if_ioctl; int if_start; int if_init; TYPE_5__* if_softc; } ;
struct TYPE_12__ {struct ifnet* ifp; struct fwe_softc* fwe; } ;
struct TYPE_11__ {TYPE_7__* fc; int * post_explore; int dev; } ;
struct TYPE_8__ {int chtag; scalar_t__ sy; int tcode; } ;
struct TYPE_9__ {TYPE_1__ stream; } ;
struct TYPE_10__ {TYPE_2__ mode; } ;
struct fwe_softc {int dma_ch; TYPE_5__ eth_softc; TYPE_4__ fd; int stream_ch; TYPE_3__ pkt_hdr; int mtx; } ;
struct fw_eui64 {int dummy; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;
struct TYPE_14__ {scalar_t__ speed; struct fw_eui64 eui; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct fw_eui64*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct fwe_softc*,int) ;
 TYPE_7__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ifnet*,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct ifnet* FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (char*,int,int,int,int,int,int,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int
FUNC_15(device_t VAR_17)
{
 struct fwe_softc *VAR_18;
 struct ifnet *VAR_19;
 int VAR_20, VAR_21;
 u_char VAR_22[6];
 struct fw_eui64 *VAR_23;

 VAR_18 = ((struct fwe_softc *)FUNC_5(VAR_17));
 VAR_20 = FUNC_6(VAR_17);

 FUNC_2(VAR_18, sizeof(struct fwe_softc));
 FUNC_11(&VAR_18->mtx, "fwe", ((void*)0), VAR_10);

 VAR_18->stream_ch = VAR_15;
 VAR_18->dma_ch = -1;

 VAR_18->fd.fc = FUNC_3(VAR_17);
 if (VAR_16 < 0)
  VAR_16 = VAR_18->fd.fc->speed;

 VAR_18->fd.dev = VAR_17;
 VAR_18->fd.post_explore = ((void*)0);
 VAR_18->eth_softc.fwe = VAR_18;

 VAR_18->pkt_hdr.mode.stream.tcode = VAR_1;
 VAR_18->pkt_hdr.mode.stream.sy = 0;
 VAR_18->pkt_hdr.mode.stream.chtag = VAR_18->stream_ch;





 VAR_23 = &VAR_18->fd.fc->eui;
 VAR_22[0] = (FUNC_1(VAR_23, 0) | (0x02)) & ~(0x01);
 VAR_22[1] = FUNC_1(VAR_23, 1);
 VAR_22[2] = FUNC_1(VAR_23, 2);
 VAR_22[3] = FUNC_1(VAR_23, 5);
 VAR_22[4] = FUNC_1(VAR_23, 6);
 VAR_22[5] = FUNC_1(VAR_23, 7);
 FUNC_12("if_fwe%d: Fake Ethernet address: "
  "%02x:%02x:%02x:%02x:%02x:%02x\n", VAR_20,
  VAR_22[0], VAR_22[1], VAR_22[2], VAR_22[3], VAR_22[4], VAR_22[5]);


 VAR_19 = VAR_18->eth_softc.ifp = FUNC_9(VAR_8);
 if (VAR_19 == ((void*)0)) {
  FUNC_7(VAR_17, "can not if_alloc()\n");
  return (VAR_0);
 }
 VAR_19->if_softc = &VAR_18->eth_softc;

 FUNC_10(VAR_19, FUNC_4(VAR_17), VAR_20);
 VAR_19->if_init = VAR_12;
 VAR_19->if_start = VAR_14;
 VAR_19->if_ioctl = VAR_13;
 VAR_19->if_flags = (VAR_5|VAR_7|VAR_6);
 VAR_19->if_snd.ifq_maxlen = VAR_11;

 VAR_21 = FUNC_13();
 FUNC_8(VAR_19, VAR_22);
 FUNC_14(VAR_21);


 VAR_19->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_19->if_capabilities |= VAR_4 | VAR_3;
 VAR_19->if_capenable |= VAR_4;

 FUNC_0(VAR_19, "interface created\n");
 return 0;
}
