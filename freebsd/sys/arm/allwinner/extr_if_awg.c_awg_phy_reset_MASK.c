
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int ,scalar_t__,int *,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,int *,int) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
 pcell_t VAR_6[4], VAR_7[3];
 phandle_t VAR_8, VAR_9;
 device_t VAR_10;
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_8 = FUNC_9(VAR_5);
 if (FUNC_5(VAR_8, "allwinner,reset-gpio", VAR_6,
     sizeof(VAR_6)) <= 0)
  return (0);

 if (FUNC_5(VAR_8, "allwinner,reset-delays-us", VAR_7,
     sizeof(VAR_7)) <= 0)
  return (VAR_0);

 VAR_9 = FUNC_7(VAR_6[0]);
 if ((VAR_10 = FUNC_4(VAR_6[0])) == ((void*)0))
  return (VAR_0);

 if (FUNC_1(VAR_10, VAR_8, VAR_9, FUNC_8(VAR_6) - 1,
     VAR_6 + 1, &VAR_11, &VAR_12) != 0)
  return (VAR_0);

 VAR_13 = VAR_3;
 if (FUNC_6(VAR_8, "allwinner,reset-active-low"))
  VAR_13 = VAR_2;

 if (VAR_12 & VAR_1)
  VAR_13 = !VAR_13;

 FUNC_3(VAR_10, VAR_11, VAR_4);
 FUNC_2(VAR_10, VAR_11, VAR_13);
 FUNC_0(VAR_7[0]);
 FUNC_2(VAR_10, VAR_11, !VAR_13);
 FUNC_0(VAR_7[1]);
 FUNC_2(VAR_10, VAR_11, VAR_13);
 FUNC_0(VAR_7[2]);

 return (0);
}
