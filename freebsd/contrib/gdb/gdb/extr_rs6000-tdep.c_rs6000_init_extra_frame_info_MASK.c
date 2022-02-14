
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_extra_info {scalar_t__ initial_sp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct frame_info*,int ) ;
 struct frame_extra_info* FUNC_1 (struct frame_info*,int) ;
 scalar_t__ FUNC_2 (struct frame_info*) ;
 int * FUNC_3 (struct frame_info*) ;

void
FUNC_4 (int VAR_2, struct frame_info *VAR_3)
{
  struct frame_extra_info *VAR_4 =
    FUNC_1 (VAR_3, sizeof (struct frame_extra_info));
  VAR_4->initial_sp = 0;
  if (FUNC_3 (VAR_3) != ((void*)0)
      && FUNC_2 (VAR_3) < VAR_1)




    FUNC_0 (VAR_3, VAR_0);
}
