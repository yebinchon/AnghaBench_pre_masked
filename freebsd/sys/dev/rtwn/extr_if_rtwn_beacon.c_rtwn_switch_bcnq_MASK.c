
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int cur_bcnq_id; } ;


 int FUNC_0 (struct rtwn_softc*,int) ;
 int FUNC_1 (struct rtwn_softc*,int) ;
 int FUNC_2 (struct rtwn_softc*,int) ;

void
FUNC_3(struct rtwn_softc *VAR_0, int VAR_1)
{

 if (VAR_0->cur_bcnq_id != VAR_1) {

  (void) FUNC_1(VAR_0, VAR_0->cur_bcnq_id);


  FUNC_0(VAR_0, VAR_1);
  VAR_0->cur_bcnq_id = VAR_1;
 }


 FUNC_2(VAR_0, VAR_1);
}
