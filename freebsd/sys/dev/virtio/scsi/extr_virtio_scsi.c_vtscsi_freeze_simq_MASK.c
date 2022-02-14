
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_frozen; int vtscsi_sim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vtscsi_softc*,int ,char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct vtscsi_softc *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_5->vtscsi_frozen;

 if (VAR_6 & VAR_3 &&
     (VAR_5->vtscsi_frozen & VAR_0) == 0)
  VAR_5->vtscsi_frozen |= VAR_0;

 if (VAR_6 & VAR_4 &&
     (VAR_5->vtscsi_frozen & VAR_1) == 0)
  VAR_5->vtscsi_frozen |= VAR_1;


 if (VAR_7 == 0 && VAR_5->vtscsi_frozen != 0) {
  FUNC_0(VAR_5, VAR_2, "SIMQ frozen\n");
  FUNC_1(VAR_5->vtscsi_sim, 1);
 }
}
