
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ip6_rthdr {int ip6r_nxt; int ip6r_len; } ;
struct ip6_hdr {int ip6_nxt; } ;
struct ip6_hbh {int ip6h_nxt; int ip6h_len; } ;
struct ip6_frag {int ip6f_nxt; } ;
struct ip6_dest {int ip6d_nxt; int ip6d_len; } ;
struct ah {int ah_nxt; int ah_len; } ;
typedef int ah ;
 int FUNC_0 (struct ah*,int*,int) ;
 int FUNC_1 (struct ip6_hdr*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(struct ip6_hdr *VAR_0, u_char *VAR_1)
{
 u_char *VAR_2 = (u_char *)VAR_0, VAR_3;
 int VAR_4;

 if ((size_t)(VAR_1 - (u_char *)VAR_0) < sizeof(*VAR_0)) {
  FUNC_2("IP6");
  goto trunc;
 }
 FUNC_1(VAR_0);
 VAR_4 = sizeof(*VAR_0);

 VAR_3 = VAR_0->ip6_nxt;
 VAR_2 += VAR_4;
 while (VAR_1 - VAR_2 >= 8) {
  struct ah VAR_5;

  switch (VAR_3) {
  case 132:
   FUNC_2("HBH ");
   VAR_4 = (((struct ip6_hbh *)VAR_2)->ip6h_len+1) << 3;
   VAR_3 = ((struct ip6_hbh *)VAR_2)->ip6h_nxt;
   break;
  case 135:
   FUNC_2("DSTOPT ");
   VAR_4 = (((struct ip6_dest *)VAR_2)->ip6d_len+1) << 3;
   VAR_3 = ((struct ip6_dest *)VAR_2)->ip6d_nxt;
   break;
  case 133:
   FUNC_2("FRAG ");
   VAR_4 = sizeof(struct ip6_frag);
   VAR_3 = ((struct ip6_frag *)VAR_2)->ip6f_nxt;
   break;
  case 130:
   FUNC_2("RTHDR ");
   VAR_4 = (((struct ip6_rthdr *)VAR_2)->ip6r_len+1) << 3;
   VAR_3 = ((struct ip6_rthdr *)VAR_2)->ip6r_nxt;
   break;
  case 131:
   FUNC_2("ICMP6: type = %d, code = %d\n",
       *VAR_2, *(VAR_2 + 1));
   return;
  case 134:
   FUNC_2("ESP\n");
   return;
  case 129:
   FUNC_2("TCP: from port %u, to port %u (decimal)\n",
       (*VAR_2 * 256 + *(VAR_2 + 1)),
       (*(VAR_2 + 2) * 256 + *(VAR_2 + 3)));
   return;
  case 128:
   FUNC_2("UDP: from port %u, to port %u (decimal)\n",
       (*VAR_2 * 256 + *(VAR_2 + 1)),
       (*(VAR_2 + 2) * 256 + *(VAR_2 + 3)));
   return;
  default:
   FUNC_2("Unknown Header(%d)\n", VAR_3);
   return;
  }

  if ((VAR_2 += VAR_4) >= VAR_1)
   goto trunc;
 }
 if (VAR_1 - VAR_2 < 8)
  goto trunc;

 FUNC_3('\n');
 return;

  trunc:
 FUNC_2("...\n");
 return;
}
