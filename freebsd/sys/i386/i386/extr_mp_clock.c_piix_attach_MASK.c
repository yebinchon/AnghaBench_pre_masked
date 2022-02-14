
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int device_t ;
struct TYPE_3__ {int tc_frequency; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
 u_int32_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, 0x40, 4);
 VAR_2 = (VAR_4 & 0xffc0) + 8;
 VAR_1.tc_frequency = VAR_0;
 FUNC_1(&VAR_1);
 return (0);
}
