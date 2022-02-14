
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int const*,int,int) ;
 int FUNC_3 (int *,int const*,int,int,int ,int ) ;
 int VAR_3 ;

u_int
FUNC_4(netdissect_options *VAR_4,
               const struct pcap_pkthdr *VAR_5, const u_char *VAR_6)
{
 u_int VAR_7 = VAR_5->caplen;
 u_int VAR_8 = VAR_5->len;
 uint32_t VAR_9;

 if (VAR_7 < 4) {
  FUNC_1((VAR_4, "%s", VAR_3));
  return VAR_7;
 }

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 == VAR_1 ||
     VAR_9 == VAR_2)
  return FUNC_2(VAR_4, VAR_6, VAR_8, VAR_7);

 if (VAR_7 < VAR_0) {
  FUNC_1((VAR_4, "%s", VAR_3));
  return VAR_7;
 }

 return VAR_0 + FUNC_3(VAR_4, VAR_6 + VAR_0,
     VAR_8 - VAR_0, VAR_7 - VAR_0, 0, 0);
}
