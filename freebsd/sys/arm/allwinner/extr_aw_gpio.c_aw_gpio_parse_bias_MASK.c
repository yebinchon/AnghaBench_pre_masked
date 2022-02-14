
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int bias ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static uint32_t
FUNC_2(phandle_t VAR_3)
{
 uint32_t VAR_4;

 if (FUNC_0(VAR_3, "pull", &VAR_4, sizeof(VAR_4)) != -1)
  return (VAR_4);
 if (FUNC_0(VAR_3, "allwinner,pull", &VAR_4, sizeof(VAR_4)) != -1)
  return (VAR_4);
 if (FUNC_1(VAR_3, "bias-disable"))
  return (VAR_0);
 if (FUNC_1(VAR_3, "bias-pull-up"))
  return (VAR_2);
 if (FUNC_1(VAR_3, "bias-pull-down"))
  return (VAR_1);

 return (VAR_0);
}
