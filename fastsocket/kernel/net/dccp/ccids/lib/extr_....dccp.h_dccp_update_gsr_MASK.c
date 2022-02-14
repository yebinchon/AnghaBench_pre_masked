
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sock {int dummy; } ;
struct dccp_sock {int dccps_r_seq_win; int dccps_gsr; int dccps_swh; int dccps_swl; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_0, u64 VAR_1)
{
 struct dccp_sock *VAR_2 = FUNC_2(VAR_0);

 VAR_2->dccps_gsr = VAR_1;

 VAR_2->dccps_swl = FUNC_1(FUNC_0(VAR_2->dccps_gsr, 1), VAR_2->dccps_r_seq_win / 4);
 VAR_2->dccps_swh = FUNC_0(VAR_2->dccps_gsr, (3 * VAR_2->dccps_r_seq_win) / 4);
}
