
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ mqrx_supported; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwm_softc*,int ,int ) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (struct iwm_softc*) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*) ;
 int FUNC_6 (struct iwm_softc*,int ,int ) ;

int
FUNC_7(struct iwm_softc *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_5(VAR_4)) != 0)
  return VAR_5;


 FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_0(5000);

 if ((VAR_5 = FUNC_2(VAR_4)) != 0)
  return VAR_5;


 if (VAR_4->cfg->mqrx_supported)
  FUNC_6(VAR_4, VAR_2, VAR_3);

 FUNC_4(VAR_4);
 FUNC_3(VAR_4);

 return 0;
}
