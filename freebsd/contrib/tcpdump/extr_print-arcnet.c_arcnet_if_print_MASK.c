
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ caplen; scalar_t__ len; } ;
struct arc_header {int arc_type; int arc_flag; int arc_flag2; int arc_seqid; int arc_seqid2; } ;
struct TYPE_6__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int const*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int const*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int const*,scalar_t__,int,int,scalar_t__) ;

u_int
FUNC_5(netdissect_options *VAR_3, const struct pcap_pkthdr *VAR_4, const u_char *VAR_5)
{
 u_int VAR_6 = VAR_4->caplen;
 u_int VAR_7 = VAR_4->len;
 const struct arc_header *VAR_8;

 int VAR_9, VAR_10 = 0, VAR_11 = 0;
 u_int VAR_12 = 0;
 u_char VAR_13;

 if (VAR_6 < VAR_0 || VAR_7 < VAR_0) {
  FUNC_2((VAR_3, "[|arcnet]"));
  return (VAR_6);
 }

 VAR_8 = (const struct arc_header *)VAR_5;
 VAR_13 = VAR_8->arc_type;

 switch (VAR_13) {
 default:
  VAR_9 = 1;
  break;
 case 128:
 case 130:
 case 129:
  VAR_9 = 0;
  VAR_11 = VAR_0;
  break;
 }

 if (VAR_9) {
  if (VAR_6 < VAR_1 || VAR_7 < VAR_1) {
   FUNC_4(VAR_3, VAR_5, VAR_7, 0, 0, 0);
   FUNC_2((VAR_3, "[|phds]"));
   return (VAR_6);
  }

  if (VAR_8->arc_flag == 0xff) {
   if (VAR_6 < VAR_2 || VAR_7 < VAR_2) {
    FUNC_4(VAR_3, VAR_5, VAR_7, 0, 0, 0);
    FUNC_2((VAR_3, "[|phds extended]"));
    return (VAR_6);
   }
   VAR_10 = VAR_8->arc_flag2;
   VAR_12 = FUNC_0(&VAR_8->arc_seqid2);
   VAR_11 = VAR_2;
  } else {
   VAR_10 = VAR_8->arc_flag;
   VAR_12 = FUNC_0(&VAR_8->arc_seqid);
   VAR_11 = VAR_1;
  }
 }


 if (VAR_3->ndo_eflag)
  FUNC_4(VAR_3, VAR_5, VAR_7, VAR_9, VAR_10, VAR_12);




 VAR_7 -= VAR_11;
 VAR_6 -= VAR_11;
 VAR_5 += VAR_11;

 if (VAR_9 && VAR_10 && (VAR_10 & 1) == 0) {



  return (VAR_11);
 }

 if (!FUNC_3(VAR_3, VAR_13, VAR_5, VAR_7, VAR_6))
  FUNC_1(VAR_5, VAR_6);

 return (VAR_11);
}
