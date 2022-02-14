
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {struct mbuf* sb_mb; struct mbuf* sb_lastrecord; int * sb_mbtail; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct sockbuf*) ;

__attribute__((used)) static __inline void
FUNC_1(struct sockbuf *VAR_0, struct mbuf *VAR_1)
{

 FUNC_0(VAR_0);




 if (VAR_0->sb_mb != ((void*)0))
  VAR_0->sb_mb->m_nextpkt = VAR_1;
 else
  VAR_0->sb_mb = VAR_1;







 if (VAR_0->sb_mb == ((void*)0)) {
  VAR_0->sb_mbtail = ((void*)0);
  VAR_0->sb_lastrecord = ((void*)0);
 } else if (VAR_0->sb_mb->m_nextpkt == ((void*)0))
  VAR_0->sb_lastrecord = VAR_0->sb_mb;
}
