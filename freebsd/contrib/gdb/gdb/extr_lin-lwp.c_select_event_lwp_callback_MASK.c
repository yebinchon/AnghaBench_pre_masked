
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (struct lwp_info *VAR_1, void *VAR_2)
{
  int *VAR_3 = VAR_2;

  FUNC_2 (VAR_3 != ((void*)0));


  if (VAR_1->status != 0
      && FUNC_0 (VAR_1->status) && FUNC_1 (VAR_1->status) == VAR_0)
    if ((*VAR_3)-- == 0)
      return 1;

  return 0;
}
