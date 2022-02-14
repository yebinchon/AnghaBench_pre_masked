
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *,int const*,int ) ;

u_int
FUNC_3(netdissect_options *VAR_0,
            const struct pcap_pkthdr *VAR_1, register const u_char *VAR_2)
{
 register u_int VAR_3 = VAR_1->len;
 register u_int VAR_4 = VAR_1->caplen;

        FUNC_1(*VAR_2, 4);

        if ((VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_3)) == 0)
            return (0);
        else
            return VAR_3;
 trunc:
        FUNC_0((VAR_0, "[|fr]"));
        return VAR_4;
}
