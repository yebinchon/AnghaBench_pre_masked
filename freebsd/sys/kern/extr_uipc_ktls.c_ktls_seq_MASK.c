
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockbuf {int sb_tls_seqno; } ;
struct mbuf_ext_pgs {int seqno; } ;
struct TYPE_2__ {struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {int m_flags; TYPE_1__ m_ext; struct mbuf* m_next; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

void
FUNC_1(struct sockbuf *VAR_1, struct mbuf *VAR_2)
{
 struct mbuf_ext_pgs *VAR_3;

 for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_next) {
  FUNC_0((VAR_2->m_flags & VAR_0) != 0,
      ("ktls_seq: mapped mbuf %p", VAR_2));

  VAR_3 = VAR_2->m_ext.ext_pgs;
  VAR_3->seqno = VAR_1->sb_tls_seqno;
  VAR_1->sb_tls_seqno++;
 }
}
