
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sock {int dummy; } ;
struct dccp_sock {int * dccps_hc_rx_ackvec; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, u64 VAR_2, bool VAR_3)
{
 struct dccp_sock *VAR_4 = FUNC_2(VAR_1);

 if (VAR_3) {
  if (VAR_2 && VAR_4->dccps_hc_rx_ackvec == ((void*)0)) {
   VAR_4->dccps_hc_rx_ackvec = FUNC_0(FUNC_3());
   if (VAR_4->dccps_hc_rx_ackvec == ((void*)0))
    return -VAR_0;
  } else if (!VAR_2) {
   FUNC_1(VAR_4->dccps_hc_rx_ackvec);
   VAR_4->dccps_hc_rx_ackvec = ((void*)0);
  }
 }
 return 0;
}
