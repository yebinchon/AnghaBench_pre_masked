
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ len; scalar_t__ caplen; } ;
struct enchdr {int flags; int af; int spi; } ;
typedef int netdissect_options ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,scalar_t__) ;
 int FUNC_4 (int *,int const*,scalar_t__) ;

u_int
FUNC_5(netdissect_options *VAR_3,
             const struct pcap_pkthdr *VAR_4, register const u_char *VAR_5)
{
 register u_int VAR_6 = VAR_4->len;
 register u_int VAR_7 = VAR_4->caplen;
 int VAR_8;
 const struct enchdr *VAR_9;

 if (VAR_7 < VAR_0) {
  FUNC_2((VAR_3, "[|enc]"));
  goto out;
 }

 VAR_9 = (const struct enchdr *)VAR_5;
 VAR_8 = VAR_9->flags;
 if (VAR_8 == 0)
  FUNC_2((VAR_3, "(unprotected): "));
 else
  FUNC_2((VAR_3, "("));
 FUNC_0(VAR_8, VAR_1, "authentic");
 FUNC_0(VAR_8, VAR_2, "confidential");

 FUNC_2((VAR_3, "SPI 0x%08x: ", FUNC_1(&VAR_9->spi)));

 VAR_6 -= VAR_0;
 VAR_7 -= VAR_0;
 VAR_5 += VAR_0;

 switch (VAR_9->af) {
 case 129:
  FUNC_4(VAR_3, VAR_5, VAR_6);
  break;

 case 128:
  FUNC_3(VAR_3, VAR_5, VAR_6);
  break;

 }

out:
 return (VAR_0);
}
