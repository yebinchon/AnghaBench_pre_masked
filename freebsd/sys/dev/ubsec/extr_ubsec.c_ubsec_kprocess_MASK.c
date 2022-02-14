
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsec_softc {int sc_flags; int sc_dev; int sc_q2free; } ;
struct ubsec_q2 {int dummy; } ;
struct cryptkop {int krp_op; int krp_status; int * krp_callback; } ;
typedef int device_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ubsec_q2* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct cryptkop*) ;
 struct ubsec_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_6 (struct ubsec_softc*,struct ubsec_q2*) ;
 int FUNC_7 (struct ubsec_softc*,struct cryptkop*,int) ;
 int FUNC_8 (struct ubsec_softc*,struct cryptkop*,int) ;
 int FUNC_9 (struct ubsec_softc*,struct cryptkop*,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4, struct cryptkop *VAR_5, int VAR_6)
{
 struct ubsec_softc *VAR_7 = FUNC_4(VAR_4);
 int VAR_8;

 if (VAR_5 == ((void*)0) || VAR_5->krp_callback == ((void*)0))
  return (VAR_0);

 while (!FUNC_0(&VAR_7->sc_q2free)) {
  struct ubsec_q2 *VAR_9;

  VAR_9 = FUNC_1(&VAR_7->sc_q2free);
  FUNC_2(&VAR_7->sc_q2free, VAR_3);
  FUNC_6(VAR_7, VAR_9);
 }

 switch (VAR_5->krp_op) {
 case 129:
  if (VAR_7->sc_flags & VAR_2)
   VAR_8 = FUNC_7(VAR_7, VAR_5, VAR_6);
  else
   VAR_8 = FUNC_8(VAR_7, VAR_5, VAR_6);
  break;
 case 128:
  return (FUNC_9(VAR_7, VAR_5, VAR_6));
 default:
  FUNC_5(VAR_7->sc_dev, "kprocess: invalid op 0x%x\n",
      VAR_5->krp_op);
  VAR_5->krp_status = VAR_1;
  FUNC_3(VAR_5);
  return (0);
 }
 return (0);
}
