
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct frame_info* FUNC_2 (char*) ;
 int FUNC_3 (struct frame_info*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;

void
FUNC_5 (char *VAR_2, int VAR_3)
{
  struct frame_info *VAR_4;
  int VAR_5 = FUNC_1 (VAR_0);

  if (!VAR_1)
    FUNC_0 ("No stack.");

  VAR_4 = FUNC_2 (VAR_2);

  FUNC_3 (VAR_4);
  if (VAR_5 != FUNC_1 (VAR_0))
    FUNC_4 (FUNC_1 (VAR_0));
}
