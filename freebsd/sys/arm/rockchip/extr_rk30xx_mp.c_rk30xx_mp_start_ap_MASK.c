
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int platform_t ;
typedef int bus_space_handle_t ;


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
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 char* VAR_14 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_15 ;
 int FUNC_9 () ;

void
FUNC_10(platform_t VAR_16)
{
 bus_space_handle_t VAR_17;
 bus_space_handle_t VAR_18;
 bus_space_handle_t VAR_19;
 uint32_t VAR_20;
 int VAR_21;

 if (FUNC_0(VAR_11, VAR_9, VAR_10, 0, &VAR_17) != 0)
  FUNC_7("Could not map the SCU");
 if (FUNC_0(VAR_11, VAR_0,
     VAR_1, 0, &VAR_18) != 0)
  FUNC_7("Could not map the IMEM");
 if (FUNC_0(VAR_11, VAR_2, VAR_5, 0, &VAR_19) != 0)
  FUNC_7("Could not map the PMU");






 FUNC_3(VAR_11, VAR_17, VAR_8, 0x0000ffff);


 VAR_20 = FUNC_1(VAR_11, VAR_19, VAR_3);
 for (VAR_21 = 1; VAR_21 < VAR_12; VAR_21++)
  VAR_20 |= 1 << VAR_21;
 FUNC_3(VAR_11, VAR_19, VAR_3, VAR_20);


 VAR_20 = FUNC_1(VAR_11, VAR_19, VAR_3);
 VAR_20 &= ~VAR_4;
 FUNC_3(VAR_11, VAR_19, VAR_3, VAR_20);


 VAR_20 = FUNC_1(VAR_11, VAR_17, VAR_7);
 FUNC_3(VAR_11, VAR_17, VAR_7,
     VAR_20 | VAR_6);
 VAR_14 = (char *)FUNC_8((vm_offset_t)VAR_13);


 FUNC_4(VAR_11, VAR_18, 0,
     (uint32_t *)&VAR_15, 8);

 FUNC_5();


 VAR_20 = FUNC_1(VAR_11, VAR_19, VAR_3);
 for (VAR_21 = 1; VAR_21 < VAR_12; VAR_21++)
  VAR_20 &= ~(1 << VAR_21);
 FUNC_3(VAR_11, VAR_19, VAR_3, VAR_20);

 FUNC_6();
 FUNC_9();

 FUNC_2(VAR_11, VAR_17, VAR_10);
 FUNC_2(VAR_11, VAR_18, VAR_1);
 FUNC_2(VAR_11, VAR_19, VAR_5);
}
