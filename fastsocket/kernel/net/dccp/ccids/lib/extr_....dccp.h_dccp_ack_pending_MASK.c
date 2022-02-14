
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_timestamp_echo; int * dccps_hc_rx_ackvec; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct dccp_sock* FUNC_1 (struct sock const*) ;
 scalar_t__ FUNC_2 (struct sock const*) ;

__attribute__((used)) static inline int FUNC_3(const struct sock *VAR_0)
{
 const struct dccp_sock *VAR_1 = FUNC_1(VAR_0);
 return VAR_1->dccps_timestamp_echo != 0 ||
        (VAR_1->dccps_hc_rx_ackvec != ((void*)0) &&
  FUNC_0(VAR_1->dccps_hc_rx_ackvec)) ||
        FUNC_2(VAR_0);
}
