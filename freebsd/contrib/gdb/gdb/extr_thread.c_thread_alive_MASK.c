
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int ptid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (struct thread_info *VAR_0)
{
  if (FUNC_0 (VAR_0->ptid) == -1)
    return 0;
  if (!FUNC_2 (VAR_0->ptid))
    {
      VAR_0->ptid = FUNC_1 (-1);
      return 0;
    }
  return 1;
}
