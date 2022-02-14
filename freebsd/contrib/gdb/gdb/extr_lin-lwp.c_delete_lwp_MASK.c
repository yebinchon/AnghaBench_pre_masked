
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {struct lwp_info* next; int ptid; } ;
typedef int ptid_t ;


 struct lwp_info* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct lwp_info*) ;

__attribute__((used)) static void
FUNC_2 (ptid_t VAR_2)
{
  struct lwp_info *VAR_3, *VAR_4;

  VAR_4 = ((void*)0);

  for (VAR_3 = VAR_0; VAR_3; VAR_4 = VAR_3, VAR_3 = VAR_3->next)
    if (FUNC_0 (VAR_3->ptid, VAR_2))
      break;

  if (!VAR_3)
    return;



  VAR_1--;

  if (VAR_4)
    VAR_4->next = VAR_3->next;
  else
    VAR_0 = VAR_3->next;

  FUNC_1 (VAR_3);
}
