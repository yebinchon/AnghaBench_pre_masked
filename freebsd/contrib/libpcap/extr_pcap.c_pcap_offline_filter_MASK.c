
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
struct bpf_program {struct bpf_insn* bf_insns; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (struct bpf_insn const*,int const*,int ,int ) ;

int
FUNC_1(const struct bpf_program *VAR_0, const struct pcap_pkthdr *VAR_1,
    const u_char *VAR_2)
{
 const struct bpf_insn *VAR_3 = VAR_0->bf_insns;

 if (VAR_3 != ((void*)0))
  return (FUNC_0(VAR_3, VAR_2, VAR_1->len, VAR_1->caplen));
 else
  return (0);
}
