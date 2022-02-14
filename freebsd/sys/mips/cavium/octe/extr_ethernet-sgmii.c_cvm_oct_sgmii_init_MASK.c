
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {int (* stop ) (struct ifnet*) ;int open; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;

int FUNC_3(struct ifnet *VAR_2)
{
 cvm_oct_private_t *VAR_3 = (cvm_oct_private_t *)VAR_2->if_softc;

 if (FUNC_0(VAR_2) != 0)
     return VAR_0;

 VAR_3->open = VAR_1;
 VAR_3->stop = FUNC_1;
 VAR_3->stop(VAR_2);


 return 0;
}
