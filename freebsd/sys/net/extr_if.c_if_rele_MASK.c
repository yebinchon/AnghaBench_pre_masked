
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_epoch_ctx; int if_refcount; } ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct ifnet *VAR_2)
{

 if (!FUNC_1(&VAR_2->if_refcount))
  return;
 FUNC_0(VAR_1, &VAR_2->if_epoch_ctx, VAR_0);
}
