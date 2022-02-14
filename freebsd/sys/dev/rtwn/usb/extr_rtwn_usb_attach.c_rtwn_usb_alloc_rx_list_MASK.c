
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {int uc_rx_buf_size; int * uc_rx; int uc_rx_inactive; int uc_rx_active; } ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct rtwn_softc*,int *,int,int) ;

__attribute__((used)) static int
FUNC_4(struct rtwn_softc *VAR_3)
{
 struct rtwn_usb_softc *VAR_4 = FUNC_0(VAR_3);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_3, VAR_4->uc_rx, VAR_1,
     VAR_4->uc_rx_buf_size * VAR_0);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_1(&VAR_4->uc_rx_active);
 FUNC_1(&VAR_4->uc_rx_inactive);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_2(&VAR_4->uc_rx_inactive, &VAR_4->uc_rx[VAR_6], VAR_2);

 return (0);
}
