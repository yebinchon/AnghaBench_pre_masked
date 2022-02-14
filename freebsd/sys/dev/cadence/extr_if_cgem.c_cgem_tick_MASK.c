
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ rx_frames; } ;
struct cgem_softc {scalar_t__ rx_frames_prev; int net_ctl_shadow; int tick_ch; TYPE_1__ stats; scalar_t__ rxhangwar; int * miibus; } ;


 int FUNC_0 (struct cgem_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cgem_softc*,int ,int) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct cgem_softc*) ;
 int FUNC_4 (struct cgem_softc*) ;
 struct mii_data* FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct cgem_softc *VAR_4 = (struct cgem_softc *)VAR_3;
 struct mii_data *VAR_5;

 FUNC_0(VAR_4);


 if (VAR_4->miibus != ((void*)0)) {
  VAR_5 = FUNC_5(VAR_4->miibus);
  FUNC_6(VAR_5);
 }


 FUNC_4(VAR_4);


 if (VAR_4->rxhangwar && VAR_4->rx_frames_prev == VAR_4->stats.rx_frames) {





  FUNC_2(VAR_4, VAR_0, VAR_4->net_ctl_shadow &
      ~VAR_1);
  FUNC_1(1);
  FUNC_2(VAR_4, VAR_0, VAR_4->net_ctl_shadow);
 }
 VAR_4->rx_frames_prev = VAR_4->stats.rx_frames;


 FUNC_3(&VAR_4->tick_ch, VAR_2, FUNC_7, VAR_4);
}
