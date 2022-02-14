
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct siba_devinfo {struct bhnd_resource** cfg_res; } ;
struct bhnd_resource {int dummy; } ;
typedef scalar_t__ device_t ;


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
 int VAR_12 ;
 int FUNC_0 (struct bhnd_resource*,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 struct siba_devinfo* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,struct siba_devinfo*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_13, device_t VAR_14, uint16_t VAR_15,
    uint16_t VAR_16)
{
 struct siba_devinfo *VAR_17;
 struct bhnd_resource *VAR_18;
 uint32_t VAR_19, VAR_20;
 uint16_t VAR_21;
 int VAR_22;

 if (FUNC_3(VAR_14) != VAR_13)
  return (VAR_2);

 VAR_17 = FUNC_2(VAR_14);


 if ((VAR_18 = VAR_17->cfg_res[0]) == ((void*)0))
  return (VAR_3);


 VAR_21 = VAR_0 | VAR_1;
 if (VAR_15 & VAR_21)
  return (VAR_2);


 if ((VAR_22 = FUNC_1(VAR_14, VAR_16)))
  return (VAR_22);




 VAR_19 = VAR_10 |
   (VAR_15 << VAR_11) |
   (VAR_0 << VAR_11) |
   (VAR_1 << VAR_11);

 FUNC_4(VAR_14, VAR_17, VAR_6,
     VAR_19, VAR_12);


 if (FUNC_0(VAR_18, VAR_5) & VAR_9) {
  FUNC_4(VAR_14, VAR_17, VAR_5,
      0x0, VAR_9);
 }


 VAR_20 = FUNC_0(VAR_18, VAR_4);
 if (VAR_20 & (VAR_7|VAR_8)) {
  FUNC_4(VAR_14, VAR_17, VAR_4, 0x0,
      VAR_7|VAR_8);
 }



 FUNC_4(VAR_14, VAR_17, VAR_6, 0x0,
     VAR_10);



 FUNC_4(VAR_14, VAR_17, VAR_6, 0x0,
     (VAR_1 << VAR_11));

 return (0);
}
