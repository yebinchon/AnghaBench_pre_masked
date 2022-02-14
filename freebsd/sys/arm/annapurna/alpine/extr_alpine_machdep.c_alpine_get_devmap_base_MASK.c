
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_3(bus_addr_t *VAR_1, bus_addr_t *VAR_2)
{
 phandle_t VAR_3;

 if ((VAR_3 = FUNC_0("/")) == -1)
  return (VAR_0);

 if ((VAR_3 = FUNC_1(VAR_3, "simple-bus", 1)) == 0)
  return (VAR_0);

 return FUNC_2(VAR_3, 0, VAR_1, VAR_2);
}
