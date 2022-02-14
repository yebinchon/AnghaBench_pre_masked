
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct TYPE_3__ {struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(pcap_t *VAR_0, int VAR_1)
{
 struct pcap_win *VAR_2 = VAR_0->priv;

 return (FUNC_0(VAR_2->adapter, (BOOLEAN)VAR_1));
}
