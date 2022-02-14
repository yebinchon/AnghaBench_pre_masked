
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockbuf {struct mbuf* sb_mbtail; } ;
struct sockaddr {scalar_t__ sa_len; } ;
struct TYPE_2__ {scalar_t__ rsstype; scalar_t__ fibnum; scalar_t__ csum_flags; scalar_t__ flowid; int * rcvif; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct sockbuf*,struct mbuf*) ;
 int FUNC_3 (struct sockaddr const*,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct mbuf*,int *) ;
 int FUNC_7 (struct mbuf*,int ) ;
 int FUNC_8 (struct sockbuf*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_9(struct sockbuf *VAR_4, const struct sockaddr *VAR_5,
    struct mbuf *VAR_6, struct mbuf *VAR_7, struct mbuf *VAR_8)
{
 struct mbuf *VAR_9, *VAR_10, *VAR_11;

 if (VAR_5->sa_len > VAR_0)
  return (0);

 VAR_9 = FUNC_5(VAR_2, VAR_1);
 if (VAR_9 == ((void*)0))
  return (0);
 VAR_9->m_len = VAR_5->sa_len;
 FUNC_3(VAR_5, FUNC_7(VAR_9, VAR_3), VAR_5->sa_len);
 if (VAR_6) {
  FUNC_4(VAR_6);
  FUNC_6(VAR_6, ((void*)0));





  VAR_6->m_pkthdr.rcvif = ((void*)0);
  VAR_6->m_pkthdr.flowid = 0;
  VAR_6->m_pkthdr.csum_flags = 0;
  VAR_6->m_pkthdr.fibnum = 0;
  VAR_6->m_pkthdr.rsstype = 0;
 }
 if (VAR_8)
  VAR_8->m_next = VAR_6;
 else
  VAR_7 = VAR_6;
 VAR_9->m_next = VAR_7;
 for (VAR_10 = VAR_9; VAR_10->m_next != ((void*)0); VAR_10 = VAR_10->m_next)
  FUNC_8(VAR_4, VAR_10);
 FUNC_8(VAR_4, VAR_10);
 VAR_11 = VAR_10;
 FUNC_2(VAR_4, VAR_9);

 VAR_4->sb_mbtail = VAR_11;
 FUNC_0(VAR_4);

 FUNC_1(VAR_4);
 return (1);
}
