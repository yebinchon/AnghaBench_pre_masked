
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timecounter {struct dmtpps_softc* tc_priv; } ;
struct TYPE_3__ {int capcount; } ;
struct dmtpps_softc {int pps_mtx; TYPE_1__ pps_state; } ;


 int FUNC_0 (struct dmtpps_softc*,int ) ;
 int FUNC_1 (struct dmtpps_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_6(struct timecounter *VAR_5)
{
 struct dmtpps_softc *VAR_6;

 VAR_6 = VAR_5->tc_priv;
 if (FUNC_0(VAR_6, VAR_1) & VAR_2) {
  FUNC_4(&VAR_6->pps_state);
  VAR_6->pps_state.capcount = FUNC_0(VAR_6, VAR_3);
  FUNC_1(VAR_6, VAR_0, VAR_2);

  FUNC_2(&VAR_6->pps_mtx);
  FUNC_5(&VAR_6->pps_state, VAR_4);
  FUNC_3(&VAR_6->pps_mtx);
 }
}
