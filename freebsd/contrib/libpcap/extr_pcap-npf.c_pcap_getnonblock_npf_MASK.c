
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int nonblock; } ;
struct TYPE_3__ {struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;



__attribute__((used)) static int
FUNC_0(pcap_t *VAR_0)
{
 struct pcap_win *VAR_1 = VAR_0->priv;






 return (VAR_1->nonblock);
}
