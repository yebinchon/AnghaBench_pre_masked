
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

void
FUNC_6(platform_t VAR_7)
{
 bus_space_handle_t VAR_8, VAR_9, VAR_10;

 if (FUNC_1(VAR_6, VAR_0, VAR_1,
     0, &VAR_8) != 0)
  FUNC_4("Couldn't map the CPUCFG\n");
 if (FUNC_1(VAR_6, VAR_2, VAR_3,
     0, &VAR_9) != 0)
  FUNC_4("Couldn't map the CPUXCFG\n");
 if (FUNC_1(VAR_6, VAR_4, VAR_5, 0,
     &VAR_10) != 0)
  FUNC_4("Couldn't map the PRCM\n");

 FUNC_0(VAR_8, VAR_9, VAR_10);
 FUNC_3();
 FUNC_5();
 FUNC_2(VAR_6, VAR_9, VAR_3);
 FUNC_2(VAR_6, VAR_8, VAR_1);
 FUNC_2(VAR_6, VAR_10, VAR_5);
}
