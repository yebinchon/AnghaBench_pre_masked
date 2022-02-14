
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct ip {int ip_dst; int ip_src; } ;
typedef int srcaddr ;
typedef int netdissect_options ;
typedef int dstaddr ;


 int VAR_0 ;
 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_1,
              const u_char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 const struct ip *VAR_5;
 const struct ip6_hdr *VAR_6;
 char VAR_7[VAR_0], VAR_8[VAR_0];

 VAR_7[0] = VAR_8[0] = '\0';
 switch (FUNC_0((const struct ip *)VAR_2)) {
 case 4:
  VAR_5 = (const struct ip *)VAR_2;
  FUNC_4(VAR_7, FUNC_3(VAR_1, &VAR_5->ip_src), sizeof(VAR_7));
  FUNC_4(VAR_8, FUNC_3(VAR_1, &VAR_5->ip_dst), sizeof(VAR_8));
  break;
 case 6:
  VAR_6 = (const struct ip6_hdr *)VAR_2;
  FUNC_4(VAR_7, FUNC_2(VAR_1, &VAR_6->ip6_src),
      sizeof(VAR_7));
  FUNC_4(VAR_8, FUNC_2(VAR_1, &VAR_6->ip6_dst),
      sizeof(VAR_8));
  break;
 default:
  FUNC_4(VAR_7, "?", sizeof(VAR_7));
  FUNC_4(VAR_8, "?", sizeof(VAR_8));
  break;
 }

 FUNC_1((VAR_1, "%s.%s > %s.%s: ", VAR_7, VAR_3, VAR_8, VAR_4));
}
