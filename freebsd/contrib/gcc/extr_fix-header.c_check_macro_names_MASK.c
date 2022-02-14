
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* namelist ;
typedef int cpp_reader ;


 scalar_t__ FUNC_0 (int *,unsigned char const*,size_t) ;
 int FUNC_1 (scalar_t__*) ;
 size_t FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_0, namelist VAR_1)
{
  size_t VAR_2;
  while (*VAR_1)
    {
      VAR_2 = FUNC_2 (VAR_1);
      if (FUNC_0 (VAR_0, (const unsigned char *)VAR_1, VAR_2))
 FUNC_1 (VAR_1);
      VAR_1 += VAR_2 + 1;
    }
}
