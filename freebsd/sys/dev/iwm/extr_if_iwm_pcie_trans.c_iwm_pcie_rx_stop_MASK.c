
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ mqrx_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwm_softc*,int ,int ) ;
 scalar_t__ FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (struct iwm_softc*,int ,int ,int ,int) ;
 int FUNC_4 (struct iwm_softc*,int ,int ,int ,int) ;
 int FUNC_5 (struct iwm_softc*,int ,int ) ;

int
FUNC_6(struct iwm_softc *VAR_6)
{
 int VAR_7;

 VAR_7 = 0;
 if (FUNC_1(VAR_6)) {
  if (VAR_6->cfg->mqrx_supported) {
   FUNC_5(VAR_6, VAR_4, 0);
   VAR_7 = FUNC_4(VAR_6, VAR_3,
       VAR_5, VAR_5, 1000);
  } else {
   FUNC_0(VAR_6, VAR_0, 0);
   VAR_7 = FUNC_3(VAR_6, VAR_1,
       VAR_2,
       VAR_2,
       1000);
  }
  FUNC_2(VAR_6);
 }
 return VAR_7;
}
