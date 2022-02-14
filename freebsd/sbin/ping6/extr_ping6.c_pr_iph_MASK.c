
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct ip6_hdr {int ip6_flow; int ip6_vfc; int ip6_nxt; int ip6_hlim; int ip6_dst; int ip6_src; int ip6_plen; } ;
typedef int ntop_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct ip6_hdr *VAR_4)
{
 u_int32_t VAR_5 = VAR_4->ip6_flow & VAR_2;
 u_int8_t VAR_6;
 char VAR_7[VAR_1];

 VAR_6 = *(&VAR_4->ip6_vfc + 1);
 VAR_6 = (VAR_6 >> 4) & 0x0f;
 VAR_6 |= (VAR_4->ip6_vfc << 4);

 FUNC_3("Vr TC  Flow Plen Nxt Hlim\n");
 FUNC_3(" %1x %02x %05x %04x  %02x   %02x\n",
     (VAR_4->ip6_vfc & VAR_3) >> 4, VAR_6, (u_int32_t)FUNC_1(VAR_5),
     FUNC_2(VAR_4->ip6_plen), VAR_4->ip6_nxt, VAR_4->ip6_hlim);
 if (!FUNC_0(VAR_0, &VAR_4->ip6_src, VAR_7, sizeof(VAR_7)))
  FUNC_4(VAR_7, "?", sizeof(VAR_7));
 FUNC_3("%s->", VAR_7);
 if (!FUNC_0(VAR_0, &VAR_4->ip6_dst, VAR_7, sizeof(VAR_7)))
  FUNC_4(VAR_7, "?", sizeof(VAR_7));
 FUNC_3("%s\n", VAR_7);
}
