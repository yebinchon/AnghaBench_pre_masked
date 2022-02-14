
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ccid3_hc_rx_sock {int dummy; } ;
struct TYPE_2__ {int dccps_hc_rx_ccid; } ;


 int FUNC_0 (int ) ;
 struct ccid3_hc_rx_sock* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sock const*) ;

__attribute__((used)) static inline struct ccid3_hc_rx_sock *FUNC_3(const struct sock *VAR_0)
{
 struct ccid3_hc_rx_sock *VAR_1 = FUNC_1(FUNC_2(VAR_0)->dccps_hc_rx_ccid);
 FUNC_0(VAR_1 == ((void*)0));
 return VAR_1;
}
