
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;







 if (VAR_2 == '\0')
  return 0;


 for (VAR_4 = 0, VAR_3 = VAR_1; --VAR_3 >= VAR_0 && *VAR_3 == VAR_2; VAR_4++)
  continue;


 return (VAR_4 & 1) != 0;
}
