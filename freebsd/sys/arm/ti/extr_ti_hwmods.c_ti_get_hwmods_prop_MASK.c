
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(phandle_t VAR_0, void **VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, "ti,hwmods", VAR_1)) > 0)
  return (VAR_2);
 return (FUNC_0(FUNC_1(VAR_0), "ti,hwmods", VAR_1));
}
