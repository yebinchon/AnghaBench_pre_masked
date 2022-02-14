
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pqi_state; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct pqisrc_softstate*) ;
 int VAR_0 ;
 struct pqisrc_softstate* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct pqisrc_softstate *VAR_2;
 VAR_2 = FUNC_2(VAR_1);
 FUNC_0("IN\n");

 FUNC_1("Suspending the device %p\n", VAR_2);
 VAR_2->os_specific.pqi_state |= VAR_0;

 FUNC_0("OUT\n");
 return(0);
}
