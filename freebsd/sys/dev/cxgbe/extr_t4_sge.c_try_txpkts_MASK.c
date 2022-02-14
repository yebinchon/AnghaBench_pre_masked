
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct txpkts {int wr_type; int len16; int plen; int npkt; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct fw_eth_tx_pkts_wr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct mbuf *VAR_2, struct mbuf *VAR_3, struct txpkts *VAR_4, u_int VAR_5)
{
 u_int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_0(VAR_2) || FUNC_0(VAR_3))
  return (1);

 VAR_7 = FUNC_2(VAR_2);
 VAR_8 = FUNC_2(VAR_3);
 if (VAR_7 + VAR_8 == 2) {
  VAR_4->wr_type = 1;
  VAR_9 = VAR_10 = FUNC_5();
 } else {
  VAR_4->wr_type = 0;
  VAR_9 = FUNC_4(VAR_7);
  VAR_10 = FUNC_4(VAR_8);
 }
 VAR_4->len16 = FUNC_1(sizeof(struct fw_eth_tx_pkts_wr), 16) + VAR_9 + VAR_10;
 VAR_6 = FUNC_1(VAR_4->len16, VAR_0 / 16);
 if (VAR_6 > VAR_1 || VAR_6 > VAR_5)
  return (1);

 VAR_4->plen = VAR_2->m_pkthdr.len + VAR_3->m_pkthdr.len;
 if (VAR_4->plen > 65535)
  return (1);

 VAR_4->npkt = 2;
 FUNC_3(VAR_2, VAR_9);
 FUNC_3(VAR_3, VAR_10);

 return (0);
}
