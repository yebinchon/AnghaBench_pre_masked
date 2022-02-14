
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lance_softc {int sc_nsupmedia; int sc_memsize; int sc_nrbuf; int sc_ntbuf; int sc_media; int sc_defaultmedia; int * sc_supmedia; int sc_mtx; int sc_wdog_ch; struct ifnet* sc_ifp; } ;
struct TYPE_3__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; TYPE_1__ if_snd; int if_baudrate; int if_init; int if_ioctl; int if_start; struct lance_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (struct lance_softc*) ;
 scalar_t__ FUNC_5 (struct lance_softc*) ;
 int FUNC_6 (struct lance_softc*) ;
 int FUNC_7 (int *,int *,int ) ;
 struct ifnet* FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*,char const*,int) ;
 int FUNC_10 (struct ifnet*,char*,int,int) ;
 int FUNC_11 (int *,int ,int ,int *) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (struct lance_softc*) ;

int
FUNC_15(struct lance_softc *VAR_15, const char* VAR_16, int VAR_17)
{
 struct ifnet *VAR_18;
 int VAR_19, VAR_20;

 if (FUNC_5(VAR_15) == 0)
  return (VAR_1);

 VAR_18 = VAR_15->sc_ifp = FUNC_8(VAR_7);
 if (VAR_18 == ((void*)0))
  return (VAR_0);

 FUNC_7(&VAR_15->sc_wdog_ch, &VAR_15->sc_mtx, 0);


 VAR_18->if_softc = VAR_15;
 FUNC_9(VAR_18, VAR_16, VAR_17);
 VAR_18->if_start = VAR_14;
 VAR_18->if_ioctl = VAR_11;
 VAR_18->if_init = VAR_10;
 VAR_18->if_flags = VAR_2 | VAR_4 | VAR_3;



 VAR_18->if_baudrate = FUNC_3(10);
 FUNC_1(&VAR_18->if_snd, VAR_9);
 VAR_18->if_snd.ifq_drv_maxlen = VAR_9;
 FUNC_2(&VAR_18->if_snd);


 FUNC_12(&VAR_15->sc_media, 0, VAR_12, VAR_13);
 if (VAR_15->sc_supmedia != ((void*)0)) {
  for (VAR_19 = 0; VAR_19 < VAR_15->sc_nsupmedia; VAR_19++)
   FUNC_11(&VAR_15->sc_media, VAR_15->sc_supmedia[VAR_19], 0, ((void*)0));
  FUNC_13(&VAR_15->sc_media, VAR_15->sc_defaultmedia);
 } else {
  FUNC_11(&VAR_15->sc_media,
      FUNC_0(VAR_5, VAR_6, 0, 0), 0, ((void*)0));
  FUNC_13(&VAR_15->sc_media,
      FUNC_0(VAR_5, VAR_6, 0, 0));
 }

 switch (VAR_15->sc_memsize) {
 case 8192:
  VAR_15->sc_nrbuf = 4;
  VAR_15->sc_ntbuf = 1;
  break;
 case 16384:
  VAR_15->sc_nrbuf = 8;
  VAR_15->sc_ntbuf = 2;
  break;
 case 32768:
  VAR_15->sc_nrbuf = 16;
  VAR_15->sc_ntbuf = 4;
  break;
 case 65536:
  VAR_15->sc_nrbuf = 32;
  VAR_15->sc_ntbuf = 8;
  break;
 case 131072:
  VAR_15->sc_nrbuf = 64;
  VAR_15->sc_ntbuf = 16;
  break;
 case 262144:
  VAR_15->sc_nrbuf = 128;
  VAR_15->sc_ntbuf = 32;
  break;
 default:

  VAR_20 = VAR_15->sc_memsize / VAR_8;
  VAR_15->sc_ntbuf = VAR_20 / 5;
  VAR_15->sc_nrbuf = VAR_20 - VAR_15->sc_ntbuf;
 }

 FUNC_10(VAR_18, "%d receive buffers, %d transmit buffers\n",
     VAR_15->sc_nrbuf, VAR_15->sc_ntbuf);


 FUNC_4(VAR_15);
 FUNC_14(VAR_15);
 FUNC_6(VAR_15);

 return (0);
}
