
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int LPVOID ;
typedef int LPCVOID ;
typedef int DWORD ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*,int,int*) ;
 int FUNC_3 (int ,int ,char*,int,int*) ;
 int VAR_0 ;

int
FUNC_4 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3,
     int VAR_4, struct mem_attrib *VAR_5,
     struct target_ops *VAR_6)
{
  DWORD VAR_7 = 0;
  if (VAR_4)
    {
      FUNC_0 (("gdb: write target memory, %d bytes at 0x%08lx\n",
    VAR_3, (DWORD) VAR_1));
      if (!FUNC_3 (VAR_0, (LPVOID) VAR_1, VAR_2,
          VAR_3, &VAR_7))
 VAR_7 = 0;
      FUNC_1 (VAR_0, (LPCVOID) VAR_1, VAR_3);
    }
  else
    {
      FUNC_0 (("gdb: read target memory, %d bytes at 0x%08lx\n",
    VAR_3, (DWORD) VAR_1));
      if (!FUNC_2 (VAR_0, (LPCVOID) VAR_1, VAR_2,
         VAR_3, &VAR_7))
 VAR_7 = 0;
    }
  return VAR_7;
}
