
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ __register_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (char*,int) ;

void
FUNC_12(__register_t VAR_4, __register_t VAR_5, __register_t VAR_6,
        __register_t VAR_7)
{
 vm_offset_t VAR_8;
 uint64_t VAR_9;
 int VAR_10;


 VAR_8 = (vm_offset_t)&VAR_3;
 FUNC_5(&VAR_2, 0, VAR_8 - (vm_offset_t)(&VAR_2));

 FUNC_8();


 FUNC_7();
 if ((VAR_10 = FUNC_2(&VAR_1)))
  FUNC_11("bcm_init_platform_data() failed: %d", VAR_10);

 VAR_9 = FUNC_0(FUNC_1());


 FUNC_9(VAR_9 / 2);

 FUNC_4();

 FUNC_6();

 FUNC_10(VAR_9, 1);
}
