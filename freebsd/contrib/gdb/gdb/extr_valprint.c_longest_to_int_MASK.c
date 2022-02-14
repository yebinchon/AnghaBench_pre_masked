
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGEST ;


 int FUNC_0 (char*) ;

int
FUNC_1 (LONGEST VAR_0)
{

  int VAR_1 = (int) VAR_0;


  if (sizeof (LONGEST) > sizeof (int))
    {
      if (VAR_1 != VAR_0)
 {
   FUNC_0 ("Value out of range.");
 }
    }
  return (VAR_1);
}
