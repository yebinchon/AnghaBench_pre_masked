
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1 (CORE_ADDR *VAR_0, const char *VAR_1, int VAR_2)
{
  CORE_ADDR VAR_3;
  char VAR_4;
  int VAR_5;

  VAR_3 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
      VAR_4 = VAR_1[VAR_5];
      VAR_3 = VAR_3 << 4;
      VAR_3 = VAR_3 | (FUNC_0 (VAR_4) & 0x0f);
    }
  *VAR_0 = VAR_3;
}
