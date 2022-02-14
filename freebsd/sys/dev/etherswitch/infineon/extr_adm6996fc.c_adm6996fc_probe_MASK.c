
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adm6996fc_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct adm6996fc_softc*,int) ;
 int FUNC_2 (int ) ;
 struct adm6996fc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10;
 struct adm6996fc_softc *VAR_11;

 VAR_11 = FUNC_3(VAR_7);
 FUNC_1(VAR_11, sizeof(*VAR_11));

 VAR_8 = FUNC_0(FUNC_2(VAR_7), VAR_0);
 VAR_9 = FUNC_0(FUNC_2(VAR_7), VAR_1);
 VAR_10 = ((VAR_9 << 16) | VAR_8) >> VAR_2;
 if (VAR_6)
  FUNC_4(VAR_7,"Chip Identifier Register %x %x\n", VAR_8,
      VAR_9);


 if (VAR_10 != VAR_3) {
  return (VAR_5);
 }

 FUNC_5(VAR_7, "Infineon ADM6996FC/M/MX MDIO switch driver");
 return (VAR_4);
}
