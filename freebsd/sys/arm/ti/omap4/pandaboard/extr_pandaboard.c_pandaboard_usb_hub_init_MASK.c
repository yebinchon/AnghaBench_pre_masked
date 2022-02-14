
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bus_space_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int VAR_18 ;
 int FUNC_6 (char*) ;

void
FUNC_7(void)
{
 bus_space_handle_t VAR_19, VAR_20, VAR_21, VAR_22;

 if (FUNC_4(VAR_18, VAR_15,
     VAR_16, 0, &VAR_19) != 0)
  FUNC_6("Couldn't map SCRM registers");
 if (FUNC_4(VAR_18, VAR_9,
     VAR_10, 0, &VAR_20) != 0)
  FUNC_6("Couldn't map GPIO1 registers");
 if (FUNC_4(VAR_18, VAR_11,
     VAR_12, 0, &VAR_21) != 0)
  FUNC_6("Couldn't map GPIO2 registers");
 if (FUNC_4(VAR_18, VAR_13,
     VAR_14, 0, &VAR_22) != 0)
  FUNC_6("Couldn't map SCM Padconf registers");







 FUNC_3(VAR_19 + VAR_17, (1 << 16) |
                           (0 << 1) |
                           (1 << 8));





 FUNC_2(VAR_22 + VAR_2, 0x0000);



 FUNC_3(VAR_20 + VAR_4, FUNC_1(VAR_20 +
     VAR_4) & ~(1UL << 1));
 FUNC_3(VAR_20 + VAR_3, (1UL << 1));
 FUNC_2(VAR_22 + VAR_1, 0x0003);



 FUNC_3(VAR_21 + VAR_7,
     FUNC_1(VAR_21 + VAR_7) & ~(1UL << 30));
 FUNC_3(VAR_21 + VAR_6, (1UL << 30));
 FUNC_2(VAR_22 + VAR_0, 0x0003);
 FUNC_0(10);
 FUNC_3(VAR_21 + VAR_8, (1UL << 30));



 FUNC_3(VAR_20 + VAR_5, (1UL << 1));
 FUNC_5(VAR_18, VAR_19, VAR_16);
 FUNC_5(VAR_18, VAR_20, VAR_10);
 FUNC_5(VAR_18, VAR_21, VAR_12);
 FUNC_5(VAR_18, VAR_22, VAR_14);
}
