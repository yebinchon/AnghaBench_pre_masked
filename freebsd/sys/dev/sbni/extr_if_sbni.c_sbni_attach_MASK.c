
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_char ;
struct sbni_softc {int cur_rxl_index; scalar_t__ delta_rxl; int enaddr; int lock; int wch; struct ifnet* ifp; } ;
struct sbni_flags {int rate; } ;
struct ifnet {int if_baudrate; int if_flags; int if_xname; int if_snd; int if_ioctl; int if_start; int if_init; struct sbni_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct ifnet*,int ) ;
 struct ifnet* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,char*,int) ;
 int FUNC_5 (struct ifnet*,char*,int ) ;
 int VAR_8 ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct sbni_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct sbni_softc*,int ,int ) ;
 int VAR_11 ;
 int FUNC_10 (struct sbni_softc*,struct sbni_flags) ;

int
FUNC_11(struct sbni_softc *VAR_12, int VAR_13, struct sbni_flags VAR_14)
{
 struct ifnet *VAR_15;
 u_char VAR_16;

 VAR_15 = VAR_12->ifp = FUNC_3(VAR_5);
 if (VAR_15 == ((void*)0))
  return (VAR_1);
 FUNC_9(VAR_12, VAR_0, 0);
 FUNC_10(VAR_12, VAR_14);


 VAR_15->if_softc = VAR_12;
 FUNC_4(VAR_15, "sbni", VAR_13);
 VAR_15->if_init = VAR_9;
 VAR_15->if_start = VAR_11;
 VAR_15->if_ioctl = VAR_10;
 FUNC_0(&VAR_15->if_snd, VAR_8);


 VAR_16 = FUNC_8(VAR_12, VAR_0);
 VAR_15->if_baudrate =
  (VAR_16 & 0x01 ? 500000 : 2000000) / (1 << VAR_14.rate);

 VAR_15->if_flags = VAR_2 | VAR_4 | VAR_3;

 FUNC_6(&VAR_12->lock, VAR_15->if_xname, VAR_7, VAR_6);
 FUNC_1(&VAR_12->wch, &VAR_12->lock, 0);
 FUNC_2(VAR_15, VAR_12->enaddr);


 FUNC_5(VAR_15, "speed %ju, rxl ", (uintmax_t)VAR_15->if_baudrate);
 if (VAR_12->delta_rxl)
  FUNC_7("auto\n");
 else
  FUNC_7("%d (fixed)\n", VAR_12->cur_rxl_index);
 return (0);
}
