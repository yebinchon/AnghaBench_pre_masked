
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int ptid; struct lwp_info* next; } ;
typedef int ptid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct lwp_info* VAR_0 ;

__attribute__((used)) static struct lwp_info *
FUNC_3 (ptid_t VAR_1)
{
  struct lwp_info *VAR_2;
  int VAR_3;

  if (FUNC_2 (VAR_1))
    VAR_3 = FUNC_0 (VAR_1);
  else
    VAR_3 = FUNC_1 (VAR_1);

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_3 == FUNC_0 (VAR_2->ptid))
      return VAR_2;

  return ((void*)0);
}
