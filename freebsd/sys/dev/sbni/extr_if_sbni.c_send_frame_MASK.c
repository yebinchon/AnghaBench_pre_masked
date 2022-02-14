
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
struct TYPE_2__ {int all_tx_number; int resend_tx_number; } ;
struct sbni_softc {int state; scalar_t__ framelen; scalar_t__ tx_frameno; TYPE_1__ in_stats; scalar_t__ trans_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sbni_softc*,int *) ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (struct sbni_softc*,int ) ;
 int FUNC_3 (struct sbni_softc*,int ,int) ;
 int FUNC_4 (struct sbni_softc*,int*,int) ;
 int FUNC_5 (struct sbni_softc*,int *) ;

__attribute__((used)) static void
FUNC_6(struct sbni_softc *VAR_6)
{
 u_int32_t VAR_7;
 u_char VAR_8;

 VAR_7 = VAR_0;
 if (VAR_6->state & VAR_2) {


  if (VAR_6->trans_errors) {
   VAR_6->trans_errors--;
   if (VAR_6->framelen != 0)
    VAR_6->in_stats.resend_tx_number++;
  } else {

   FUNC_1(VAR_6);
   goto do_send;
  }
 } else
  VAR_6->trans_errors = VAR_4;

 FUNC_5(VAR_6, &VAR_7);
 VAR_6->state |= VAR_2;






 if (VAR_6->framelen) {
  FUNC_0(VAR_6, &VAR_7);
  VAR_6->in_stats.all_tx_number++;
  VAR_6->state |= VAR_3;
 }

 FUNC_4(VAR_6, (u_char *)&VAR_7, sizeof VAR_7);

do_send:
 VAR_8 = FUNC_2(VAR_6, VAR_1);
 FUNC_3(VAR_6, VAR_1, VAR_8 & ~VAR_5);

 if (VAR_6->tx_frameno) {

  FUNC_3(VAR_6, VAR_1, VAR_8 | VAR_5);
 }
}
