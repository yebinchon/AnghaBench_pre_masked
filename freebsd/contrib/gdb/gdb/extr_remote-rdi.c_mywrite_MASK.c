
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (void *VAR_1, char const *VAR_2, int VAR_3)
{
  int VAR_4;
  char *VAR_5;

  VAR_5 = (char *) VAR_2;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      if (FUNC_1 ((int) *VAR_5))
 {
   FUNC_0 ((int) *VAR_5, VAR_0);
   VAR_5++;
 }
    }

  return VAR_3;
}
