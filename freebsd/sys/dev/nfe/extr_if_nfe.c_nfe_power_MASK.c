
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {int nfe_flags; int nfe_revid; scalar_t__ nfe_devid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfe_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct nfe_softc*,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_3(struct nfe_softc *VAR_11)
{
 uint32_t VAR_12;

 if ((VAR_11->nfe_flags & VAR_5) == 0)
  return;
 FUNC_2(VAR_11, VAR_7, VAR_8 | VAR_6);
 FUNC_2(VAR_11, VAR_0, VAR_1);
 FUNC_0(100);
 FUNC_2(VAR_11, VAR_0, 0);
 FUNC_0(100);
 FUNC_2(VAR_11, VAR_7, VAR_6);
 VAR_12 = FUNC_1(VAR_11, VAR_2);
 VAR_12 &= ~VAR_4;
 if (VAR_11->nfe_revid >= 0xa3 &&
     (VAR_11->nfe_devid == VAR_9 ||
     VAR_11->nfe_devid == VAR_10))
  VAR_12 |= VAR_3;
 FUNC_2(VAR_11, VAR_2, VAR_12);
}
