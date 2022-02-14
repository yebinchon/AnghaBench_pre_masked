
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int ofw_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static phandle_t
FUNC_2(ofw_t VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3 < 0)
  return (-1);
 return (FUNC_0(VAR_3));
}
