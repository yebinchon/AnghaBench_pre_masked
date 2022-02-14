
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u64 ;
struct xt_cluster_match_info {int total_nodes; } ;
struct nf_conn {int dummy; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct nf_conn const*) ;
 int FUNC_2 (struct nf_conn const*) ;
 int FUNC_3 (struct nf_conn const*) ;
 int FUNC_4 (int ,struct xt_cluster_match_info const*) ;
 int FUNC_5 (int ,struct xt_cluster_match_info const*) ;

__attribute__((used)) static inline u_int32_t
FUNC_6(const struct nf_conn *VAR_0,
  const struct xt_cluster_match_info *VAR_1)
{
 u_int32_t VAR_2 = 0;

 switch(FUNC_1(VAR_0)) {
 case 129:
  VAR_2 = FUNC_4(FUNC_2(VAR_0), VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_5(FUNC_3(VAR_0), VAR_1);
  break;
 default:
  FUNC_0(1);
  break;
 }
 return (((u64)VAR_2 * VAR_1->total_nodes) >> 32);
}
