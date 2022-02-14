
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* caddr_t ;


 int FUNC_0 (char const*,int const) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static const char*
FUNC_3(caddr_t VAR_0, const int VAR_1)
{
 caddr_t VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 != 0) {
  VAR_2 = FUNC_1(VAR_0);
  for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++)
   VAR_2 += FUNC_2(VAR_2) + 1;
  return VAR_2;
 }
 return (((void*)0));
}
