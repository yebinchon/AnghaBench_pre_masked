
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni_msg {void* b_rptr; } ;
struct TYPE_2__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_data; struct mbuf* m_next; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct mbuf*,int ,int ) ;
 int FUNC_3 (struct mbuf*,int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (struct mbuf*) ;
 size_t FUNC_6 (struct uni_msg*) ;

struct mbuf *
FUNC_7(struct uni_msg *VAR_5, void *VAR_6, size_t VAR_7)
{
 struct mbuf *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;

 FUNC_3(VAR_9, VAR_4, VAR_3);
 if (VAR_9 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_7 <= VAR_1, ("uni_msg_pack_mbuf: hdrlen > MHLEN"));

 if (VAR_7 != 0) {
  FUNC_4(VAR_6, VAR_9->m_data, VAR_7);
  VAR_9->m_len = VAR_7;
  VAR_9->m_pkthdr.len = VAR_7;

 } else {
  if ((VAR_11 = FUNC_6(VAR_5)) > VAR_1) {
   if (!(FUNC_1(VAR_9, VAR_4)))
    goto drop;
   if (VAR_11 > VAR_0)
    VAR_11 = VAR_0;
  }

  FUNC_4(VAR_5->b_rptr, VAR_9->m_data, VAR_11);
  VAR_5->b_rptr += VAR_11;
  VAR_9->m_len = VAR_11;
  VAR_9->m_pkthdr.len = VAR_11;
 }

 VAR_10 = VAR_9;
 while (VAR_5 != ((void*)0) && (VAR_11 = FUNC_6(VAR_5)) != 0) {
  FUNC_2(VAR_8, VAR_4, VAR_3);
  if (VAR_8 == ((void*)0))
   goto drop;
  VAR_10->m_next = VAR_8;
  VAR_10 = VAR_8;

  if (VAR_11 > VAR_2) {
   if (!(FUNC_1(VAR_8, VAR_4)))
    goto drop;
   if (VAR_11 > VAR_0)
    VAR_11 = VAR_0;
  }

  FUNC_4(VAR_5->b_rptr, VAR_8->m_data, VAR_11);
  VAR_5->b_rptr += VAR_11;
  VAR_8->m_len = VAR_11;
  VAR_9->m_pkthdr.len += VAR_11;
 }

 return (VAR_9);

  drop:
 FUNC_5(VAR_9);
 return (((void*)0));
}
