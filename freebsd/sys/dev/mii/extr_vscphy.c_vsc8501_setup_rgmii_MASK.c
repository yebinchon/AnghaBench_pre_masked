
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscphy_softc {scalar_t__ contype; int txdelay; int rxdelay; scalar_t__ laneswap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct vscphy_softc*,int ) ;
 int FUNC_1 (struct vscphy_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct vscphy_softc *VAR_11)
{
 int VAR_12;

 FUNC_1(VAR_11, VAR_3, VAR_4);

 VAR_12 = FUNC_0(VAR_11, VAR_5);
 VAR_12 &= ~VAR_10;
 VAR_12 &= ~VAR_9;
 VAR_12 &= ~(VAR_6 << VAR_8);
 VAR_12 &= ~(VAR_6 << VAR_7);
 if (VAR_11->laneswap)
  VAR_12 |= VAR_9;
 if (VAR_11->contype == VAR_0 ||
     VAR_11->contype == VAR_2) {
  VAR_12 |= VAR_11->txdelay << VAR_8;
 }
 if (VAR_11->contype == VAR_0 ||
     VAR_11->contype == VAR_1) {
  VAR_12 |= VAR_11->rxdelay << VAR_7;
 }
 FUNC_1(VAR_11, VAR_5, VAR_12);

 FUNC_1(VAR_11, VAR_3, 0);
}
