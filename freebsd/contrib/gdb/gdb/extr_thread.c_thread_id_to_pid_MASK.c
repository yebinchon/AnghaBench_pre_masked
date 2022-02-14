
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int ptid; } ;
typedef int ptid_t ;


 struct thread_info* FUNC_0 (int) ;
 int FUNC_1 (int) ;

ptid_t
FUNC_2 (int VAR_0)
{
  struct thread_info *VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1)
    return VAR_1->ptid;
  else
    return FUNC_1 (-1);
}
