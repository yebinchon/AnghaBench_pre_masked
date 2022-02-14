
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct vtbe_softc {int hdrsize; int is_attached; struct ifnet* ifp; int dev; int pio_recv; int pio_send; int beri_mem_offset; int mtx; int * res; int bsh; int bst; } ;
struct virtio_net_hdr {int dummy; } ;
struct TYPE_3__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; TYPE_1__ if_snd; int if_init; int if_ioctl; int if_start; int if_capabilities; int if_capenable; struct vtbe_softc* if_softc; int if_baudrate; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct vtbe_softc*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct vtbe_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct ifnet*,int *) ;
 int FUNC_11 (int) ;
 struct ifnet* FUNC_12 (int ) ;
 int FUNC_13 (struct ifnet*,int ,int ) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,char*,int *) ;
 scalar_t__ FUNC_19 (struct vtbe_softc*,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int
FUNC_20(device_t VAR_21)
{
 uint8_t VAR_22[VAR_2];
 struct vtbe_softc *VAR_23;
 struct ifnet *VAR_24;
 int VAR_25;

 VAR_23 = FUNC_7(VAR_21);
 VAR_23->dev = VAR_21;

 VAR_23->hdrsize = sizeof(struct virtio_net_hdr);

 if (FUNC_4(VAR_21, VAR_19, VAR_23->res)) {
  FUNC_9(VAR_21, "could not allocate resources\n");
  return (VAR_1);
 }


 VAR_23->bst = FUNC_16(VAR_23->res[0]);
 VAR_23->bsh = FUNC_15(VAR_23->res[0]);

 FUNC_14(&VAR_23->mtx, FUNC_6(VAR_23->dev),
     VAR_10, VAR_9);

 if (FUNC_17(VAR_21, &VAR_23->beri_mem_offset) != 0)
  return (VAR_1);
 if (FUNC_18(VAR_21, "pio-send", &VAR_23->pio_send) != 0)
  return (VAR_1);
 if (FUNC_18(VAR_21, "pio-recv", &VAR_23->pio_recv) != 0)
  return (VAR_1);




 VAR_25 = FUNC_11(VAR_12);
 FUNC_3(VAR_23, VAR_13, VAR_25);


 VAR_25 = FUNC_11(VAR_0);
 FUNC_3(VAR_23, VAR_15, VAR_25);


 VAR_25 = FUNC_11(VAR_16 |
       VAR_11);
 FUNC_3(VAR_23, VAR_14, VAR_25);


 if (FUNC_19(VAR_23, VAR_22)) {
  FUNC_9(VAR_23->dev, "can't get mac\n");
  return (VAR_1);
 }


 VAR_23->ifp = VAR_24 = FUNC_12(VAR_8);
 VAR_24->if_baudrate = FUNC_2(10);
 VAR_24->if_softc = VAR_23;
 FUNC_13(VAR_24, FUNC_5(VAR_21), FUNC_8(VAR_21));
 VAR_24->if_flags = (VAR_4 | VAR_7 |
    VAR_5 | VAR_6);
 VAR_24->if_capabilities = VAR_3;
 VAR_24->if_capenable = VAR_24->if_capabilities;
 VAR_24->if_start = VAR_20;
 VAR_24->if_ioctl = VAR_18;
 VAR_24->if_init = VAR_17;
 FUNC_0(&VAR_24->if_snd, VAR_0 - 1);
 VAR_24->if_snd.ifq_drv_maxlen = VAR_0 - 1;
 FUNC_1(&VAR_24->if_snd);
 VAR_24->if_hdrlen = sizeof(struct ether_vlan_header);


 FUNC_10(VAR_24, VAR_22);

 VAR_23->is_attached = 1;

 return (0);
}
