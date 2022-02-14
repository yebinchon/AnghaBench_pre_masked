
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef int DOUBLEST ;


 int FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int*) ;

DOUBLEST
FUNC_4 (struct value *VAR_0)
{
  DOUBLEST VAR_1;
  int VAR_2;

  VAR_1 = FUNC_3 (FUNC_1 (VAR_0), FUNC_0 (VAR_0), &VAR_2);
  if (VAR_2)
    FUNC_2 ("Invalid floating value found in program.");
  return VAR_1;
}
