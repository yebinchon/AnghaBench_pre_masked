
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int B_TYPE ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (B_TYPE *VAR_0, int VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
      if ((VAR_2 % 8) == 0)
 {
   FUNC_2 (" ");
 }
      if (FUNC_0 (VAR_0, VAR_2))
 {
   FUNC_1 ("1");
 }
      else
 {
   FUNC_1 ("0");
 }
    }
}
