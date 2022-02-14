
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_10(uint32_t VAR_19)
{
 bus_space_handle_t VAR_20, VAR_21, VAR_22;
 int VAR_23;

 switch (VAR_19) {
 default:
  FUNC_7("Unknown platform id %d\n", VAR_19);
 }

 if (FUNC_0(VAR_15, VAR_5,
     VAR_6, 0, &VAR_21) != 0)
  FUNC_7("Couldn't map the reset manager (RSTMGR)\n");
 if (FUNC_0(VAR_15, VAR_1,
     VAR_2, 0, &VAR_22) != 0)
  FUNC_7("Couldn't map the first physram page\n");


 FUNC_3(VAR_15, VAR_20,
  VAR_11, 0x0000ffff);






 VAR_23 = FUNC_1(VAR_15, VAR_20, VAR_9);
 VAR_23 |= (VAR_10);
 FUNC_3(VAR_15, VAR_20, VAR_9, VAR_23);


 switch (VAR_19) {
 default:
  FUNC_7("Unknown platform id %d\n", VAR_19);
 }


 VAR_23 = FUNC_1(VAR_15, VAR_20, VAR_8);
 VAR_23 |= (VAR_7);
 FUNC_3(VAR_15, VAR_20, VAR_8, VAR_23);


 VAR_17 = (char *)FUNC_8((vm_offset_t)VAR_16);
 FUNC_4(VAR_15, VAR_22, 0,
     (uint32_t *)&VAR_18, 8);

 FUNC_5();


 switch (VAR_19) {
 default:
  FUNC_7("Unknown platform id %d\n", VAR_19);
 }

 FUNC_6();
 FUNC_9();

 FUNC_2(VAR_15, VAR_20, VAR_14);
 FUNC_2(VAR_15, VAR_21, VAR_6);
 FUNC_2(VAR_15, VAR_22, VAR_2);
}
