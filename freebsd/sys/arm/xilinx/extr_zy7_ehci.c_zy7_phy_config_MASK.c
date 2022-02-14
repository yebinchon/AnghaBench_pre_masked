
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_12, bus_space_tag_t VAR_13, bus_space_handle_t VAR_14)
{
 phandle_t VAR_15;
 char VAR_16[64];
 uint32_t VAR_17;
 int VAR_18;

 VAR_15 = FUNC_5(VAR_12);

 if (FUNC_1(VAR_15, "phy_type", VAR_16, sizeof(VAR_16)) > 0) {
  VAR_17 = FUNC_3(VAR_13, VAR_14, FUNC_2(1));
  VAR_17 &= ~(VAR_1 | VAR_5 |
       VAR_0);

  if (FUNC_6(VAR_16,"ulpi") == 0)
   VAR_17 |= VAR_3;
  else if (FUNC_6(VAR_16,"utmi") == 0)
   VAR_17 |= VAR_4;
  else if (FUNC_6(VAR_16,"utmi-wide") == 0)
   VAR_17 |= (VAR_4 |
       VAR_5);
  else if (FUNC_6(VAR_16, "serial") == 0)
   VAR_17 |= VAR_2;

  FUNC_4(VAR_13, VAR_14, FUNC_2(1), VAR_17);
 }

 if (FUNC_1(VAR_15, "phy_vbus_ext", VAR_16, sizeof(VAR_16)) >= 0) {


  FUNC_4(VAR_13, VAR_14, VAR_6,
      VAR_10 |
      VAR_11 |
      (0 << VAR_9) |
      (0x0b << VAR_7) |
      (0x60 << VAR_8)
   );

  VAR_18 = 100;
  while ((FUNC_3(VAR_13, VAR_14, VAR_6) &
   VAR_10) != 0) {
   if (--VAR_18 < 0)
    return (-1);
   FUNC_0(1);
  }
 }

 return (0);
}
