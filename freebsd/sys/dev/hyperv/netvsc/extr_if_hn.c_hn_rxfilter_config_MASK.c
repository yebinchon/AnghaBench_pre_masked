
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_flags; int if_multiaddrs; } ;
struct hn_softc {int hn_flags; struct ifnet* hn_ifp; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct hn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct hn_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct hn_softc *VAR_8)
{
 struct ifnet *VAR_9 = VAR_8->hn_ifp;
 uint32_t VAR_10;

 FUNC_1(VAR_8);






 if ((VAR_9->if_flags & VAR_3) || (VAR_8->hn_flags & VAR_0)) {
  VAR_10 = VAR_7;
 } else {
  VAR_10 = VAR_6;
  if (VAR_9->if_flags & VAR_2)
   VAR_10 |= VAR_5;

  if ((VAR_9->if_flags & VAR_1) ||
      !FUNC_0(&VAR_9->if_multiaddrs))
   VAR_10 |= VAR_4;
 }
 return (FUNC_2(VAR_8, VAR_10));
}
