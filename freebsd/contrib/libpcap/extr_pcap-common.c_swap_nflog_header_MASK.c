
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
struct TYPE_3__ {int tlv_type; int tlv_length; } ;
typedef TYPE_1__ nflog_tlv_t ;
struct TYPE_4__ {scalar_t__ nflog_version; } ;
typedef TYPE_2__ nflog_hdr_t ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const struct pcap_pkthdr *VAR_0, u_char *VAR_1)
{
 u_char *VAR_2 = VAR_1;
 nflog_hdr_t *VAR_3 = (nflog_hdr_t *)VAR_1;
 nflog_tlv_t *VAR_4;
 u_int VAR_5 = VAR_0->caplen;
 u_int VAR_6 = VAR_0->len;
 uint16_t VAR_7;

 if (VAR_5 < (u_int) sizeof(nflog_hdr_t) ||
     VAR_6 < (u_int) sizeof(nflog_hdr_t)) {

  return;
 }

 if (VAR_3->nflog_version != 0) {

  return;
 }

 VAR_6 -= sizeof(nflog_hdr_t);
 VAR_5 -= sizeof(nflog_hdr_t);
 VAR_2 += sizeof(nflog_hdr_t);

 while (VAR_5 >= sizeof(nflog_tlv_t)) {
  VAR_4 = (nflog_tlv_t *) VAR_2;


  VAR_4->tlv_type = FUNC_0(VAR_4->tlv_type);
  VAR_4->tlv_length = FUNC_0(VAR_4->tlv_length);


  VAR_7 = VAR_4->tlv_length;
  if (VAR_7 % 4 != 0)
   VAR_7 += 4 - VAR_7 % 4;


  if (VAR_7 < sizeof(nflog_tlv_t)) {

   return;
  }


  if (VAR_5 < VAR_7 || VAR_6 < VAR_7) {

   return;
  }


  VAR_6 -= VAR_7;
  VAR_5 -= VAR_7;
  VAR_2 += VAR_7;
 }
}
