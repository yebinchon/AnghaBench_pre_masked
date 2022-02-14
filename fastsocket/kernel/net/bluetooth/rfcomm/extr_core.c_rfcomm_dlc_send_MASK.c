
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rfcomm_dlc {scalar_t__ state; int mtu; int flags; int tx_queue; int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_dlc*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct rfcomm_dlc *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7 = VAR_6->len;

 if (VAR_5->state != VAR_0)
  return -VAR_2;

 FUNC_0("dlc %p mtu %d len %d", VAR_5, VAR_5->mtu, VAR_7);

 if (VAR_7 > VAR_5->mtu)
  return -VAR_1;

 FUNC_1(VAR_6, VAR_5->addr);
 FUNC_3(&VAR_5->tx_queue, VAR_6);

 if (!FUNC_4(VAR_4, &VAR_5->flags))
  FUNC_2(VAR_3);
 return VAR_7;
}
