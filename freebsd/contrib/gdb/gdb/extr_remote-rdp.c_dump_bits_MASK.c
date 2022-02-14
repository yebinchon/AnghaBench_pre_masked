
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yn {int bit; scalar_t__ name; } ;


 int FUNC_0 (char*,scalar_t__,char*) ;

__attribute__((used)) static void
FUNC_1 (struct yn *VAR_0, int VAR_1)
{
  while (VAR_0->name)
    {
      FUNC_0 ("  %-45s : %s\n", VAR_0->name, (VAR_1 & VAR_0->bit) ? "Yes" : "No");
      VAR_0++;
    }
}
