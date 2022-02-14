
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;

void *
FUNC_2(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 bus_space_handle_t VAR_4;

 if (FUNC_0(VAR_0, (VAR_2 + VAR_1),
   VAR_3, 0, &VAR_4) != 0) {
  FUNC_1("Couldn't map 0x%08x\n", (VAR_2 + VAR_1));
 }

 return (void *)(VAR_4);
}
