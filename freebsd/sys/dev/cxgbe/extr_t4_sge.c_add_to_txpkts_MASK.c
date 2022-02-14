
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct txpkts {int wr_type; int plen; int len16; int npkt; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct mbuf *VAR_2, struct txpkts *VAR_3, u_int VAR_4)
{
 u_int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_3->wr_type == 0 || VAR_3->wr_type == 1);

 if (FUNC_1(VAR_2))
  return (1);

 VAR_8 = FUNC_3(VAR_2);
 if (VAR_3->wr_type == 1 && VAR_8 != 1)
  return (1);

 VAR_5 = VAR_3->plen + VAR_2->m_pkthdr.len;
 if (VAR_5 > 65535)
  return (1);

 if (VAR_3->wr_type == 0)
  VAR_6 = FUNC_5(VAR_8);
 else
  VAR_6 = FUNC_6();
 VAR_7 = FUNC_2(VAR_3->len16 + VAR_6, VAR_0 / 16);
 if (VAR_7 > VAR_1 || VAR_7 > VAR_4)
  return (1);

 VAR_3->npkt++;
 VAR_3->plen = VAR_5;
 VAR_3->len16 += VAR_6;
 FUNC_4(VAR_2, VAR_6);

 return (0);
}
