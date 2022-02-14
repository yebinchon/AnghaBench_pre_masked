
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_int ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_5, u_int VAR_6, vm_offset_t VAR_7,
    int VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = (u_int32_t)VAR_7 | VAR_3;
 if (VAR_8 == VAR_0)
  VAR_9 |= VAR_2;
 else if (VAR_8 == VAR_1)
  VAR_9 |= VAR_4;
 FUNC_0(VAR_5, VAR_6, VAR_9);
}
