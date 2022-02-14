
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xl_softc {scalar_t__ xl_type; } ;
struct ifnet {struct xl_softc* if_softc; } ;


 int FUNC_0 (struct xl_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xl_softc*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_1)
{
 struct xl_softc *VAR_2 = VAR_1->if_softc;

 FUNC_0(VAR_2);

 if (VAR_2->xl_type == VAR_0)
  FUNC_2(VAR_1);
 else
  FUNC_3(VAR_1);

 FUNC_1(VAR_2);
}
