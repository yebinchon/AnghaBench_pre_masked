
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {int ifa_epoch_ctx; int ifa_refcnt; } ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct ifaddr *VAR_2)
{

 if (FUNC_1(&VAR_2->ifa_refcnt))
  FUNC_0(VAR_1, &VAR_2->ifa_epoch_ctx, VAR_0);
}
