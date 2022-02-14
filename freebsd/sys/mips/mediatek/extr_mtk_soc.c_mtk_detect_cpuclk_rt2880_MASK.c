
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(bus_space_tag_t VAR_7, bus_space_handle_t VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_6);
 VAR_9 >>= VAR_5;
 VAR_9 &= VAR_4;

 switch (VAR_9) {
 case 0:
  return (VAR_0);
 case 1:
  return (VAR_1);
 case 2:
  return (VAR_2);
 case 3:
  return (VAR_3);
 }


 return (0);
}
