
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, phandle_t VAR_3, phandle_t VAR_4,
    int VAR_5, pcell_t *VAR_6, uint32_t *VAR_7, uint32_t *VAR_8)
{
 if (VAR_6[0] >= FUNC_0(VAR_1))
  return (VAR_0);

 *VAR_7 = VAR_6[0];
 *VAR_8 = VAR_6[1];

 return (0);
}
