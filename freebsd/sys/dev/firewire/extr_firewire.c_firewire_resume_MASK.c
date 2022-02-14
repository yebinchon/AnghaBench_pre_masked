
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firewire_softc {TYPE_1__* fc; } ;
typedef int device_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct firewire_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct firewire_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->fc->status = VAR_0;

 FUNC_0(VAR_1);

 return (0);
}
