
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_8 (tree VAR_1)
{
  rtx VAR_2;
  tree VAR_3, VAR_4;

  VAR_3 = FUNC_1 (VAR_1);

  if (!VAR_3)
    {
      FUNC_3 ("too few arguments to function %<va_start%>");
      return VAR_0;
    }

  if (FUNC_5 (VAR_3))
    return VAR_0;

  VAR_2 = FUNC_4 ();
  VAR_4 = FUNC_6 (FUNC_2 (VAR_1), 1);




  FUNC_7 (VAR_4, VAR_2);


  return VAR_0;
}
