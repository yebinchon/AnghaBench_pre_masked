
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_rxstat_ring {int rsr_dmap; int rsr_dtag; int rsr_stat; } ;
struct et_rxstatus_data {int rxsd_dmap; int rxsd_dtag; int rxsd_status; } ;
struct et_softc {struct et_rxstat_ring sc_rxstat_ring; struct et_rxstatus_data sc_rx_status; int ifp; struct et_rxbuf_data* sc_rx_data; } ;
struct et_rxstatus {int dummy; } ;
struct et_rxbuf_data {int (* rbd_newbuf ) (struct et_rxbuf_data*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (struct et_rxbuf_data*,int) ;

__attribute__((used)) static int
FUNC_4(struct et_softc *VAR_5)
{
 struct et_rxstatus_data *VAR_6;
 struct et_rxstat_ring *VAR_7;
 struct et_rxbuf_data *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
  VAR_8 = &VAR_5->sc_rx_data[VAR_11];
  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
   VAR_10 = VAR_8->rbd_newbuf(VAR_8, VAR_9);
   if (VAR_10) {
    FUNC_2(VAR_5->ifp, "%d ring %d buf, "
       "newbuf failed: %d\n", VAR_11, VAR_9, VAR_10);
    return (VAR_10);
   }
  }
 }

 VAR_6 = &VAR_5->sc_rx_status;
 FUNC_1(VAR_6->rxsd_status, sizeof(struct et_rxstatus));
 FUNC_0(VAR_6->rxsd_dtag, VAR_6->rxsd_dmap,
     VAR_0 | VAR_1);

 VAR_7 = &VAR_5->sc_rxstat_ring;
 FUNC_1(VAR_7->rsr_stat, VAR_2);
 FUNC_0(VAR_7->rsr_dtag, VAR_7->rsr_dmap,
     VAR_0 | VAR_1);

 return (0);
}
