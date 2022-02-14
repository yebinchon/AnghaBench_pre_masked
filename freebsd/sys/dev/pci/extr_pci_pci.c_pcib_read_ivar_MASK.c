
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t sec; } ;
struct pcib_softc {uintptr_t domain; TYPE_1__ bus; } ;
typedef int device_t ;


 int VAR_0 ;


 struct pcib_softc* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
    struct pcib_softc *VAR_5 = FUNC_0(VAR_1);

    switch (VAR_3) {
    case 128:
 *VAR_4 = VAR_5->domain;
 return(0);
    case 129:
 *VAR_4 = VAR_5->bus.sec;
 return(0);
    }
    return(VAR_0);
}
