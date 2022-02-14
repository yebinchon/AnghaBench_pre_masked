
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int plt_entry_size; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gdbarch*,int ) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,int ) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int *) ;
 int FUNC_6 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_7 (struct gdbarch_info VAR_4, struct gdbarch *VAR_5)
{
  struct gdbarch_tdep *VAR_6 = FUNC_1 (VAR_5);

  FUNC_3 (VAR_5, VAR_3);
  FUNC_0 (VAR_5, VAR_2);

  FUNC_6 (VAR_4, VAR_5);


  FUNC_2 (VAR_5, VAR_1);
  FUNC_4 (VAR_5, VAR_0);



  VAR_6->plt_entry_size = 16;


  FUNC_5 (VAR_5, ((void*)0));
}
