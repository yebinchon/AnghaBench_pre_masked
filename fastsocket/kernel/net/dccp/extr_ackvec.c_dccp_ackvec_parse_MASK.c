
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dccps_hc_rx_ackvec; } ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int ,struct sock*,int *,scalar_t__ const,scalar_t__ const*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

int FUNC_2(struct sock *VAR_1, const struct sk_buff *VAR_2,
        u64 *VAR_3, const u8 VAR_4, const u8 *VAR_5, const u8 VAR_6)
{
 if (VAR_6 > VAR_0)
  return -1;


 FUNC_0(FUNC_1(VAR_1)->dccps_hc_rx_ackvec, VAR_1,
     VAR_3, VAR_6, VAR_5);
 return 0;
}
