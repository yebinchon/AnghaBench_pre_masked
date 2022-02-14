
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int prop ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;


 int FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int
FUNC_2(phandle_t VAR_0)
{
 pcell_t VAR_1;
 ssize_t VAR_2;
 phandle_t VAR_3;

 VAR_2 = FUNC_0(VAR_0, "clocks", &VAR_1, sizeof(VAR_1));
 if ((VAR_2 / sizeof(VAR_1)) != 1 || VAR_1 == 0 ||
     (VAR_3 = FUNC_1(VAR_1)) == 0)
  return (0);

 VAR_2 = FUNC_0(VAR_3, "clock-frequency", &VAR_1, sizeof(VAR_1));
 if ((VAR_2 / sizeof(VAR_1)) != 1 || VAR_1 == 0)
  return (0);

 return ((unsigned int)VAR_1);
}
