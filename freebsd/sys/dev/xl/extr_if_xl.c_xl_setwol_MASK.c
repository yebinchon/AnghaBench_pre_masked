
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct xl_softc {int xl_flags; scalar_t__ xl_pmcap; int xl_dev; struct ifnet* xl_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct xl_softc *VAR_8)
{
 struct ifnet *VAR_9;
 u_int16_t VAR_10, VAR_11;

 if ((VAR_8->xl_flags & VAR_6) == 0)
  return;

 VAR_9 = VAR_8->xl_ifp;
 FUNC_2(7);

 FUNC_0(VAR_8, VAR_7);
 VAR_10 = 0;
 if ((VAR_9->if_capenable & VAR_0) != 0)
  VAR_10 |= VAR_3;
 FUNC_1(VAR_8, VAR_7, VAR_10);

 if ((VAR_9->if_capenable & VAR_0) != 0)
  FUNC_1(VAR_8, VAR_5, VAR_4);

 VAR_11 = FUNC_3(VAR_8->xl_dev,
     VAR_8->xl_pmcap + VAR_2, 2);
 if ((VAR_9->if_capenable & VAR_0) != 0)
  VAR_11 |= VAR_1;
 else
  VAR_11 &= ~VAR_1;
 FUNC_4(VAR_8->xl_dev,
     VAR_8->xl_pmcap + VAR_2, VAR_11, 2);
}
