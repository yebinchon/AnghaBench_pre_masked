
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(device_t VAR_1)
{
 int VAR_2;




 VAR_2 = (FUNC_0(VAR_1, VAR_0, 1) & 0x06) >> 1;
 return (32*1024*1024) << VAR_2;
}
