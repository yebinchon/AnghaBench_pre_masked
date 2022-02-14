
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_1, phandle_t VAR_2, phandle_t VAR_3,
    int VAR_4, pcell_t *VAR_5, uint32_t *VAR_6, uint32_t *VAR_7)
{

 if (VAR_4 != 2)
  return (VAR_0);
 *VAR_6 = VAR_5[0];
 *VAR_7= VAR_5[1];
 return (0);
}
