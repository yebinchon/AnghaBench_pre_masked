
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct udphdr {int uh_dport; } ;
struct ip6_hdr {int ip6_nxt; } ;
struct ip6_hbh {int ip6h_len; int ip6h_nxt; } ;
struct ip6_frag {int ip6f_offlg; int ip6f_nxt; } ;
struct ah {int ah_len; int ah_nxt; } ;
struct TYPE_3__ {int * ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int*) ;
 int VAR_0 ;







 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static const struct udphdr *
FUNC_2(netdissect_options *VAR_1, const u_char *VAR_2, u_int *VAR_3)
{
 const u_char *VAR_4;
 const struct ip6_hdr *VAR_5 = (const struct ip6_hdr *)VAR_2;
 const struct udphdr *VAR_6;
 const struct ip6_hbh *VAR_7;
 const struct ip6_frag *VAR_8;
 const struct ah *VAR_9;
 u_int VAR_10;
 int VAR_11;


 VAR_4 = VAR_1->ndo_snapend;

 if (!FUNC_1(VAR_5->ip6_nxt))
  return ((void*)0);

 VAR_10 = VAR_5->ip6_nxt;
 VAR_11 = sizeof(struct ip6_hdr);

 while (VAR_2 < VAR_4) {
  VAR_2 += VAR_11;

  switch(VAR_10) {
  case 128:
  case 129:
   VAR_6 = (const struct udphdr *)VAR_2;
   if (FUNC_1(VAR_6->uh_dport)) {
    *VAR_3 = VAR_10;
    return(VAR_6);
   }
   else
    return(((void*)0));


  case 131:
  case 133:
  case 130:
   VAR_7 = (const struct ip6_hbh *)VAR_2;
   if (!FUNC_1(VAR_7->ip6h_len))
    return(((void*)0));
   VAR_10 = VAR_7->ip6h_nxt;
   VAR_11 = (VAR_7->ip6h_len + 1) << 3;
   break;

  case 132:
   VAR_8 = (const struct ip6_frag *)VAR_2;
   if (!FUNC_1(VAR_8->ip6f_offlg))
    return(((void*)0));

   if ((FUNC_0(&VAR_8->ip6f_offlg) & VAR_0) != 0)
    return(((void*)0));
   VAR_10 = VAR_8->ip6f_nxt;
   VAR_11 = sizeof(struct ip6_frag);
   break;

  case 134:
   VAR_9 = (const struct ah *)VAR_2;
   if (!FUNC_1(VAR_9->ah_len))
    return(((void*)0));
   VAR_10 = VAR_9->ah_nxt;
   VAR_11 = (VAR_9->ah_len + 2) << 2;
   break;

  default:
   *VAR_3 = VAR_10;
   return(((void*)0));
  }
 }

 return(((void*)0));
}
