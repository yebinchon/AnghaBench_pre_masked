
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct TYPE_3__ {int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int bpf_u_int32 ;


 int FUNC_0 (int ,int ,void*,size_t*,int ) ;

__attribute__((used)) static int
FUNC_1(pcap_t *VAR_0, bpf_u_int32 VAR_1, void *VAR_2, size_t *VAR_3)
{
 struct pcap_win *VAR_4 = VAR_0->priv;

 return (FUNC_0(VAR_4->adapter, VAR_1, VAR_2, VAR_3, VAR_0->errbuf));
}
