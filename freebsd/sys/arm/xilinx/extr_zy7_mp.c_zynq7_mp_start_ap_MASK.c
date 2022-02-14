
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
 scalar_t__ FUNC_0 (int ,int ,int,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

void
FUNC_9(platform_t VAR_5)
{
 bus_space_handle_t VAR_6;
 bus_space_handle_t VAR_7;
 uint32_t VAR_8;


 if (FUNC_0(VAR_3, VAR_1, 4,
     0, &VAR_6) != 0)
  FUNC_6("platform_mp_start_ap: Couldn't map SCU config reg\n");


 VAR_8 = FUNC_1(VAR_3, VAR_6, 0);
 VAR_8 |= VAR_0;
 FUNC_3(VAR_3, VAR_6, 0, VAR_8);

 FUNC_2(VAR_3, VAR_6, 4);


 if (FUNC_0(VAR_3, VAR_2, 4,
     0, &VAR_7) != 0)
  FUNC_6("platform_mp_start_ap: Couldn't map OCM\n");


 FUNC_3(VAR_3, VAR_7, 0,
     FUNC_7((vm_offset_t)VAR_4));

 FUNC_2(VAR_3, VAR_7, 4);
 FUNC_4();


 FUNC_5();
 FUNC_8();
}
