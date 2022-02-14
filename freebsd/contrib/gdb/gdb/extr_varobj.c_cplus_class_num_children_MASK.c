
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 scalar_t__ FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_6 (struct type *VAR_3, int VAR_4[3])
{
  int VAR_5;

  VAR_4[VAR_2] = 0;
  VAR_4[VAR_0] = 0;
  VAR_4[VAR_1] = 0;

  for (VAR_5 = FUNC_3 (VAR_3); VAR_5 < FUNC_2 (VAR_3); VAR_5++)
    {

      if (FUNC_4 (VAR_3) == VAR_3 && FUNC_5 (VAR_3) == VAR_5)
 continue;

      if (FUNC_1 (VAR_3, VAR_5))
 VAR_4[VAR_1]++;
      else if (FUNC_0 (VAR_3, VAR_5))
 VAR_4[VAR_0]++;
      else
 VAR_4[VAR_2]++;
    }
}
