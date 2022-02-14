
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e6060sw_softc {int sw_model; int smi_offset; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct e6060sw_softc*,int) ;
 int FUNC_2 (int ) ;
 struct e6060sw_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*,char*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8)
{
 int VAR_9;
 struct e6060sw_softc *VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13;
 char VAR_14[80];

 VAR_10 = FUNC_3(VAR_8);
 FUNC_1(VAR_10, sizeof(*VAR_10));

 VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < 2; ++VAR_12) {
  VAR_9 = FUNC_0(FUNC_2(VAR_8),
      VAR_1 + VAR_12 * 0x10, VAR_6);
  if (VAR_7)
   FUNC_4(VAR_8,"Switch Identifier Register %x\n",
       VAR_9);

  VAR_11 = VAR_9 >> 4;
  if (VAR_11 == VAR_2 ||
      VAR_11 == VAR_3 || VAR_11 == VAR_4) {
   VAR_10->sw_model = VAR_11;
   VAR_10->smi_offset = VAR_12 * 0x10;
   break;
  }
 }

 if (VAR_11 == VAR_2)
  VAR_13 = "88E6060";
 else if (VAR_11 == VAR_3)
  VAR_13 = "88E6063";
 else if (VAR_11 == VAR_4)
  VAR_13 = "88E6065";
 else
  return (VAR_5);

 FUNC_6(VAR_14, "Marvell %s MDIO switch driver at 0x%02x",
     VAR_13, VAR_10->smi_offset);
 FUNC_5(VAR_8, VAR_14);

 return (VAR_0);
}
