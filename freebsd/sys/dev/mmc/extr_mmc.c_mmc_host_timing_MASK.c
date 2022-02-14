
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;
typedef int device_t ;


 int FUNC_0 (int,int) ;
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
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(device_t VAR_10, enum mmc_bus_timing VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_1(VAR_10);
 switch (VAR_11) {
 case 133:
  return (1);
 case 138:
  return (({ bool VAR_13; if (((VAR_12) & (VAR_0)) == (VAR_0)) VAR_13 = 1; else VAR_13 = 0; VAR_13; }));
 case 130:
  return (({ bool VAR_14; if (((VAR_12) & (VAR_7)) == (VAR_7)) VAR_14 = 1; else VAR_14 = 0; VAR_14; }));
 case 129:
  return (({ bool VAR_15; if (((VAR_12) & (VAR_8)) == (VAR_8)) VAR_15 = 1; else VAR_15 = 0; VAR_15; }));
 case 132:
  return (({ bool VAR_16; if (((VAR_12) & (VAR_5)) == (VAR_5)) VAR_16 = 1; else VAR_16 = 0; VAR_16; }));
 case 128:
  return (({ bool VAR_17; if (((VAR_12) & (VAR_9)) == (VAR_9)) VAR_17 = 1; else VAR_17 = 0; VAR_17; }));
 case 131:
  return (({ bool VAR_18; if (((VAR_12) & (VAR_6)) == (VAR_6)) VAR_18 = 1; else VAR_18 = 0; VAR_18; }));
 case 137:
  return (({ bool VAR_19; if (((VAR_12) & (VAR_1)) == (VAR_1)) VAR_19 = 1; else VAR_19 = 0; VAR_19; }));
 case 136:
  return (({ bool VAR_20; if (((VAR_12) & (VAR_3)) == (VAR_3)) VAR_20 = 1; else VAR_20 = 0; VAR_20; }));
 case 135:
  return (({ bool VAR_21; if (((VAR_12) & (VAR_4)) == (VAR_4)) VAR_21 = 1; else VAR_21 = 0; VAR_21; }));
 case 134:
  return (({ bool VAR_22; if (((VAR_12) & (VAR_4 | VAR_2)) == (VAR_4 | VAR_2)) VAR_22 = 1; else VAR_22 = 0; VAR_22; }));

 }



 return (0);
}
