
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct wi_softc {int sc_txbuf; } ;
struct mbuf {scalar_t__ m_len; scalar_t__ m_data; struct mbuf* m_next; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct mbuf*,int ,int,scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct wi_softc*,int,int,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(struct wi_softc *VAR_0, int VAR_1, int VAR_2, struct mbuf *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct mbuf *VAR_7;

 for (VAR_7 = VAR_3; VAR_7 != ((void*)0) && VAR_4 > 0; VAR_7 = VAR_7->m_next) {
  if (VAR_7->m_len == 0)
   continue;

  VAR_6 = FUNC_1(VAR_7->m_len, VAR_4);

  if (((u_long)VAR_7->m_data) % 2 != 0 || VAR_6 % 2 != 0) {
   FUNC_0(VAR_7, 0, VAR_4, (caddr_t)&VAR_0->sc_txbuf);
   return FUNC_2(VAR_0, VAR_1, VAR_2, (caddr_t)&VAR_0->sc_txbuf,
       VAR_4);
  }

  if ((VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_7->m_data, VAR_6)) != 0)
   return VAR_5;

  VAR_2 += VAR_7->m_len;
  VAR_4 -= VAR_6;
 }
 return 0;
}
