
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_int ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_3, u_int VAR_4, vm_offset_t VAR_5,
    int VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = (u_int32_t)VAR_5 | VAR_1;
 if (VAR_6 == VAR_0)
  VAR_7 |= VAR_2;
 VAR_7 |= (VAR_5 & 0x0000000f00000000ull) >> 28;
 FUNC_0(VAR_3, VAR_4, VAR_7);
}
