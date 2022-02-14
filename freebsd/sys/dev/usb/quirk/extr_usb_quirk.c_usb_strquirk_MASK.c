
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 char* FUNC_1 (scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_2(const char *VAR_1, size_t VAR_2)
{
 const char *VAR_3;
 uint16_t VAR_4;

 for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++) {
  VAR_3 = FUNC_1(VAR_4);
  if (FUNC_0(VAR_1, VAR_3, VAR_2) == 0 &&
      VAR_3[VAR_2] == 0)
   break;
 }
 return (VAR_4);
}
