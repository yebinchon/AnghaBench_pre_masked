
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct ip {int ip_hl; int ip_v; int ip_tos; int ip_ttl; int ip_p; TYPE_2__ ip_dst; TYPE_1__ ip_src; int ip_sum; int ip_off; int ip_id; int ip_len; } ;
struct in_addr {int dummy; } ;


 char* FUNC_0 (struct in_addr) ;
 int FUNC_1 (struct in_addr*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;

__attribute__((used)) static void
FUNC_6(struct ip *VAR_0)
{
 struct in_addr VAR_1;
 u_char *VAR_2;
 int VAR_3;

 VAR_3 = VAR_0->ip_hl << 2;
 VAR_2 = (u_char *)VAR_0 + 20;

 (void)FUNC_4("Vr HL TOS  Len   ID Flg  off TTL Pro  cks      Src      Dst\n");
 (void)FUNC_4(" %1x  %1x  %02x %04x %04x",
     VAR_0->ip_v, VAR_0->ip_hl, VAR_0->ip_tos, FUNC_3(VAR_0->ip_len),
     FUNC_3(VAR_0->ip_id));
 (void)FUNC_4("   %1lx %04lx",
     (u_long) (FUNC_2(VAR_0->ip_off) & 0xe000) >> 13,
     (u_long) FUNC_2(VAR_0->ip_off) & 0x1fff);
 (void)FUNC_4("  %02x  %02x %04x", VAR_0->ip_ttl, VAR_0->ip_p,
           FUNC_3(VAR_0->ip_sum));
 FUNC_1(&VAR_1, &VAR_0->ip_src.s_addr, sizeof VAR_1);
 (void)FUNC_4(" %s ", FUNC_0(VAR_1));
 FUNC_1(&VAR_1, &VAR_0->ip_dst.s_addr, sizeof VAR_1);
 (void)FUNC_4(" %s ", FUNC_0(VAR_1));

 while (VAR_3-- > 20) {
  (void)FUNC_4("%02x", *VAR_2++);
 }
 (void)FUNC_5('\n');
}
