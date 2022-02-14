
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_flags; int m_len; struct mbuf* m_next; scalar_t__ m_data; TYPE_1__ m_pkthdr; int m_type; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct mbuf*,struct mbuf*,int) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int,int ) ;
 struct mbuf* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mbuf*,struct mbuf*) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (struct mbuf*,int ) ;

struct mbuf *
FUNC_10(struct mbuf *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct mbuf *VAR_8, **VAR_9;
 int VAR_10 = VAR_5;
 struct mbuf *VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_10 >= 0, ("m_copym, negative off %d", VAR_10));
 FUNC_0(VAR_6 >= 0, ("m_copym, negative len %d", VAR_6));
 FUNC_1(VAR_7);
 if (VAR_10 == 0 && VAR_4->m_flags & VAR_2)
  VAR_12 = 1;
 while (VAR_10 > 0) {
  FUNC_0(VAR_4 != ((void*)0), ("m_copym, offset > size of mbuf chain"));
  if (VAR_10 < VAR_4->m_len)
   break;
  VAR_10 -= VAR_4->m_len;
  VAR_4 = VAR_4->m_next;
 }
 VAR_9 = &VAR_11;
 VAR_11 = ((void*)0);
 while (VAR_6 > 0) {
  if (VAR_4 == ((void*)0)) {
   FUNC_0(VAR_6 == VAR_0,
       ("m_copym, length > size of mbuf chain"));
   break;
  }
  if (VAR_12)
   VAR_8 = FUNC_6(VAR_7, VAR_4->m_type);
  else
   VAR_8 = FUNC_5(VAR_7, VAR_4->m_type);
  *VAR_9 = VAR_8;
  if (VAR_8 == ((void*)0))
   goto nospace;
  if (VAR_12) {
   if (!FUNC_3(VAR_8, VAR_4, VAR_7))
    goto nospace;
   if (VAR_6 == VAR_0)
    VAR_8->m_pkthdr.len -= VAR_5;
   else
    VAR_8->m_pkthdr.len = VAR_6;
   VAR_12 = 0;
  }
  VAR_8->m_len = FUNC_8(VAR_6, VAR_4->m_len - VAR_10);
  if (VAR_4->m_flags & VAR_1) {
   VAR_8->m_data = VAR_4->m_data + VAR_10;
   FUNC_7(VAR_8, VAR_4);
  } else
   FUNC_2(FUNC_9(VAR_4, VAR_3)+VAR_10, FUNC_9(VAR_8, VAR_3),
       (u_int)VAR_8->m_len);
  if (VAR_6 != VAR_0)
   VAR_6 -= VAR_8->m_len;
  VAR_10 = 0;
  VAR_4 = VAR_4->m_next;
  VAR_9 = &VAR_8->m_next;
 }

 return (VAR_11);
nospace:
 FUNC_4(VAR_11);
 return (((void*)0));
}
