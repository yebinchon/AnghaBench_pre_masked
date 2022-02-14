
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {int csum_flags; int len; int rcvif; void* snd_tag; } ;
struct mbuf {scalar_t__ m_len; int m_flags; struct mbuf* m_next; scalar_t__ m_data; int m_type; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mbuf*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (int,int ) ;
 struct mbuf* FUNC_5 (int,int ) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (struct mbuf*,struct mbuf*) ;
 scalar_t__ FUNC_8 (struct mbuf*,int ) ;

struct mbuf *
FUNC_9(struct mbuf *VAR_5, int VAR_6, int VAR_7)
{
 struct mbuf *VAR_8, *VAR_9;
 u_int VAR_10 = VAR_6, VAR_11;

 FUNC_0(VAR_7);
 for (VAR_8 = VAR_5; VAR_8 && VAR_10 > VAR_8->m_len; VAR_8 = VAR_8->m_next)
  VAR_10 -= VAR_8->m_len;
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_11 = VAR_8->m_len - VAR_10;
 if (VAR_5->m_flags & VAR_3 && VAR_11 == 0) {
  VAR_9 = FUNC_5(VAR_7, VAR_5->m_type);
  if (VAR_9 == ((void*)0))
   return (((void*)0));
  VAR_9->m_next = VAR_8->m_next;
  VAR_8->m_next = ((void*)0);
  if (VAR_5->m_pkthdr.csum_flags & VAR_0) {
   VAR_9->m_pkthdr.snd_tag =
       FUNC_6(VAR_5->m_pkthdr.snd_tag);
   VAR_9->m_pkthdr.csum_flags |= VAR_0;
  } else
   VAR_9->m_pkthdr.rcvif = VAR_5->m_pkthdr.rcvif;
  VAR_9->m_pkthdr.len = VAR_5->m_pkthdr.len - VAR_6;
  VAR_5->m_pkthdr.len = VAR_6;
  return (VAR_9);
 } else if (VAR_5->m_flags & VAR_3) {
  VAR_9 = FUNC_5(VAR_7, VAR_5->m_type);
  if (VAR_9 == ((void*)0))
   return (((void*)0));
  if (VAR_5->m_pkthdr.csum_flags & VAR_0) {
   VAR_9->m_pkthdr.snd_tag =
       FUNC_6(VAR_5->m_pkthdr.snd_tag);
   VAR_9->m_pkthdr.csum_flags |= VAR_0;
  } else
   VAR_9->m_pkthdr.rcvif = VAR_5->m_pkthdr.rcvif;
  VAR_9->m_pkthdr.len = VAR_5->m_pkthdr.len - VAR_6;
  VAR_5->m_pkthdr.len = VAR_6;
  if (VAR_8->m_flags & VAR_2)
   goto extpacket;
  if (VAR_11 > VAR_1) {

   FUNC_1(VAR_9, 0);
   VAR_9->m_next = FUNC_9(VAR_8, VAR_10, VAR_7);
   if (VAR_9->m_next == ((void*)0)) {
    (void) FUNC_3(VAR_9);
    return (((void*)0));
   } else {
    VAR_9->m_len = 0;
    return (VAR_9);
   }
  } else
   FUNC_1(VAR_9, VAR_11);
 } else if (VAR_11 == 0) {
  VAR_9 = VAR_8->m_next;
  VAR_8->m_next = ((void*)0);
  return (VAR_9);
 } else {
  VAR_9 = FUNC_4(VAR_7, VAR_8->m_type);
  if (VAR_9 == ((void*)0))
   return (((void*)0));
  FUNC_1(VAR_9, VAR_11);
 }
extpacket:
 if (VAR_8->m_flags & VAR_2) {
  VAR_9->m_data = VAR_8->m_data + VAR_10;
  FUNC_7(VAR_9, VAR_8);
 } else {
  FUNC_2(FUNC_8(VAR_8, VAR_4) + VAR_10, FUNC_8(VAR_9, VAR_4), VAR_11);
 }
 VAR_9->m_len = VAR_11;
 VAR_8->m_len = VAR_10;
 VAR_9->m_next = VAR_8->m_next;
 VAR_8->m_next = ((void*)0);
 return (VAR_9);
}
