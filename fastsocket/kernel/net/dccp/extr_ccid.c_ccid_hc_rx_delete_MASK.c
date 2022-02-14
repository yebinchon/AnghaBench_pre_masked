
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int ccid_hc_rx_slab; int (* ccid_hc_rx_exit ) (struct sock*) ;} ;


 int FUNC_0 (int ,struct ccid*) ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct ccid *VAR_0, struct sock *VAR_1)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->ccid_ops->ccid_hc_rx_exit != ((void*)0))
   VAR_0->ccid_ops->ccid_hc_rx_exit(VAR_1);
  FUNC_0(VAR_0->ccid_ops->ccid_hc_rx_slab, VAR_0);
 }
}
