
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int gpio_prop ;
typedef int * device_t ;
typedef int delay_prop ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ,scalar_t__,int*,int*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int ) ;
 int * FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,char*,int*,int) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4)
{
 pcell_t VAR_5[4];
 pcell_t VAR_6[3];
 phandle_t VAR_7, VAR_8;
 device_t VAR_9;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12;

 VAR_7 = FUNC_10(VAR_4);
 if (FUNC_5(VAR_7, "snps,reset-gpio",
     VAR_5, sizeof(VAR_5)) <= 0)
  return (0);

 if (FUNC_5(VAR_7, "snps,reset-delays-us",
     VAR_6, sizeof(VAR_6)) <= 0) {
  FUNC_8(VAR_4,
      "Wrong property for snps,reset-delays-us");
  return (VAR_0);
 }

 VAR_8 = FUNC_7(VAR_5[0]);
 if ((VAR_9 = FUNC_4(VAR_5[0])) == ((void*)0)) {
  FUNC_8(VAR_4,
      "Can't find gpio controller for phy reset\n");
  return (VAR_0);
 }

 if (FUNC_1(VAR_9, VAR_7, VAR_8,
     FUNC_9(VAR_5) - 1,
     VAR_5 + 1, &VAR_10, &VAR_11) != 0) {
  FUNC_8(VAR_4, "Can't map gpio for phy reset\n");
  return (VAR_0);
 }

 VAR_12 = VAR_2;
 if (FUNC_6(VAR_7, "snps,reset-active-low"))
  VAR_12 = VAR_1;

 FUNC_3(VAR_9, VAR_10, VAR_3);
 FUNC_2(VAR_9, VAR_10, VAR_12);
 FUNC_0(VAR_6[0] * 5);
 FUNC_2(VAR_9, VAR_10, !VAR_12);
 FUNC_0(VAR_6[1] * 5);
 FUNC_2(VAR_9, VAR_10, VAR_12);
 FUNC_0(VAR_6[2] * 5);

 return (0);
}
