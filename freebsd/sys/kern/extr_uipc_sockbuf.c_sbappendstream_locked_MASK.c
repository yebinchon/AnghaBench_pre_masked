
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_mb; scalar_t__ sb_lastrecord; int sb_mbtail; int * sb_tls_info; } ;
struct mbuf {int * m_nextpkt; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct sockbuf*) ;
 int FUNC_3 (struct sockbuf*) ;
 int FUNC_4 (struct sockbuf*,struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int,int ) ;
 int FUNC_6 (struct sockbuf*,struct mbuf*,int ) ;

void
FUNC_7(struct sockbuf *VAR_2, struct mbuf *VAR_3, int VAR_4)
{
 FUNC_3(VAR_2);

 FUNC_0(VAR_3->m_nextpkt == ((void*)0),("sbappendstream 0"));
 FUNC_0(VAR_2->sb_mb == VAR_2->sb_lastrecord,("sbappendstream 1"));

 FUNC_1(VAR_2);







 FUNC_5(VAR_3, 1, VAR_4 & VAR_1 ? VAR_0 : 0);

 FUNC_6(VAR_2, VAR_3, VAR_2->sb_mbtail);

 VAR_2->sb_lastrecord = VAR_2->sb_mb;
 FUNC_2(VAR_2);
}
