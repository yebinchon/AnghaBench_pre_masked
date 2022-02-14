
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct arm_tmr_softc {int memrid; int clkfreq; int dev; int * gbl_mem; } ;
struct TYPE_4__ {struct arm_tmr_softc* tc_priv; int tc_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct arm_tmr_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct arm_tmr_softc *VAR_8)
{
 int VAR_9;

 if (VAR_6 != ((void*)0))
  return (VAR_0);

 VAR_9 = VAR_8->memrid;
 VAR_8->gbl_mem = FUNC_0(VAR_8->dev, VAR_5, &VAR_9,
     VAR_4);
 if (VAR_8->gbl_mem == ((void*)0)) {
  FUNC_1(VAR_8->dev, "could not allocate gbl mem resources\n");
  return (VAR_1);
 }
 FUNC_3(VAR_8, VAR_2, 0x00000000);

 VAR_7.tc_frequency = VAR_8->clkfreq;
 VAR_7.tc_priv = VAR_8;
 FUNC_2(&VAR_7);
 VAR_6 = &VAR_7;

 FUNC_3(VAR_8, VAR_2, VAR_3);

 return (0);
}
