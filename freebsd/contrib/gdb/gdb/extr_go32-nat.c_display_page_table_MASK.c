
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,int ,int ) ;
 unsigned long FUNC_1 (long) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (long VAR_0, int VAR_1)
{
  unsigned long VAR_2 = FUNC_1 (VAR_0);

  if ((VAR_2 & 1) != 0)
    {
      int VAR_3;

      FUNC_3 ("Page Table pointed to by Page Directory entry 0x%lx:\n", VAR_0);
      for (VAR_3 = 0; VAR_3 < 1024; VAR_3++)
 FUNC_0 (FUNC_2 (VAR_2, VAR_3), 0, 0, 0);
      FUNC_4 ("\n");
    }
  else if (VAR_1)
    FUNC_3 ("Page Table not present; value=0x%lx.\n", VAR_2 >> 1);
}
