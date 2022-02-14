
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 bus_addr_t VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2, VAR_1,
  0x1000, 0, &VAR_3) != 0)
  FUNC_3("Couldn't map chipid\n");
 VAR_4 = FUNC_1(VAR_2, VAR_3, 0x0);
 FUNC_2(VAR_2, VAR_3, 0x1000);

 return (VAR_4 & VAR_0);
}
