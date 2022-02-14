
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef int register_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct resource*,struct resource*) ;
 scalar_t__ VAR_6 ;
 struct resource* FUNC_2 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 int FUNC_5 (int ,int ,int,scalar_t__,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (struct resource*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_7)
{
 struct resource *VAR_8;
 struct resource *VAR_9;
 rman_res_t VAR_10;
 rman_res_t VAR_11;
 int VAR_12;
 int VAR_13;

 bus_space_tag_t VAR_14;
 bus_space_handle_t VAR_15;
 volatile int VAR_16;
 register_t VAR_17;



 if (FUNC_0(FUNC_7(VAR_7), VAR_7, VAR_5) == VAR_0)
  return VAR_0;

 FUNC_11(VAR_7, "Keyboard controller (i8042)");
 FUNC_10(VAR_7);
 VAR_13 = 0;
 if (FUNC_3(VAR_7, VAR_4, VAR_13, &VAR_10, &VAR_11) != 0)
  return VAR_0;
 if (VAR_10 == VAR_1 + VAR_2) {
  VAR_10 = VAR_1;
  VAR_11++;
 }
 if (VAR_11 > 1)
  FUNC_5(VAR_7, VAR_4, VAR_13, VAR_10, 1);
 VAR_8 = FUNC_2(VAR_7, VAR_4, &VAR_13, VAR_3);
 if (VAR_8 == ((void*)0))
  return VAR_0;
 VAR_13 = 1;
 if (FUNC_3(VAR_7, VAR_4, VAR_13, ((void*)0), ((void*)0)) != 0)
  FUNC_5(VAR_7, VAR_4, 1,
     VAR_10 + VAR_2, 1);
 VAR_9 = FUNC_2(VAR_7, VAR_4, &VAR_13, VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_7, VAR_4, 0, VAR_8);
  return VAR_0;
 }
 VAR_14 = FUNC_16(VAR_8);
 VAR_15 = FUNC_15(VAR_9);
 VAR_17 = FUNC_13();
 for (VAR_16 = 0; VAR_16 != 65535; VAR_16++) {
  if ((FUNC_6(VAR_14, VAR_15, 0) & 0x2) == 0)
   break;
 }
 FUNC_14(VAR_17);
 if (VAR_16 == 65535) {
  FUNC_4(VAR_7, VAR_4, 0, VAR_8);
  FUNC_4(VAR_7, VAR_4, 1, VAR_9);
  if (VAR_6)
   FUNC_9(VAR_7, "AT keyboard controller not found\n");
  return VAR_0;
 }


 FUNC_12(VAR_7);

 VAR_12 = FUNC_1(FUNC_8(VAR_7), VAR_8, VAR_9);

 FUNC_4(VAR_7, VAR_4, 0, VAR_8);
 FUNC_4(VAR_7, VAR_4, 1, VAR_9);

 return VAR_12;
}
