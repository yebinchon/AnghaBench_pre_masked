
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sec_param {int dummy; } sec_param ;
struct rtwn_softc {scalar_t__ sc_ratectl; scalar_t__ vaps_running; scalar_t__ monvaps_running; int sc_calib_to; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int ,struct rtwn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_3, union sec_param *VAR_4)
{

 FUNC_2(VAR_3);


 if (VAR_3->sc_ratectl == VAR_0) {

  FUNC_1(VAR_3);
 }


 if (VAR_3->vaps_running > VAR_3->monvaps_running)
  FUNC_0(&VAR_3->sc_calib_to, 2*VAR_1, VAR_2, VAR_3);
}
