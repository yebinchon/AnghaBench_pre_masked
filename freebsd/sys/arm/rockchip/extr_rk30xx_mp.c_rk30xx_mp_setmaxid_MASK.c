
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int platform_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;

void
FUNC_4(platform_t VAR_7)
{
 bus_space_handle_t VAR_8;
 int VAR_9;
 uint32_t VAR_10;

 if (VAR_6 != 0)
  return;

 if (FUNC_0(VAR_4, VAR_2, VAR_3, 0, &VAR_8) != 0)
  FUNC_3("Could not map the SCU");

 VAR_10 = FUNC_1(VAR_4, VAR_8, VAR_0);
 VAR_9 = (VAR_10 & VAR_1) + 1;
 FUNC_2(VAR_4, VAR_8, VAR_3);

 VAR_6 = VAR_9;
 VAR_5 = VAR_9 - 1;
}
