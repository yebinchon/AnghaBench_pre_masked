
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {struct mbuf* sb_mb; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 struct mbuf* FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct sockbuf*,struct mbuf*) ;

void
FUNC_4(struct sockbuf *VAR_0)
{
 struct mbuf *VAR_1;

 FUNC_1(VAR_0);

 VAR_1 = VAR_0->sb_mb;
 if (VAR_1) {
  VAR_0->sb_mb = VAR_1->m_nextpkt;
  do {
   FUNC_3(VAR_0, VAR_1);
   VAR_1 = FUNC_2(VAR_1);
  } while (VAR_1);
 }
 FUNC_0(VAR_0);
}
