
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {int cond; int x; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static rtx
FUNC_7 (struct noce_if_info *VAR_1)
{
  rtx VAR_2;
  rtx VAR_3 = FUNC_3 ();

  FUNC_5 (VAR_1->x);
  FUNC_5 (VAR_1->cond);
  FUNC_6 (VAR_3);
  FUNC_2 ();





  for (VAR_2 = VAR_3; VAR_2; VAR_2 = FUNC_1 (VAR_2))
    if (FUNC_0 (VAR_2)
 || FUNC_4 (VAR_2) == -1)
      return VAR_0;

  return VAR_3;
}
