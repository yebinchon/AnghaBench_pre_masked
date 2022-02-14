
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (char*,int,int ) ;

int
FUNC_4(bus_space_tag_t VAR_10, bus_space_handle_t VAR_11)
{
 u_int32_t VAR_12;
 u_int8_t VAR_13, VAR_14;

 VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_7);
 if (VAR_12 == 0xffffffff)
  return 0;




 if ((VAR_12 & VAR_5) != VAR_5 ||
     !(VAR_12 & (VAR_8 | VAR_9))) {



  return 0;
 }

 VAR_13 = FUNC_0(VAR_10, VAR_11, VAR_0);
 FUNC_2(VAR_10, VAR_11, VAR_0, VAR_2);
 VAR_14 = FUNC_0(VAR_10, VAR_11, VAR_0);
 if ((VAR_14 & VAR_3) && (VAR_14 & VAR_1) &&
     FUNC_1(VAR_10, VAR_11, VAR_6) != 0xffffffff)
  return 1;

 FUNC_2(VAR_10, VAR_11, VAR_0, VAR_13);
 return 0;
}
