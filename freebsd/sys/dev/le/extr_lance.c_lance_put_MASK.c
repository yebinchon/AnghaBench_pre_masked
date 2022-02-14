
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; } ;
struct lance_softc {int (* sc_zerobuf ) (struct lance_softc*,int,int) ;int (* sc_copytobuf ) (struct lance_softc*,int ,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct lance_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*,int ) ;
 int FUNC_3 (struct lance_softc*,int ,int,int) ;
 int FUNC_4 (struct lance_softc*,int,int) ;

int
FUNC_5(struct lance_softc *VAR_3, int VAR_4, struct mbuf *VAR_5)
{
 struct mbuf *VAR_6;
 int VAR_7, VAR_8 = 0;

 FUNC_0(VAR_3, VAR_1);

 for (; VAR_5; VAR_5 = VAR_6) {
  VAR_7 = VAR_5->m_len;
  if (VAR_7 == 0) {
   VAR_6 = FUNC_1(VAR_5);
   VAR_5 = ((void*)0);
   continue;
  }
  (*VAR_3->sc_copytobuf)(VAR_3, FUNC_2(VAR_5, VAR_2), VAR_4, VAR_7);
  VAR_4 += VAR_7;
  VAR_8 += VAR_7;
  VAR_6 = FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }
 if (VAR_8 < VAR_0) {
  (*VAR_3->sc_zerobuf)(VAR_3, VAR_4, VAR_0 - VAR_8);
  VAR_8 = VAR_0;
 }
 return (VAR_8);
}
