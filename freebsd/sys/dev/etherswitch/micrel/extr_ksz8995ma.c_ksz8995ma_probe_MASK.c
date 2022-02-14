
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz8995ma_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ksz8995ma_softc*,int) ;
 struct ksz8995ma_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8)
{
 int VAR_9, VAR_10;
 struct ksz8995ma_softc *VAR_11;

 VAR_11 = FUNC_1(VAR_8);
 FUNC_0(VAR_11, sizeof(*VAR_11));

 VAR_9 = FUNC_4(VAR_8, VAR_4);
 VAR_10 = FUNC_4(VAR_8, VAR_5);
 if (VAR_7)
  FUNC_2(VAR_8,"Chip Identifier Register %x %x\n", VAR_9, VAR_10);


 if (VAR_9 != VAR_6 || (VAR_10 & VAR_3) !=
     VAR_2) {
  return (VAR_1);
 }

 FUNC_3(VAR_8, "Micrel KSZ8995MA SPI switch driver");
 return (VAR_0);
}
