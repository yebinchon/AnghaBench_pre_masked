
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_epoch_ctx; int if_refcount; int if_index; int if_xname; int if_vnet; int if_flags; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 struct ifnet* FUNC_7 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int *) ;

void
FUNC_9(struct ifnet *VAR_3)
{

 VAR_3->if_flags |= VAR_0;

 FUNC_1(VAR_3->if_vnet);
 FUNC_2();
 FUNC_4(VAR_3 == FUNC_7(VAR_3->if_index),
     ("%s: freeing unallocated ifnet", VAR_3->if_xname));

 FUNC_6(VAR_3->if_index);
 FUNC_3();

 if (FUNC_8(&VAR_3->if_refcount))
  FUNC_5(VAR_2, &VAR_3->if_epoch_ctx, VAR_1);
 FUNC_0();
}
