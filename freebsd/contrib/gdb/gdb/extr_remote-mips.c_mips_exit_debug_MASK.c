
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char,int ,int ,int*,int ,int *) ;

__attribute__((used)) static int
FUNC_4 (void)
{
  int VAR_7;
  struct cleanup *VAR_8 = FUNC_1 (VAR_1, ((void*)0));

  VAR_2 = 1;

  if (VAR_3 != VAR_0)
    {


      FUNC_3 ('x', 0, 0, ((void*)0), VAR_6, ((void*)0));
      VAR_5 = 0;
      if (!FUNC_2 (" break!"))
 return -1;
    }
  else
    FUNC_3 ('x', 0, 0, &VAR_7, VAR_6, ((void*)0));

  if (!FUNC_2 (VAR_4))
    return -1;

  FUNC_0 (VAR_8);

  return 0;
}
