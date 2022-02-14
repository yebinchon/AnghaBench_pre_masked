
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
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(bus_space_tag_t VAR_5, bus_space_handle_t VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_4);
 VAR_7 >>= VAR_3;
 VAR_7 &= VAR_2;

 if (VAR_7)
  return (VAR_1);

 return (VAR_0);
}
