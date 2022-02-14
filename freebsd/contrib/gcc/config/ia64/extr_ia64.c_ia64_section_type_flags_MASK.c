
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,char const*,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static unsigned int
FUNC_3 (tree VAR_1, const char *VAR_2, int VAR_3)
{
  unsigned int VAR_4 = 0;

  if (FUNC_1 (VAR_2, ".sdata") == 0
      || FUNC_2 (VAR_2, ".sdata.", 7) == 0
      || FUNC_2 (VAR_2, ".gnu.linkonce.s.", 16) == 0
      || FUNC_2 (VAR_2, ".sdata2.", 8) == 0
      || FUNC_2 (VAR_2, ".gnu.linkonce.s2.", 17) == 0
      || FUNC_1 (VAR_2, ".sbss") == 0
      || FUNC_2 (VAR_2, ".sbss.", 6) == 0
      || FUNC_2 (VAR_2, ".gnu.linkonce.sb.", 17) == 0)
    VAR_4 = VAR_0;

  VAR_4 |= FUNC_0 (VAR_1, VAR_2, VAR_3);
  return VAR_4;
}
