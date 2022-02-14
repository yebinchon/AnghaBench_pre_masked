
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct pfloghdr {scalar_t__ length; int af; } ;
struct pcap_pkthdr {int len; int caplen; } ;
struct TYPE_7__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;




 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pfloghdr const) ;


 int FUNC_4 (TYPE_1__*,int const*,int) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 int FUNC_6 (TYPE_1__*,struct pfloghdr const*) ;
 int VAR_1 ;

u_int
FUNC_7(netdissect_options *VAR_2, const struct pcap_pkthdr *VAR_3,
               register const u_char *VAR_4)
{
 u_int VAR_5 = VAR_3->len;
 u_int VAR_6;
 u_int VAR_7 = VAR_3->caplen;
 const struct pfloghdr *VAR_8;
 uint8_t VAR_9;


 if (VAR_7 < sizeof(uint8_t)) {
  FUNC_2((VAR_2, "%s", VAR_1));
  return (VAR_7);
 }


 VAR_8 = (const struct pfloghdr *)VAR_4;
 if (VAR_8->length < 45) {
  FUNC_2((VAR_2, "[pflog: invalid header length!]"));
  return (VAR_8->length);
 }
 VAR_6 = FUNC_0(VAR_8->length);

 if (VAR_7 < VAR_6) {
  FUNC_2((VAR_2, "%s", VAR_1));
  return (VAR_6);
 }


 FUNC_3(*VAR_8);
 if (VAR_2->ndo_eflag)
  FUNC_6(VAR_2, VAR_8);


 VAR_9 = VAR_8->af;
 VAR_5 -= VAR_6;
 VAR_7 -= VAR_6;
 VAR_4 += VAR_6;
 switch (VAR_9) {

  case 131:

  case 129:

          FUNC_5(VAR_2, VAR_4, VAR_5);
   break;



  case 130:


  case 128:

   FUNC_4(VAR_2, VAR_4, VAR_5);
   break;


 default:

  if (!VAR_2->ndo_eflag)
   FUNC_6(VAR_2, VAR_8);
  if (!VAR_2->ndo_suppress_default_print)
   FUNC_1(VAR_4, VAR_7);
 }

 return (VAR_6);
trunc:
 FUNC_2((VAR_2, "%s", VAR_1));
 return (VAR_6);
}
