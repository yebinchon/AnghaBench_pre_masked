
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct TYPE_3__ {int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int PVOID ;
typedef int PACKET ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,size_t) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct pcap_win *VAR_6 = VAR_3->priv;
 PACKET VAR_7;

 FUNC_0(&VAR_7, (PVOID)VAR_4, VAR_5);
 if(FUNC_1(VAR_6->adapter,&VAR_7,VAR_2) == VAR_0) {
  FUNC_2(VAR_3->errbuf, VAR_1, "send error: PacketSendPacket failed");
  return (-1);
 }






 return ((int)VAR_5);
}
