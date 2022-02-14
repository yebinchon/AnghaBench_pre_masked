
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 struct frame_info* FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct frame_info*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_6 (char *VAR_2)
{
  struct frame_info *VAR_3;
  int VAR_4 = -1, VAR_5;
  if (VAR_2)
    VAR_4 = -FUNC_3 (VAR_2);
  VAR_5 = VAR_4;

  if (VAR_1 == 0 || VAR_0 == 0)
    FUNC_0 ("No stack.");

  VAR_3 = FUNC_1 (VAR_0, &VAR_5);
  if (VAR_5 != 0 && VAR_2 == 0)
    {






      FUNC_0 ("Bottom (i.e., innermost) frame selected; you cannot go down.");
    }

  FUNC_4 (VAR_3);
  FUNC_5 (FUNC_2 (VAR_0));
}
