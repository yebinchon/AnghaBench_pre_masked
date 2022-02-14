
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_to_split {int base_var; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int * FUNC_6 (int ,struct iv_to_split*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9 (struct iv_to_split *VAR_0, rtx VAR_1)
{
  rtx VAR_2 = FUNC_0 (*FUNC_6 (FUNC_7 (VAR_1), VAR_0));
  rtx VAR_3;

  FUNC_8 ();
  VAR_2 = FUNC_4 (VAR_2, VAR_0->base_var);
  if (VAR_2 != VAR_0->base_var)
    FUNC_2 (VAR_0->base_var, VAR_2);
  VAR_3 = FUNC_5 ();
  FUNC_3 ();

  FUNC_1 (VAR_3, VAR_1);
}
