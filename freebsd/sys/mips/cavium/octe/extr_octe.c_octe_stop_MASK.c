
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int (* stop ) (struct ifnet*) ;struct ifnet* ifp; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct ifnet *VAR_2;
 cvm_oct_private_t *VAR_3;

 VAR_3 = VAR_1;
 VAR_2 = VAR_3->ifp;

 if ((VAR_2->if_drv_flags & VAR_0) == 0)
  return;

 if (VAR_3->stop != ((void*)0))
  VAR_3->stop(VAR_2);

 VAR_2->if_drv_flags &= ~VAR_0;
}
