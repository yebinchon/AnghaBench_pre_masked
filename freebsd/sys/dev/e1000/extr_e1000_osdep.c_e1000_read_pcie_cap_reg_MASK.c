
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct e1000_osdep {int dev; } ;
struct e1000_hw {scalar_t__ back; } ;
typedef int int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,int) ;

int32_t
FUNC_2(struct e1000_hw *VAR_2, u32 VAR_3, u16 *VAR_4)
{
 device_t VAR_5 = ((struct e1000_osdep *)VAR_2->back)->dev;
 u32 VAR_6;

 FUNC_0(VAR_5, VAR_1, &VAR_6);
 *VAR_4 = FUNC_1(VAR_5, VAR_6 + VAR_3, 2);
 return (VAR_0);
}
