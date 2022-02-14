
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int platform_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(platform_t VAR_9)
{
 uint32_t VAR_10, VAR_11;
 bus_addr_t VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(&VAR_10, &VAR_11);
 if (VAR_13) {
  FUNC_3("Unable to get WDT base, do power down manually...");
  goto infinite;
 }

 VAR_13 = FUNC_1(VAR_8, VAR_7 + VAR_10,
     VAR_11, 0, &VAR_12);
 if (VAR_13) {
  FUNC_3("Unable to map WDT base, do power down manually...");
  goto infinite;
 }

 FUNC_2(VAR_8, VAR_12, VAR_6, VAR_3);
 FUNC_2(VAR_8, VAR_12, VAR_5, VAR_1);
 FUNC_2(VAR_8, VAR_12, VAR_4,
     VAR_0 | VAR_2);

infinite:
 while (1) {}
}
