
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ len; scalar_t__ caplen; } ;
struct lladdr_info {void* addr_string; int addr; } ;
struct firewire_header {int firewire_dhost; int firewire_shost; int firewire_type; } ;
struct TYPE_6__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int const*,scalar_t__,scalar_t__,struct lladdr_info*,struct lladdr_info*) ;
 void* VAR_1 ;

u_int
FUNC_5(netdissect_options *VAR_2, const struct pcap_pkthdr *VAR_3, const u_char *VAR_4)
{
 u_int VAR_5 = VAR_3->len;
 u_int VAR_6 = VAR_3->caplen;
 const struct firewire_header *VAR_7;
 u_short VAR_8;
 struct lladdr_info VAR_9, VAR_10;

 if (VAR_6 < VAR_0) {
  FUNC_2((VAR_2, "[|ap1394]"));
  return VAR_0;
 }

 if (VAR_2->ndo_eflag)
  FUNC_3(VAR_2, VAR_4, VAR_5);

 VAR_5 -= VAR_0;
 VAR_6 -= VAR_0;
 VAR_7 = (const struct firewire_header *)VAR_4;
 VAR_4 += VAR_0;

 VAR_8 = FUNC_0(&VAR_7->firewire_type);
 VAR_9.addr = VAR_7->firewire_shost;
 VAR_9.addr_string = VAR_1;
 VAR_10.addr = VAR_7->firewire_dhost;
 VAR_10.addr_string = VAR_1;
 if (FUNC_4(VAR_2, VAR_8, VAR_4, VAR_5, VAR_6, &VAR_9, &VAR_10) == 0) {

  if (!VAR_2->ndo_eflag)
   FUNC_3(VAR_2, (const u_char *)VAR_7, VAR_5 + VAR_0);

  if (!VAR_2->ndo_suppress_default_print)
   FUNC_1(VAR_4, VAR_6);
 }

 return VAR_0;
}
