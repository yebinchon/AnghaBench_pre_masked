
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_handle_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(void)
{
 bus_space_handle_t VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, (bus_addr_t)VAR_1,
     VAR_2, 0, &VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);


 VAR_5 = FUNC_2(VAR_3, VAR_4, FUNC_0(1));
 VAR_5 &= ~VAR_0;

 FUNC_4(VAR_3, VAR_4, FUNC_0(1), VAR_5);

 FUNC_3(VAR_3, VAR_4, VAR_2);

 return (0);
}
