
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_handle_t ;
typedef int bus_addr_t ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_19 ;

int
FUNC_4(void)
{
 bus_space_handle_t VAR_20;
 uint32_t VAR_21;
 int VAR_22;

 VAR_22 = FUNC_1(VAR_19, (bus_addr_t)VAR_18,
     VAR_17, 0, &VAR_20);
 if (VAR_22 != 0)
  return (VAR_22);

 VAR_21 = (VAR_16 & VAR_7) << VAR_8;
 VAR_21 |= (VAR_13 & VAR_3) << VAR_4;
 VAR_21 |= (VAR_14 & VAR_11) << VAR_12;

 VAR_21 |= (0x1 & VAR_9) << VAR_10;
 VAR_21 |= (0x1 & VAR_5) << VAR_6;


 FUNC_3(VAR_19, VAR_20, VAR_2,
     VAR_21);

 FUNC_3(VAR_19, VAR_20, VAR_1,
     VAR_15);

 FUNC_0(VAR_19, VAR_20, 0, VAR_17,
     VAR_0);
 FUNC_2(VAR_19, VAR_20, VAR_17);

 return (VAR_22);
}
