
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_char ;
typedef int t ;
struct in6_addr {int dummy; } ;
struct icmp6_nodeinfo {int ni_code; int ni_flags; } ;
typedef int ntop_buf ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6(struct icmp6_nodeinfo *VAR_5, int VAR_6)

{
 u_char *VAR_7 = (u_char *)(VAR_5 + 1);
 char VAR_8[VAR_2];
 int VAR_9 = 0;

 VAR_6 -= sizeof(struct icmp6_nodeinfo);

 if (VAR_4 & VAR_1) {
  switch (VAR_5->ni_code) {
  case 129:
   (void)FUNC_3("refused");
   break;
  case 128:
   (void)FUNC_3("unknown qtype");
   break;
  }
  if (VAR_5->ni_flags & VAR_3)
   (void)FUNC_3(" truncated");
 }
 FUNC_4('\n');
 if (VAR_6 <= 0)
  FUNC_3("  no address\n");







 if (VAR_6 % (sizeof(u_int32_t) + sizeof(struct in6_addr)) == 0)
  VAR_9 = 1;
 while (VAR_6 > 0) {
  u_int32_t VAR_10 = 0;

  if (VAR_9) {
   uint32_t VAR_11;

   FUNC_1(&VAR_11, VAR_7, sizeof(VAR_11));
   VAR_10 = (u_int32_t)FUNC_2(VAR_11);
   VAR_7 += sizeof(u_int32_t);
   VAR_6 -= sizeof(u_int32_t);
  }

  if (FUNC_0(VAR_0, VAR_7, VAR_8, sizeof(VAR_8)) ==
      ((void*)0))
   FUNC_5(VAR_8, "?", sizeof(VAR_8));
  FUNC_3("  %s", VAR_8);
  if (VAR_9) {
   if (VAR_10 == 0xffffffff) {




    FUNC_3("(TTL=infty)");
   }
   else
    FUNC_3("(TTL=%u)", VAR_10);
  }
  FUNC_4('\n');

  VAR_6 -= sizeof(struct in6_addr);
  VAR_7 += sizeof(struct in6_addr);
 }
}
