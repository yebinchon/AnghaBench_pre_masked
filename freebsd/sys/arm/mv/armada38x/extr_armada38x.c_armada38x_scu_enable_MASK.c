
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_handle_t ;
typedef int bus_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_5 ;

int
FUNC_4(void)
{
 bus_space_handle_t VAR_6;
 int VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_0(VAR_5, (bus_addr_t)VAR_0,
     VAR_2, 0, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);


 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_3);
 if (!(VAR_8 & VAR_1)) {

  VAR_8 |= VAR_4;

  FUNC_3(VAR_5, VAR_6, 0,
      VAR_8 | VAR_1);
 }

 FUNC_2(VAR_5, VAR_6, VAR_2);
 return (0);
}
