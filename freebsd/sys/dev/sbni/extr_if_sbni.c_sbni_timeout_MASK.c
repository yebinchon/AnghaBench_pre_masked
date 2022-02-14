
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int timeout_number; } ;
struct sbni_softc {int wch; int csr1; scalar_t__ delta_rxl; TYPE_1__ in_stats; scalar_t__ timer_ticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sbni_softc*) ;
 int VAR_6 ;
 int FUNC_1 (int *,int,void (*) (void*),struct sbni_softc*) ;
 int VAR_7 ;
 int FUNC_2 (struct sbni_softc*,int ) ;
 int FUNC_3 (struct sbni_softc*,int ,int) ;
 int FUNC_4 (struct sbni_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_8)
{
 struct sbni_softc *VAR_9;
 u_char VAR_10;

 VAR_9 = (struct sbni_softc *)VAR_8;
 FUNC_0(VAR_9);

 VAR_10 = FUNC_2(VAR_9, VAR_1);
 if (VAR_10 & VAR_4) {

  if (VAR_9->timer_ticks) {
   if (VAR_10 & (VAR_5 | VAR_0))

    VAR_9->timer_ticks--;
  } else {
   VAR_9->in_stats.timeout_number++;
   if (VAR_9->delta_rxl)
    FUNC_4(VAR_9);

   FUNC_3(VAR_9, VAR_2, *(u_char *)&VAR_9->csr1 | VAR_3);
   VAR_10 = FUNC_2(VAR_9, VAR_1);
  }
 }

 FUNC_3(VAR_9, VAR_1, VAR_10 | VAR_4);
 FUNC_1(&VAR_9->wch, VAR_7/VAR_6, FUNC_5, VAR_9);
}
