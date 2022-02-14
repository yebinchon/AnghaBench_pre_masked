
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_mmc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aw_mmc_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct aw_mmc_softc*,int ,int) ;
 int FUNC_4 (struct aw_mmc_softc*) ;

__attribute__((used)) static int
FUNC_5(struct aw_mmc_softc *VAR_12)
{
 uint32_t VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14 != 0)
  return (VAR_14);


 FUNC_3(VAR_12, VAR_9,
     FUNC_1(VAR_10) |
     FUNC_2(VAR_11));


 FUNC_3(VAR_12, VAR_7, 0);


 FUNC_3(VAR_12, VAR_8, 0xffffffff);


 FUNC_3(VAR_12, VAR_0, 0xdeb);


 FUNC_3(VAR_12, VAR_1, 0xceaa0000);

 FUNC_3(VAR_12, VAR_6, 0xffffffff);


 VAR_13 = FUNC_0(VAR_12, VAR_2);
 VAR_13 |= VAR_4;
 VAR_13 &= ~VAR_3;
 VAR_13 &= ~VAR_5;
 FUNC_3(VAR_12, VAR_2, VAR_13);

 return (0);
}
