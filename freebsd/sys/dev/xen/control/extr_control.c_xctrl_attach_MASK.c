
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* node; uintptr_t callback_data; int callback; } ;
struct xctrl_softc {TYPE_1__ xctrl_watch; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_0 ;
 struct xctrl_softc* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct xctrl_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_4);


 VAR_5->xctrl_watch.node = "control/shutdown";
 VAR_5->xctrl_watch.callback = VAR_2;
 VAR_5->xctrl_watch.callback_data = (uintptr_t)VAR_5;
 FUNC_3(&VAR_5->xctrl_watch);

 if (FUNC_2())
  FUNC_0(VAR_1, VAR_3, ((void*)0),
                        VAR_0);

 return (0);
}
