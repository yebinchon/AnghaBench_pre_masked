
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sock {int dummy; } ;
struct dccp_sock {int dccps_gss; int dccps_awh; int dccps_l_seq_win; int dccps_awl; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_0, u64 VAR_1)
{
 struct dccp_sock *VAR_2 = FUNC_2(VAR_0);

 VAR_2->dccps_gss = VAR_1;

 VAR_2->dccps_awl = FUNC_1(FUNC_0(VAR_2->dccps_gss, 1), VAR_2->dccps_l_seq_win);
 VAR_2->dccps_awh = VAR_2->dccps_gss;
}
