
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct sll_header {int sll_protocol; } ;
struct pcap_pkthdr {scalar_t__ caplen; scalar_t__ len; } ;
struct TYPE_2__ {int can_id; } ;
typedef TYPE_1__ pcap_can_socketcan_hdr ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(const struct pcap_pkthdr *VAR_2, u_char *VAR_3)
{
 u_int VAR_4 = VAR_2->caplen;
 u_int VAR_5 = VAR_2->len;
 struct sll_header *VAR_6 = (struct sll_header *)VAR_3;
 uint16_t VAR_7;
 pcap_can_socketcan_hdr *VAR_8;

 if (VAR_4 < (u_int) sizeof(struct sll_header) ||
     VAR_5 < (u_int) sizeof(struct sll_header)) {

  return;
 }

 VAR_7 = FUNC_0(&VAR_6->sll_protocol);
 if (VAR_7 != VAR_0 && VAR_7 != VAR_1)
  return;




 VAR_8 = (pcap_can_socketcan_hdr *)(VAR_3 + sizeof(struct sll_header));
 if (VAR_4 < (u_int) sizeof(struct sll_header) + sizeof(VAR_8->can_id) ||
     VAR_5 < (u_int) sizeof(struct sll_header) + sizeof(VAR_8->can_id)) {

  return;
 }
 VAR_8->can_id = FUNC_1(VAR_8->can_id);
}
