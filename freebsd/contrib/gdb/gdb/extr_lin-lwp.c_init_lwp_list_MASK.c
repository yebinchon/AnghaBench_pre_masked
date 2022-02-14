
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {struct lwp_info* next; } ;


 struct lwp_info* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lwp_info*) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct lwp_info *VAR_3, *VAR_4;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_4)
    {
      VAR_4 = VAR_3->next;
      FUNC_0 (VAR_3);
    }

  VAR_0 = ((void*)0);
  VAR_1 = 0;
  VAR_2 = 0;
}
