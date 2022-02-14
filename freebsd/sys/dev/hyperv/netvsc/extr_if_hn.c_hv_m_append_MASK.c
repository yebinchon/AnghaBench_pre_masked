
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_pkthdr; struct mbuf* m_next; int m_type; } ;
typedef int c_caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int,int,int) ;
 int VAR_3 ;
 struct mbuf* FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_5(struct mbuf *VAR_4, int VAR_5, c_caddr_t VAR_6)
{
 struct mbuf *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_7 = VAR_4; VAR_7->m_next != ((void*)0); VAR_7 = VAR_7->m_next)
  ;
 VAR_9 = VAR_5;
 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 > 0) {



  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;
  FUNC_1(VAR_6, FUNC_4(VAR_7, VAR_3) + VAR_7->m_len, VAR_10);
  VAR_7->m_len += VAR_10;
  VAR_6 += VAR_10;
  VAR_9 -= VAR_10;
 }
 while (VAR_9 > 0) {




  VAR_8 = FUNC_2(VAR_1, VAR_7->m_type, 0, VAR_0);
  if (VAR_8 == ((void*)0))
   break;
  VAR_8->m_len = FUNC_3(VAR_0, VAR_9);
  FUNC_1(VAR_6, FUNC_4(VAR_8, VAR_3), VAR_8->m_len);
  VAR_6 += VAR_8->m_len;
  VAR_9 -= VAR_8->m_len;
  VAR_7->m_next = VAR_8;
  VAR_7 = VAR_8;
 }
 if (VAR_4->m_flags & VAR_2)
  VAR_4->m_pkthdr.len += VAR_5 - VAR_9;

 return (VAR_9 == 0);
}
