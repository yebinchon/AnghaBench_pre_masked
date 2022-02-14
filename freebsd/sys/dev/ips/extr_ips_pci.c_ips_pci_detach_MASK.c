
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queue; scalar_t__ configured; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int device_t ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(device_t VAR_2)
{
        ips_softc_t *VAR_3;
        FUNC_0(1, VAR_2, "detaching ServeRaid\n");
        VAR_3 = (ips_softc_t *) FUNC_2(VAR_2);
 if (VAR_3->configured) {
  VAR_3->configured = 0;
  FUNC_4(VAR_3);
  if(FUNC_3(VAR_3))
   return VAR_0;
  FUNC_5(VAR_3);
  FUNC_1(&VAR_3->queue, ((void*)0), VAR_1);
 }
 return 0;
}
