
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; } ;
struct TYPE_5__ {int ndo_suppress_default_print; scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;




 int FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int const*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_7 (TYPE_1__*,int const*) ;

u_int
FUNC_8(netdissect_options *VAR_2,
                      const struct pcap_pkthdr *VAR_3, const u_char *VAR_4)
{
 u_int VAR_5 = VAR_3->caplen;
 u_int VAR_6;
 uint16_t VAR_7;
 uint8_t VAR_8;
 uint16_t VAR_9 = 0;

 if (VAR_5 < 3) {
  FUNC_6((VAR_2, "[|802.15.4]"));
  return VAR_5;
 }
 VAR_6 = 3;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_1(VAR_4 + 2);

 VAR_4 += 3;
 VAR_5 -= 3;

 FUNC_6((VAR_2,"IEEE 802.15.4 %s packet ", VAR_1[FUNC_3(VAR_7)]));
 if (VAR_2->ndo_vflag)
  FUNC_6((VAR_2,"seq %02x ", VAR_8));




 switch (FUNC_2(VAR_7)) {
 case 130:
  if (VAR_7 & VAR_0) {





   FUNC_6((VAR_2, "[|802.15.4]"));
   return VAR_6;
  }
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"none "));
  break;
 case 129:
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"reserved destination addressing mode"));
  return VAR_6;
 case 128:
  if (VAR_5 < 2) {
   FUNC_6((VAR_2, "[|802.15.4]"));
   return VAR_6;
  }
  VAR_9 = FUNC_0(VAR_4);
  VAR_4 += 2;
  VAR_5 -= 2;
  VAR_6 += 2;
  if (VAR_5 < 2) {
   FUNC_6((VAR_2, "[|802.15.4]"));
   return VAR_6;
  }
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"%04x:%04x ", VAR_9, FUNC_0(VAR_4)));
  VAR_4 += 2;
  VAR_5 -= 2;
  VAR_6 += 2;
  break;
 case 131:
  if (VAR_5 < 2) {
   FUNC_6((VAR_2, "[|802.15.4]"));
   return VAR_6;
  }
  VAR_9 = FUNC_0(VAR_4);
  VAR_4 += 2;
  VAR_5 -= 2;
  VAR_6 += 2;
  if (VAR_5 < 8) {
   FUNC_6((VAR_2, "[|802.15.4]"));
   return VAR_6;
  }
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"%04x:%s ", VAR_9, FUNC_7(VAR_2, VAR_4)));
  VAR_4 += 8;
  VAR_5 -= 8;
  VAR_6 += 8;
  break;
 }
 if (VAR_2->ndo_vflag)
  FUNC_6((VAR_2,"< "));




 switch (FUNC_4(VAR_7)) {
 case 130:
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"none "));
  break;
 case 129:
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"reserved source addressing mode"));
  return 0;
 case 128:
  if (!(VAR_7 & VAR_0)) {





   if (VAR_5 < 2) {
    FUNC_6((VAR_2, "[|802.15.4]"));
    return VAR_6;
   }
   VAR_9 = FUNC_0(VAR_4);
   VAR_4 += 2;
   VAR_5 -= 2;
   VAR_6 += 2;
  }
  if (VAR_5 < 2) {
   FUNC_6((VAR_2, "[|802.15.4]"));
   return VAR_6;
  }
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"%04x:%04x ", VAR_9, FUNC_0(VAR_4)));
  VAR_4 += 2;
  VAR_5 -= 2;
  VAR_6 += 2;
  break;
 case 131:
  if (!(VAR_7 & VAR_0)) {





   if (VAR_5 < 2) {
    FUNC_6((VAR_2, "[|802.15.4]"));
    return VAR_6;
   }
   VAR_9 = FUNC_0(VAR_4);
   VAR_4 += 2;
   VAR_5 -= 2;
   VAR_6 += 2;
  }
  if (VAR_5 < 8) {
   FUNC_6((VAR_2, "[|802.15.4]"));
   return VAR_6;
  }
  if (VAR_2->ndo_vflag)
   FUNC_6((VAR_2,"%04x:%s ", VAR_9, FUNC_7(VAR_2, VAR_4)));
  VAR_4 += 8;
  VAR_5 -= 8;
  VAR_6 += 8;
  break;
 }

 if (!VAR_2->ndo_suppress_default_print)
  FUNC_5(VAR_4, VAR_5);

 return VAR_6;
}
