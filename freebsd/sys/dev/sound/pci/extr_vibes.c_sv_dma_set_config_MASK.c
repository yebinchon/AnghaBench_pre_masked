
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_4(bus_space_tag_t VAR_3, bus_space_handle_t VAR_4,
    u_int32_t VAR_5, u_int32_t VAR_6, u_int8_t VAR_7)
{
 FUNC_2(VAR_3, VAR_4, VAR_0, VAR_5);
 FUNC_2(VAR_3, VAR_4, VAR_1, VAR_6 & 0xffffff);
 FUNC_1(VAR_3, VAR_4, VAR_2, VAR_7);

 FUNC_0(FUNC_3("base 0x%08x count %5d mode 0x%02x\n",
     VAR_5, VAR_6, VAR_7));
}
