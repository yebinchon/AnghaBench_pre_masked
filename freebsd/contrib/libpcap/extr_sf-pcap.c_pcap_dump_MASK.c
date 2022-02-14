
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tv_usec; int tv_sec; } ;
typedef struct pcap_sf_pkthdr {int caplen; int len; TYPE_1__ ts; } const pcap_sf_pkthdr ;
typedef struct pcap_sf_pkthdr u_char ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;
struct pcap_pkthdr {int caplen; int len; TYPE_2__ ts; } ;
typedef int sf_hdr ;
typedef int FILE ;


 int FUNC_0 (struct pcap_sf_pkthdr const*,int,int,int *) ;

void
FUNC_1(u_char *VAR_0, const struct pcap_pkthdr *VAR_1, const u_char *VAR_2)
{
 register FILE *VAR_3;
 struct pcap_sf_pkthdr VAR_4;

 VAR_3 = (FILE *)VAR_0;
 VAR_4.ts.tv_sec = VAR_1->ts.tv_sec;
 VAR_4.ts.tv_usec = VAR_1->ts.tv_usec;
 VAR_4.caplen = VAR_1->caplen;
 VAR_4.len = VAR_1->len;

 (void)FUNC_0(&VAR_4, sizeof(VAR_4), 1, VAR_3);
 (void)FUNC_0(VAR_2, VAR_1->caplen, 1, VAR_3);
}
