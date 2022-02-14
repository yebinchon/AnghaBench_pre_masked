
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; int ts; } ;
struct TYPE_9__ {scalar_t__ (* ndo_if_printer ) (TYPE_1__*,struct pcap_pkthdr const*,int const*) ;int ndo_Xflag; int ndo_xflag; int ndo_Aflag; int const* ndo_snapend; scalar_t__ ndo_packet_number; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*,int const*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char*,int const*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct pcap_pkthdr const*,int const*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

void
FUNC_6(netdissect_options *VAR_0, const struct pcap_pkthdr *VAR_1,
    const u_char *VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 if(VAR_0->ndo_packet_number)
  FUNC_0((VAR_0, "%5u  ", VAR_3));

 FUNC_5(VAR_0, &VAR_1->ts);







 VAR_0->ndo_snapend = VAR_2 + VAR_1->caplen;

        VAR_4 = (VAR_0->ndo_if_printer)(VAR_0, VAR_1, VAR_2);





 VAR_0->ndo_snapend = VAR_2 + VAR_1->caplen;
 if (VAR_0->ndo_Xflag) {



  if (VAR_0->ndo_Xflag > 1) {



   FUNC_2(VAR_0, "\n\t", VAR_2, VAR_1->caplen);
  } else {





   if (VAR_1->caplen > VAR_4)
    FUNC_2(VAR_0, "\n\t", VAR_2 + VAR_4,
        VAR_1->caplen - VAR_4);
  }
 } else if (VAR_0->ndo_xflag) {



  if (VAR_0->ndo_xflag > 1) {



                        FUNC_3(VAR_0, "\n\t", VAR_2, VAR_1->caplen);
  } else {





   if (VAR_1->caplen > VAR_4)
    FUNC_3(VAR_0, "\n\t", VAR_2 + VAR_4,
                                          VAR_1->caplen - VAR_4);
  }
 } else if (VAR_0->ndo_Aflag) {



  if (VAR_0->ndo_Aflag > 1) {



   FUNC_1(VAR_0, VAR_2, VAR_1->caplen);
  } else {





   if (VAR_1->caplen > VAR_4)
    FUNC_1(VAR_0, VAR_2 + VAR_4, VAR_1->caplen - VAR_4);
  }
 }

 FUNC_0((VAR_0, "\n"));
}
