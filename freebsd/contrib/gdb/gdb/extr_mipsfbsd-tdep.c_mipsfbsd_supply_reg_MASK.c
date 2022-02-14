
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

void
FUNC_3 (char *VAR_2, int VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++)
    {
      if (VAR_3 == VAR_4 || VAR_3 == -1)
 {
   if (FUNC_0 (VAR_4))
     FUNC_2 (VAR_4, ((void*)0));
   else
            FUNC_2 (VAR_4, VAR_2 + (VAR_4 * FUNC_1 (VAR_1)));
        }
    }
}
