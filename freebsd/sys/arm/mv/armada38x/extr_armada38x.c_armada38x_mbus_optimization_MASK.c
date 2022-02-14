
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bus_space_handle_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int VAR_3 ;

int
FUNC_4(void)
{
 bus_space_handle_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, (bus_addr_t)VAR_1,
     VAR_2, 0, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);






 FUNC_3(VAR_3, VAR_4, 0, 0x19180);





 FUNC_3(VAR_3, VAR_4, 0x4, 0x3000A);





 FUNC_3(VAR_3, VAR_4, 0x8, 0xFFFF);





 FUNC_3(VAR_3, VAR_4, 0xc, 0x303);

 FUNC_0(VAR_3, VAR_4, 0, VAR_2,
     VAR_0);

 FUNC_2(VAR_3, VAR_4, VAR_2);

 return (VAR_5);
}
