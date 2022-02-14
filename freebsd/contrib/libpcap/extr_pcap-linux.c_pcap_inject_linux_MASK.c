
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_linux {int ifindex; scalar_t__ cooked; int sock_packet; } ;
struct TYPE_3__ {int errbuf; int fd; struct pcap_linux* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,void const*,size_t,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_2, const void *VAR_3, size_t VAR_4)
{
 struct pcap_linux *VAR_5 = VAR_2->priv;
 int VAR_6;
 VAR_6 = FUNC_1(VAR_2->fd, VAR_3, VAR_4, 0);
 if (VAR_6 == -1) {
  FUNC_0(VAR_2->errbuf, VAR_0,
      VAR_1, "send");
  return (-1);
 }
 return (VAR_6);
}
