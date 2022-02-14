
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (int ,struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*,int) ;
 struct type* FUNC_3 (struct type*,char*,int,int*) ;
 char* FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*,char*) ;

int
FUNC_6 (struct type *VAR_0, struct type *VAR_1,
      char *VAR_2)
{
  int VAR_3;
  int VAR_4;
  int VAR_5;
  struct type *VAR_6;
  char *VAR_7 = FUNC_4 (VAR_0);
  LONGEST VAR_8;

  VAR_5 = 0;
  VAR_6 =
    FUNC_3 (VAR_1, VAR_7, 1, &VAR_5);
  if (VAR_6 == ((void*)0))
    return -1;
  VAR_8 = FUNC_5 (VAR_6, VAR_2 + VAR_5);

  VAR_3 = -1;
  for (VAR_4 = 0; VAR_4 < FUNC_0 (VAR_0); VAR_4 += 1)
    {
      if (FUNC_2 (VAR_0, VAR_4))
 VAR_3 = VAR_4;
      else if (FUNC_1 (VAR_8, VAR_0, VAR_4))
 return VAR_4;
    }

  return VAR_3;
}
