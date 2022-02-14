
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
struct are_softc {struct ifnet* are_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct are_softc*,int ) ;
 int FUNC_1 (struct are_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct are_softc *VAR_7)
{
 struct ifnet *VAR_8;
 int VAR_9[2];
 int VAR_10;

 VAR_8 = VAR_7->are_ifp;

 VAR_10 = FUNC_0(VAR_7, VAR_2);
 VAR_10 &= ~(VAR_6 | VAR_5);
 VAR_10 |= VAR_4;

 if (VAR_8->if_flags & VAR_3)
  VAR_10 |= VAR_6;






 VAR_9[0] = VAR_9[1] = 0xffffffff;
 VAR_10 |= VAR_5;

 FUNC_1(VAR_7, VAR_1, VAR_9[0]);
 FUNC_1(VAR_7, VAR_0, VAR_9[1]);
 FUNC_1(VAR_7, VAR_2, VAR_10);

 return 0;
}
