
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int32_t ;
struct nfqnl_msg_verdict_hdr {void* verdict; void* id; } ;
struct my_nfattr {int nfa_len; int nfa_type; struct nfqnl_msg_verdict_hdr* data; } ;
typedef int pcap_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int const*,int,int ,int ,int ,struct my_nfattr*) ;

__attribute__((used)) static int
FUNC_2(const pcap_t *VAR_4, uint16_t VAR_5, u_int32_t VAR_6, u_int32_t VAR_7)
{
 struct nfqnl_msg_verdict_hdr VAR_8;
 struct my_nfattr VAR_9;

 VAR_8.id = FUNC_0(VAR_6);
 VAR_8.verdict = FUNC_0(VAR_7);

 VAR_9.data = &VAR_8;
 VAR_9.nfa_type = VAR_2;
 VAR_9.nfa_len = sizeof(VAR_8);

 return FUNC_1(VAR_4, (VAR_1 << 8) | VAR_3, 0, VAR_0, VAR_5, &VAR_9);
}
