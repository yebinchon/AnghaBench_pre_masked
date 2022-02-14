
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int8_t ;
struct nfulnl_msg_config_cmd {int command; } ;
struct my_nfattr {int nfa_len; int nfa_type; struct nfulnl_msg_config_cmd* data; } ;
typedef int pcap_t ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,int ,struct my_nfattr*) ;

__attribute__((used)) static int
FUNC_1(const pcap_t *VAR_1, uint16_t VAR_2, u_int8_t VAR_3, u_int8_t VAR_4)
{
 struct nfulnl_msg_config_cmd VAR_5;
 struct my_nfattr VAR_6;

 VAR_5.command = VAR_3;

 VAR_6.data = &VAR_5;
 VAR_6.nfa_type = VAR_0;
 VAR_6.nfa_len = sizeof(VAR_5);

 return FUNC_0(VAR_1, VAR_4, VAR_2, &VAR_6);
}
