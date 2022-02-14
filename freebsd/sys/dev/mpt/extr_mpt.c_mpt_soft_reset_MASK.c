
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mpt_softc*,int ,char*) ;
 int FUNC_3 (struct mpt_softc*,char*) ;
 int FUNC_4 (struct mpt_softc*) ;
 scalar_t__ FUNC_5 (struct mpt_softc*) ;
 scalar_t__ FUNC_6 (struct mpt_softc*,int ) ;
 int FUNC_7 (struct mpt_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct mpt_softc *VAR_8)
{

 FUNC_2(VAR_8, VAR_7, "soft reset\n");


 if (FUNC_1(FUNC_4(VAR_8)) != VAR_3) {
  FUNC_3(VAR_8, "soft reset failed: device not running\n");
  return (VAR_4);
 }





 if (FUNC_0(FUNC_4(VAR_8))) {
  FUNC_3(VAR_8, "soft reset failed: doorbell wedged\n");
  return (VAR_4);
 }


 FUNC_7(VAR_8, VAR_5,
     VAR_1 << VAR_0);
 if (FUNC_5(VAR_8) != VAR_6) {
  FUNC_3(VAR_8, "soft reset failed: ack timeout\n");
  return (VAR_4);
 }


 if (FUNC_6(VAR_8, VAR_2) != VAR_6) {
  FUNC_3(VAR_8, "soft reset failed: device did not restart\n");
  return (VAR_4);
 }

 return VAR_6;
}
