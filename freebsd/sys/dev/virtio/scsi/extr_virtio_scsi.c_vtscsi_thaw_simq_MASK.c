
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_frozen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vtscsi_softc*,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct vtscsi_softc *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->vtscsi_frozen == 0 || VAR_6 == 0)
  return (0);

 if (VAR_6 & VAR_3 &&
     VAR_5->vtscsi_frozen & VAR_0)
  VAR_5->vtscsi_frozen &= ~VAR_0;

 if (VAR_6 & VAR_4 &&
     VAR_5->vtscsi_frozen & VAR_1)
  VAR_5->vtscsi_frozen &= ~VAR_1;

 VAR_7 = VAR_5->vtscsi_frozen == 0;
 if (VAR_7 != 0)
  FUNC_0(VAR_5, VAR_2, "SIMQ thawed\n");

 return (VAR_7);
}
