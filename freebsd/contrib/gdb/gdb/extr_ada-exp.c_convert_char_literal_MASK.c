
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef scalar_t__ LONGEST ;


 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static LONGEST
FUNC_6 (struct type* VAR_1, LONGEST VAR_2)
{
  char VAR_3[7];
  int VAR_4;

  if (VAR_1 == ((void*)0) || FUNC_1 (VAR_1) != VAR_0)
    return VAR_2;
  FUNC_5 (VAR_3, "QU%02x", (int) VAR_2);
  for (VAR_4 = 0; VAR_4 < FUNC_4 (VAR_1); VAR_4 += 1)
    {
      if (FUNC_0 (VAR_3, FUNC_3 (VAR_1, VAR_4)))
 return FUNC_2 (VAR_1, VAR_4);
    }
  return VAR_2;
}
