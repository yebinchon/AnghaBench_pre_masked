
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*,int) ;
 scalar_t__ FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct type*) ;
 int FUNC_8 (struct type*) ;

int
FUNC_9 (struct type *VAR_1)
{



  int VAR_2;

  if (FUNC_1 (VAR_1) != VAR_0)
    return 0;


  if (FUNC_3 (VAR_1))
    for (VAR_2 = 0; VAR_2 < FUNC_8 (VAR_1); VAR_2++)
      if (FUNC_0 (FUNC_3 (VAR_1), VAR_2))
 return 1;


  if (FUNC_5 (VAR_1))
    for (VAR_2 = 0; VAR_2 < FUNC_7 (VAR_1); VAR_2++)
      if (FUNC_6 (FUNC_4 (VAR_1, VAR_2), 0))
 return 1;


  if (FUNC_3 (VAR_1))
    for (VAR_2 = 0; VAR_2 < FUNC_8 (VAR_1); VAR_2++)
      if ((!FUNC_0 (FUNC_3 (VAR_1), VAR_2)) &&
   (FUNC_9 (FUNC_2 (VAR_1, VAR_2))))
 return 1;


  return 0;
}
