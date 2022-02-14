
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; struct mbuf* m_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mbuf*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_4 (struct mbuf*,int ) ;

__attribute__((used)) static __inline int
FUNC_5(struct mbuf *VAR_5)
{
 int VAR_6 = VAR_1 - VAR_5->m_pkthdr.len;
 struct mbuf *VAR_7;


 if (VAR_5->m_pkthdr.len == VAR_5->m_len && FUNC_2(VAR_5) &&
     FUNC_1(VAR_5) >= VAR_6) {
  VAR_7 = VAR_5;
 } else {




  for (VAR_7 = VAR_5; VAR_7->m_next != ((void*)0); VAR_7 = VAR_7->m_next);
  if (!(FUNC_2(VAR_7) && FUNC_1(VAR_7) >= VAR_6)) {

   struct mbuf *VAR_8;

   FUNC_0(VAR_8, VAR_3, VAR_2);
   if (VAR_8 == ((void*)0))
    return (VAR_0);
   VAR_8->m_len = 0;
   VAR_7->m_next = VAR_8;
   VAR_7 = VAR_8;
  }
 }


 FUNC_3(FUNC_4(VAR_7, VAR_4) + VAR_7->m_len, 0, VAR_6);
 VAR_7->m_len += VAR_6;
 VAR_5->m_pkthdr.len += VAR_6;

 return (0);
}
