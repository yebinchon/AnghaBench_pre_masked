
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_drv_flags; int if_flags; } ;
struct TYPE_3__ {int if_flags; int * miibus; int (* open ) (struct ifnet*) ;struct ifnet* ifp; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct ifnet *VAR_6;
 cvm_oct_private_t *VAR_7;

 VAR_7 = VAR_5;
 VAR_6 = VAR_7->ifp;

 if ((VAR_6->if_drv_flags & VAR_2) != 0)
  FUNC_6(VAR_7);

 if (VAR_7->open != ((void*)0))
  VAR_7->open(VAR_6);

 if (((VAR_6->if_flags ^ VAR_7->if_flags) & (VAR_0 | VAR_3 | VAR_4)) != 0)
  FUNC_3(VAR_6);

 FUNC_2(VAR_6, FUNC_0(VAR_6));

 FUNC_1(VAR_6);

 if (VAR_7->miibus != ((void*)0))
  FUNC_5(FUNC_4(VAR_7->miibus));

 VAR_6->if_drv_flags |= VAR_2;
 VAR_6->if_drv_flags &= ~VAR_1;
}
