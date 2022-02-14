
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint16_t ;
typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct sll_header {int const sll_protocol; } ;
struct pcap_pkthdr {int caplen; int len; } ;
struct TYPE_8__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int const*) ;


 int FUNC_1 (int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int const*,int,int,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 int FUNC_6 (TYPE_1__*,int const*,int,int,int *,int *) ;
 int FUNC_7 (TYPE_1__*,struct sll_header const*,int) ;
 int FUNC_8 (int ,char*,int) ;

u_int
FUNC_9(netdissect_options *VAR_4, const struct pcap_pkthdr *VAR_5, const u_char *VAR_6)
{
 u_int VAR_7 = VAR_5->caplen;
 u_int VAR_8 = VAR_5->len;
 register const struct sll_header *VAR_9;
 u_short VAR_10;
 int VAR_11;
 u_int VAR_12;

 if (VAR_7 < VAR_2) {





  FUNC_2((VAR_4, "[|sll]"));
  return (VAR_7);
 }

 VAR_9 = (const struct sll_header *)VAR_6;

 if (VAR_4->ndo_eflag)
  FUNC_7(VAR_4, VAR_9, VAR_8);




 VAR_8 -= VAR_2;
 VAR_7 -= VAR_2;
 VAR_6 += VAR_2;
 VAR_12 = VAR_2;

 VAR_10 = FUNC_0(&VAR_9->sll_protocol);

recurse:




 if (VAR_10 <= VAR_0) {



  switch (VAR_10) {

  case 128:



   FUNC_5(VAR_4, VAR_6, VAR_8);
   break;

  case 129:




   VAR_11 = FUNC_6(VAR_4, VAR_6, VAR_8, VAR_7, ((void*)0), ((void*)0));
   if (VAR_11 < 0)
    goto unknown;
   VAR_12 += VAR_11;
   break;

  default:


  unknown:

   if (!VAR_4->ndo_suppress_default_print)
    FUNC_1(VAR_6, VAR_7);
   break;
  }
 } else if (VAR_10 == VAR_1) {




  if (VAR_7 < 4) {
   FUNC_2((VAR_4, "[|vlan]"));
   return (VAR_12 + VAR_7);
  }
  if (VAR_8 < 4) {
   FUNC_2((VAR_4, "[|vlan]"));
   return (VAR_12 + VAR_8);
  }
         if (VAR_4->ndo_eflag) {
          uint16_t VAR_13 = FUNC_0(VAR_6);

   FUNC_2((VAR_4, "%s, ", FUNC_4(VAR_13)));
  }

  VAR_10 = FUNC_0(VAR_6 + 2);
  if (VAR_10 <= VAR_0)
   VAR_10 = 129;
  if (!VAR_4->ndo_qflag) {
   FUNC_2((VAR_4, "ethertype %s, ",
       FUNC_8(VAR_3, "Unknown", VAR_10)));
  }
  VAR_6 += 4;
  VAR_8 -= 4;
  VAR_7 -= 4;
  VAR_12 += 4;
  goto recurse;
 } else {
  if (FUNC_3(VAR_4, VAR_10, VAR_6, VAR_8, VAR_7, ((void*)0), ((void*)0)) == 0) {

   if (!VAR_4->ndo_eflag)
    FUNC_7(VAR_4, VAR_9, VAR_8 + VAR_2);
   if (!VAR_4->ndo_suppress_default_print)
    FUNC_1(VAR_6, VAR_7);
  }
 }

 return (VAR_12);
}
