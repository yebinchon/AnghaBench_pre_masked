
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;


 scalar_t__ FUNC_0 (int ,char*,int *,int) ;

int
FUNC_1(phandle_t VAR_0, pcell_t *VAR_1)
{

 if ((FUNC_0(VAR_0, "reg-io-width", VAR_1, sizeof(*VAR_1))) <= 0)
  return (-1);
 return (0);
}
