
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in {scalar_t__ sin_family; int sin_addr; } ;
struct pcap_addr {struct pcap_addr* next; scalar_t__ addr; } ;
struct l2_packet_data {int ifname; } ;
struct TYPE_4__ {struct pcap_addr* addresses; int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ pcap_if_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__**,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,char*) ;

int FUNC_6(struct l2_packet_data *VAR_3, char *VAR_4, size_t VAR_5)
{
 pcap_if_t *VAR_6, *VAR_7;
 struct pcap_addr *VAR_8;
 struct sockaddr_in *VAR_9;
 int VAR_10 = 0;
 char VAR_11[VAR_2 + 1];

 if (FUNC_3(&VAR_6, VAR_11) < 0) {
  FUNC_5(VAR_1, "pcap_findalldevs: %s\n", VAR_11);
  return -1;
 }

 for (VAR_7 = VAR_6; VAR_7 && !VAR_10; VAR_7 = VAR_7->next) {
  if (FUNC_1(VAR_7->name, VAR_3->ifname) != 0)
   continue;

  VAR_8 = VAR_7->addresses;
  while (VAR_8) {
   VAR_9 = (struct sockaddr_in *) VAR_8->addr;
   if (VAR_9 && VAR_9->sin_family == VAR_0) {
    FUNC_2(VAR_4, FUNC_0(VAR_9->sin_addr),
        VAR_5);
    VAR_10 = 1;
    break;
   }
   VAR_8 = VAR_8->next;
  }
 }

 FUNC_4(VAR_6);

 return VAR_10 ? 0 : -1;
}
