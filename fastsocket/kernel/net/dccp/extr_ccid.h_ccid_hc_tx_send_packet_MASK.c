
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int (* ccid_hc_tx_send_packet ) (struct sock*,struct sk_buff*) ;} ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct ccid *VAR_0, struct sock *VAR_1,
      struct sk_buff *VAR_2)
{
 int VAR_3 = 0;
 if (VAR_0->ccid_ops->ccid_hc_tx_send_packet != ((void*)0))
  VAR_3 = VAR_0->ccid_ops->ccid_hc_tx_send_packet(VAR_1, VAR_2);
 return VAR_3;
}
