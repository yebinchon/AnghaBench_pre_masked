
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct TYPE_3__ {int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_2, int VAR_3)
{
 struct pcap_win *VAR_4 = VAR_2->priv;

 if(FUNC_0(VAR_4->adapter,VAR_3)==VAR_0)
 {
  FUNC_1(VAR_2->errbuf, VAR_1, "driver error: not enough memory to allocate the kernel buffer");
  return (-1);
 }
 return (0);
}
