
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_flags; int vtscsi_dev; int vtscsi_sim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vtscsi_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct vtscsi_softc*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct vtscsi_softc*) ;
 int FUNC_4 (struct vtscsi_softc*) ;
 int FUNC_5 (struct vtscsi_softc*) ;
 int FUNC_6 (struct vtscsi_softc*) ;
 scalar_t__ FUNC_7 (struct vtscsi_softc*,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct vtscsi_softc *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_7);

 if (VAR_6 != 0) {
  FUNC_1(VAR_7->vtscsi_dev, "bus reset disabled\n");
  return (0);
 }

 VAR_7->vtscsi_flags |= VAR_3;






 FUNC_6(VAR_7);
 FUNC_3(VAR_7);


 FUNC_4(VAR_7);





 if (FUNC_7(VAR_7, VAR_4 | VAR_5) != 0)
  FUNC_8(VAR_7->vtscsi_sim, 0);

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_7->vtscsi_dev,
      "reinitialization failed, stopping device...\n");
  FUNC_6(VAR_7);
 } else
  FUNC_2(VAR_7, VAR_0, VAR_2,
      VAR_1);

 VAR_7->vtscsi_flags &= ~VAR_3;

 return (VAR_8);
}
