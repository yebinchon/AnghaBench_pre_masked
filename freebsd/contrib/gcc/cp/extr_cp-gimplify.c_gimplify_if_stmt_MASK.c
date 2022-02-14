
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8 (tree *VAR_2)
{
  tree VAR_3, VAR_4, VAR_5, VAR_6;

  VAR_3 = *VAR_2;
  VAR_4 = FUNC_1 (VAR_3);
  VAR_5 = FUNC_2 (VAR_3);
  VAR_6 = FUNC_0 (VAR_3);

  if (!VAR_5)
    VAR_5 = FUNC_5 ();
  if (!VAR_6)
    VAR_6 = FUNC_5 ();

  if (FUNC_6 (VAR_4) && !FUNC_3 (VAR_6))
    VAR_3 = VAR_5;
  else if (FUNC_7 (VAR_4) && !FUNC_3 (VAR_5))
    VAR_3 = VAR_6;
  else
    VAR_3 = FUNC_4 (VAR_0, VAR_1, VAR_4, VAR_5, VAR_6);
  *VAR_2 = VAR_3;
}
