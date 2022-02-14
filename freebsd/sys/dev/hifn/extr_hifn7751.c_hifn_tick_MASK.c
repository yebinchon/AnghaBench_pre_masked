
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hifn_softc {scalar_t__ sc_active; scalar_t__ sc_cmdu; scalar_t__ sc_srcu; scalar_t__ sc_dstu; scalar_t__ sc_resu; int sc_tickto; scalar_t__ sc_r_busy; scalar_t__ sc_d_busy; scalar_t__ sc_s_busy; scalar_t__ sc_c_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hifn_softc*) ;
 int FUNC_1 (struct hifn_softc*) ;
 int FUNC_2 (struct hifn_softc*,int ,int) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct hifn_softc*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(void* VAR_6)
{
 struct hifn_softc *VAR_7 = VAR_6;

 FUNC_0(VAR_7);
 if (VAR_7->sc_active == 0) {
  u_int32_t VAR_8 = 0;

  if (VAR_7->sc_cmdu == 0 && VAR_7->sc_c_busy) {
   VAR_7->sc_c_busy = 0;
   VAR_8 |= VAR_1;
  }
  if (VAR_7->sc_srcu == 0 && VAR_7->sc_s_busy) {
   VAR_7->sc_s_busy = 0;
   VAR_8 |= VAR_4;
  }
  if (VAR_7->sc_dstu == 0 && VAR_7->sc_d_busy) {
   VAR_7->sc_d_busy = 0;
   VAR_8 |= VAR_2;
  }
  if (VAR_7->sc_resu == 0 && VAR_7->sc_r_busy) {
   VAR_7->sc_r_busy = 0;
   VAR_8 |= VAR_3;
  }
  if (VAR_8)
   FUNC_2(VAR_7, VAR_0, VAR_8);
 } else
  VAR_7->sc_active--;
 FUNC_1(VAR_7);
 FUNC_3(&VAR_7->sc_tickto, VAR_5, FUNC_4, VAR_7);
}
