
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int platform_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

void
FUNC_9(platform_t VAR_17)
{
 bus_space_handle_t VAR_18;
 bus_space_handle_t VAR_19;

 uint32_t VAR_20;
 int VAR_21;

 if (FUNC_0(VAR_14, VAR_5, VAR_6, 0, &VAR_18) != 0)
  FUNC_6("Couldn't map the SCU\n");
 if (FUNC_0(VAR_14, VAR_12, VAR_13, 0, &VAR_19) != 0)
  FUNC_6("Couldn't map the system reset controller (SRC)\n");






 FUNC_3(VAR_14, VAR_18, VAR_4, 0x0000ffff);






 VAR_20 = FUNC_1(VAR_14, VAR_18, VAR_2);
 FUNC_3(VAR_14, VAR_18, VAR_2,
     VAR_20 | VAR_3);
 VAR_20 = FUNC_1(VAR_14, VAR_18, VAR_1);
 FUNC_3(VAR_14, VAR_18, VAR_1,
     VAR_20 | VAR_0);
 FUNC_4();





 VAR_20 = FUNC_1(VAR_14, VAR_19, VAR_9);
 for (VAR_21=1; VAR_21 < VAR_15; VAR_21++) {
  FUNC_3(VAR_14, VAR_19, VAR_10 + 8*VAR_21,
      FUNC_7((vm_offset_t)VAR_16));
  FUNC_3(VAR_14, VAR_19, VAR_11 + 8*VAR_21, 0);

  VAR_20 |= ((1 << (VAR_7 - 1 + VAR_21 )) |
      ( 1 << (VAR_8 - 1 + VAR_21)));

 }
 FUNC_3(VAR_14, VAR_19, VAR_9, VAR_20);

 FUNC_5();
 FUNC_8();

 FUNC_2(VAR_14, VAR_18, VAR_6);
 FUNC_2(VAR_14, VAR_19, VAR_13);
}
