
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic_softc {int unit; TYPE_1__* platform_data; } ;
struct TYPE_2__ {int recovery_thread; } ;


 int FUNC_0 (int ,struct aic_softc*,int *,int ,int ,char*,int ) ;
 int VAR_0 ;

int
FUNC_1(struct aic_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1,
          &VAR_1->platform_data->recovery_thread,
                   0, 0, "aic_recovery%d",
          VAR_1->unit);
 return (VAR_2);
}
