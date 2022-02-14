
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr {int ip6r_nxt; int ip6r_len; int ip6r_type; int ip6r_segleft; } ;
struct in6_addr {int dummy; } ;
typedef int ntopbuf ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct in6_addr* FUNC_1 (void*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct in6_addr*,char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3, size_t VAR_4)
{
 struct in6_addr *VAR_5;
 char VAR_6[VAR_1];
 struct ip6_rthdr *VAR_7 = (struct ip6_rthdr *)VAR_3;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


 FUNC_5("nxt %u, len %u (%d bytes), type %u, ", VAR_7->ip6r_nxt,
     VAR_7->ip6r_len, (VAR_7->ip6r_len + 1) << 3, VAR_7->ip6r_type);
 if ((VAR_9 = FUNC_2(VAR_3)) >= 0) {
  FUNC_5("%d segments, ", VAR_9);
  FUNC_5("%d left\n", VAR_7->ip6r_segleft);
 } else {
  FUNC_5("segments unknown, ");
  FUNC_5("%d left\n", VAR_7->ip6r_segleft);
  return;
 }
 VAR_11 = (VAR_7->ip6r_len + 1) * 8;
 if (VAR_4 < (VAR_11 + FUNC_0(0))) {
  VAR_10 = VAR_9;
  VAR_12 = FUNC_3(VAR_2, 0);
  VAR_13 = FUNC_3(VAR_2, 1);
  VAR_9 -= (VAR_11 - (VAR_4 - FUNC_0(0))) /
      (VAR_13 - VAR_12) + 1;
  FUNC_7("segments truncated, showing only %d (total=%d)",
      VAR_9, VAR_10);
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_5 = FUNC_1(VAR_3, VAR_8);
  if (VAR_5 == ((void*)0))
   FUNC_5("   [%d]<NULL>\n", VAR_8);
  else {
   if (!FUNC_4(VAR_0, VAR_5, VAR_6,
       sizeof(VAR_6)))
    FUNC_6(VAR_6, "?", sizeof(VAR_6));
   FUNC_5("   [%d]%s\n", VAR_8, VAR_6);
  }
 }

 return;

}
