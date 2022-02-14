
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct nfqnl_msg_config_params {int copy_mode; int copy_range; } ;
struct my_nfattr {int nfa_len; int nfa_type; struct nfqnl_msg_config_params* data; } ;
typedef int pcap_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int ,int ,struct my_nfattr*) ;

__attribute__((used)) static int
FUNC_2(const pcap_t *VAR_2, uint16_t VAR_3, u_int8_t VAR_4, u_int32_t VAR_5)
{
 struct nfqnl_msg_config_params VAR_6;
 struct my_nfattr VAR_7;

 VAR_6.copy_range = FUNC_0(VAR_5);
 VAR_6.copy_mode = VAR_4;

 VAR_7.data = &VAR_6;
 VAR_7.nfa_type = VAR_1;
 VAR_7.nfa_len = sizeof(VAR_6);

 return FUNC_1(VAR_2, VAR_0, VAR_3, &VAR_7);
}
