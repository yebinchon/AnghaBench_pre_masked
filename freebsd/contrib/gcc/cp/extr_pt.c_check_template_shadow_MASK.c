
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

void
FUNC_8 (tree VAR_2)
{
  tree VAR_3;



  if (!VAR_1)
    return;


  if (FUNC_5 (VAR_2) == VAR_0)
    VAR_2 = FUNC_3 (VAR_2);
  VAR_3 = FUNC_7 (FUNC_0 (VAR_2));



  if (!VAR_3)
    return;





  if (!FUNC_1 (VAR_3) || !FUNC_2 (VAR_3))
    return;




  if (VAR_2 == VAR_3
      || FUNC_4 (VAR_1))
    return;

  FUNC_6 ("declaration of %q+#D", VAR_2);
  FUNC_6 (" shadows template parm %q+#D", VAR_3);
}
