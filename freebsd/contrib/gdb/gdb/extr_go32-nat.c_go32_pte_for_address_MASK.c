
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int ,int ,int,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (char*,unsigned long long) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_1, int VAR_2)
{
  CORE_ADDR VAR_3 = 0, VAR_4;

  if (VAR_1 && *VAR_1)
    {
      while (*VAR_1 && FUNC_5(*VAR_1))
 VAR_1++;

      if (*VAR_1)
 VAR_3 = FUNC_6 (VAR_1);
    }
  if (!VAR_3)
    FUNC_1 ("linear address");

  VAR_0 = FUNC_2 ();
  if (!VAR_0)
    FUNC_8 ("Access to Page Tables is not supported on this system.\n");
  else
    {
      int VAR_5 = (VAR_3 >> 22) & 0x3ff;
      int VAR_6 = (VAR_3 >> 12) & 0x3ff;
      unsigned VAR_7 = VAR_3 & 0xfff;

      FUNC_7 ("Page Table entry for address 0x%llx:\n",
         (unsigned long long)VAR_3);
      FUNC_0 (FUNC_4 (FUNC_3 (VAR_5), VAR_6), 0, 1, VAR_7);
    }
}
