
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mge_softc {int phy_sc; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int) ;
 struct mge_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7, int VAR_8, int VAR_9)
{
 uint32_t VAR_10;
 struct mge_softc *VAR_11;
 uint32_t VAR_12;

 VAR_11 = FUNC_5(VAR_7);

 FUNC_2();
 FUNC_4(VAR_11->phy_sc, VAR_0, VAR_2 &
     (VAR_3 | (VAR_9 << 21) | (VAR_8 << 16)));

 VAR_10 = VAR_6;
 while (--VAR_10 &&
     !(FUNC_1(VAR_11->phy_sc, VAR_0) & VAR_4))
  FUNC_0(VAR_5);

 if (VAR_10 == 0)
  FUNC_6(VAR_7, "Timeout while reading from PHY\n");

 VAR_12 = FUNC_1(VAR_11->phy_sc, VAR_0) & VAR_1;
 FUNC_3();

 return (VAR_12);
}
