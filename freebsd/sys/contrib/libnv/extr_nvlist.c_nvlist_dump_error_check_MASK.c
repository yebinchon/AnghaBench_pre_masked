
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int,char*,int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static bool
FUNC_2(const nvlist_t *VAR_0, int VAR_1, int VAR_2)
{

 if (FUNC_1(VAR_0) != 0) {
  FUNC_0(VAR_1, "%*serror: %d\n", VAR_2 * 4, "",
      FUNC_1(VAR_0));
  return (1);
 }

 return (0);
}
