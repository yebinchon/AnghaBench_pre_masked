
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int ofw_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static phandle_t
FUNC_3(ofw_t VAR_1, phandle_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return (0);

 VAR_4 = FUNC_1(VAR_0, VAR_3);
 return (FUNC_0(VAR_4));
}
