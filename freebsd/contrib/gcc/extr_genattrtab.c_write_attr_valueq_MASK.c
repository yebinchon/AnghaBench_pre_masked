
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_desc {char const* name; scalar_t__ is_numeric; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3 (struct attr_desc *VAR_0, const char *VAR_1)
{
  if (VAR_0->is_numeric)
    {
      int VAR_2 = FUNC_0 (VAR_1);

      FUNC_1 ("%d", VAR_2);

      if (VAR_2 > 9 || VAR_2 < 0)
 FUNC_1 (" /* 0x%x */", VAR_2);
    }
  else
    {
      FUNC_2 (VAR_0->name);
      FUNC_1 ("_");
      FUNC_2 (VAR_1);
    }
}
