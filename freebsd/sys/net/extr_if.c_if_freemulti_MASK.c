
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmultiaddr {scalar_t__ ifma_refcount; int ifma_epoch_ctx; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(struct ifmultiaddr *VAR_2)
{
 FUNC_0(VAR_2->ifma_refcount == 0, ("if_freemulti_epoch: refcount %d",
     VAR_2->ifma_refcount));

 FUNC_1(VAR_1, &VAR_2->ifma_epoch_ctx, VAR_0);
}
