
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mbq {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 int VAR_0 ;
 struct mbuf* FUNC_1 (struct mbq*) ;
 int FUNC_2 (struct mbq*) ;
 int VAR_1 ;
 struct mbuf* FUNC_3 (struct ifnet*,struct mbuf*,struct mbuf*) ;
 int FUNC_4 (char*,struct mbuf*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_2, struct mbq *VAR_3)
{
 struct mbuf *VAR_4;
 struct mbuf *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);



 while ((VAR_4 = FUNC_1(VAR_3)) != ((void*)0)) {
  if (VAR_1 & VAR_0)
   FUNC_4("sending up pkt %p size %d", VAR_4, FUNC_0(VAR_4));
  VAR_6 = FUNC_3(VAR_2, VAR_4, VAR_6);
  if (VAR_5 == ((void*)0))
   VAR_5 = VAR_6;
 }
 if (VAR_5)
  FUNC_3(VAR_2, ((void*)0), VAR_5);
 FUNC_2(VAR_3);
}
