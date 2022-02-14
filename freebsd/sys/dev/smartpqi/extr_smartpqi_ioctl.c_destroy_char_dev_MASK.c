
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cdev; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct pqisrc_softstate *VAR_0)
{
 FUNC_0("IN\n");
 if (VAR_0->os_specific.cdev) {
  FUNC_1(VAR_0->os_specific.cdev);
  VAR_0->os_specific.cdev = ((void*)0);
 }
 FUNC_0("OUT\n");
}
