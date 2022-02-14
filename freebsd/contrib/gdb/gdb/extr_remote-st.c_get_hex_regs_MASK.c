
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_0, int VAR_1)
{
  long VAR_2;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      int VAR_4;

      VAR_2 = 0;
      for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
 VAR_2 = (VAR_2 << 4) + FUNC_0 (VAR_4 == 0);
      FUNC_1 (VAR_1++, (char *) &VAR_2);
    }
}
