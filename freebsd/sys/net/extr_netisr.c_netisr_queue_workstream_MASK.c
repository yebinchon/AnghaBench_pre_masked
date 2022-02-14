
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct netisr_workstream {int nws_pendingbits; int nws_flags; } ;
struct netisr_work {scalar_t__ nw_len; scalar_t__ nw_qlimit; scalar_t__ nw_watermark; int nw_qdrops; int nw_queued; struct mbuf* nw_tail; struct mbuf* nw_head; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netisr_workstream*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_2(struct netisr_workstream *VAR_4, u_int VAR_5,
    struct netisr_work *VAR_6, struct mbuf *VAR_7, int *VAR_8)
{

 FUNC_0(VAR_4);

 *VAR_8 = 0;
 if (VAR_6->nw_len < VAR_6->nw_qlimit) {
  VAR_7->m_nextpkt = ((void*)0);
  if (VAR_6->nw_head == ((void*)0)) {
   VAR_6->nw_head = VAR_7;
   VAR_6->nw_tail = VAR_7;
  } else {
   VAR_6->nw_tail->m_nextpkt = VAR_7;
   VAR_6->nw_tail = VAR_7;
  }
  VAR_6->nw_len++;
  if (VAR_6->nw_len > VAR_6->nw_watermark)
   VAR_6->nw_watermark = VAR_6->nw_len;





  VAR_4->nws_pendingbits |= (1 << VAR_5);
  if (!(VAR_4->nws_flags &
      (VAR_2 | VAR_1 | VAR_3))) {
   VAR_4->nws_flags |= VAR_3;
   *VAR_8 = 1;
  }
  VAR_6->nw_queued++;
  return (0);
 } else {
  FUNC_1(VAR_7);
  VAR_6->nw_qdrops++;
  return (VAR_0);
 }
}
