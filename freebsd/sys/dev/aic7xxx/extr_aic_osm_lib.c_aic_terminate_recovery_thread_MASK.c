
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic_softc {TYPE_1__* platform_data; int flags; } ;
struct TYPE_2__ {int mtx; int * recovery_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int ,char*,int ) ;
 int FUNC_1 (struct aic_softc*) ;

void
FUNC_2(struct aic_softc *VAR_2)
{

 if (VAR_2->platform_data->recovery_thread == ((void*)0)) {
  return;
 }
 VAR_2->flags |= VAR_0;
 FUNC_1(VAR_2);




 FUNC_0(VAR_2->platform_data, &VAR_2->platform_data->mtx, VAR_1, "thtrm", 0);
}
