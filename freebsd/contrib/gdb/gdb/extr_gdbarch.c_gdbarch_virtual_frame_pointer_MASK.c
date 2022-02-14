
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* virtual_frame_pointer ) (int ,int*,int *) ;} ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int*,int *) ;

void
FUNC_3 (struct gdbarch *VAR_2, CORE_ADDR VAR_3, int *VAR_4, LONGEST *VAR_5)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->virtual_frame_pointer != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_virtual_frame_pointer called\n");
  VAR_2->virtual_frame_pointer (VAR_3, VAR_4, VAR_5);
}
