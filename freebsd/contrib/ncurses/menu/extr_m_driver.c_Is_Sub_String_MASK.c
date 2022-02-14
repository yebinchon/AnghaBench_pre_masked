
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(
        bool VAR_2,
        const char *VAR_3,
        const char *VAR_4
)
{
  FUNC_1(VAR_3 && VAR_4);
  if (VAR_2)
    {
      while (*VAR_4 && *VAR_3)
 {
   if (FUNC_2(FUNC_0(*VAR_4++)) != FUNC_2(FUNC_0(*VAR_3)))
     break;
   VAR_3++;
 }
    }
  else
    {
      while (*VAR_4 && *VAR_3)
 if (*VAR_3 != *VAR_4++)
   break;
      VAR_3++;
    }
  return ((*VAR_3) ? VAR_0 : VAR_1);
}
