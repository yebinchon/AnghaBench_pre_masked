
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_info {int dummy; } ;
struct sock {int dummy; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int (* ccid_hc_tx_get_info ) (struct sock*,struct tcp_info*) ;} ;


 int FUNC_0 (struct sock*,struct tcp_info*) ;

__attribute__((used)) static inline void FUNC_1(struct ccid *VAR_0, struct sock *VAR_1,
           struct tcp_info *VAR_2)
{
 if (VAR_0->ccid_ops->ccid_hc_tx_get_info != ((void*)0))
  VAR_0->ccid_ops->ccid_hc_tx_get_info(VAR_1, VAR_2);
}
