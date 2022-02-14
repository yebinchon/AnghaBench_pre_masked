
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int sc_dev; int * sc_rx_pool; int sc_rx_bpid; int * sc_rx_zone; int sc_rx_zname; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int *,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,struct dtsec_softc*,int *,int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_6 ;
 int FUNC_4 (struct dtsec_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int,char*,char*) ;
 int * FUNC_6 (int ,scalar_t__,int *,int *,int *,int *,scalar_t__,int ) ;

int
FUNC_7(struct dtsec_softc *VAR_9)
{


 FUNC_0(VAR_4 < VAR_5);

 FUNC_5(VAR_9->sc_rx_zname, sizeof(VAR_9->sc_rx_zname), "%s: RX Buffers",
     FUNC_2(VAR_9->sc_dev));

 VAR_9->sc_rx_zone = FUNC_6(VAR_9->sc_rx_zname, VAR_4, ((void*)0),
     ((void*)0), ((void*)0), ((void*)0), VAR_4 - 1, 0);
 if (VAR_9->sc_rx_zone == ((void*)0))
  return (VAR_3);

 VAR_9->sc_rx_pool = FUNC_1(&VAR_9->sc_rx_bpid, VAR_4,
     0, 0, VAR_2, VAR_7,
     VAR_8, VAR_1,
     VAR_0, 0, 0, VAR_6, VAR_9, ((void*)0),
     ((void*)0));
 if (VAR_9->sc_rx_pool == ((void*)0)) {
  FUNC_3(VAR_9->sc_dev, "NULL rx pool  somehow\n");
  FUNC_4(VAR_9);
  return (VAR_3);
 }

 return (0);
}
