
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {int dummy; } ;
struct mbuf {scalar_t__ m_len; scalar_t__ m_data; struct mbuf* m_next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mbuf*,struct mbuf*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct mbuf*) ;

__attribute__((used)) static __inline struct mbuf *
FUNC_4(struct stge_softc *VAR_4, struct mbuf *VAR_5)
{
 struct mbuf *VAR_6;

 VAR_6 = ((void*)0);
 if (VAR_5->m_len <= (VAR_1 - VAR_0)) {
  FUNC_2(VAR_5->m_data, VAR_5->m_data + VAR_0, VAR_5->m_len);
  VAR_5->m_data += VAR_0;
  VAR_6 = VAR_5;
 } else {
  FUNC_0(VAR_6, VAR_3, VAR_2);
  if (VAR_6 != ((void*)0)) {
   FUNC_2(VAR_5->m_data, VAR_6->m_data, VAR_0);
   VAR_5->m_data += VAR_0;
   VAR_5->m_len -= VAR_0;
   VAR_6->m_len = VAR_0;
   FUNC_1(VAR_6, VAR_5);
   VAR_6->m_next = VAR_5;
  } else
   FUNC_3(VAR_5);
 }

 return (VAR_6);
}
