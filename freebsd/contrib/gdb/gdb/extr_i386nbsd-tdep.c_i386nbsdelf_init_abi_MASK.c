
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int struct_return; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int VAR_0 ;
 int FUNC_1 (struct gdbarch_info,struct gdbarch*) ;
 int FUNC_2 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_1 ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5 (struct gdbarch_info VAR_3, struct gdbarch *VAR_4)
{
  struct gdbarch_tdep *VAR_5 = FUNC_0 (VAR_4);


  FUNC_2 (VAR_3, VAR_4);


  FUNC_1 (VAR_3, VAR_4);


  FUNC_3
    (VAR_4, VAR_0);
  FUNC_4
    (VAR_4, VAR_2);


  VAR_5->struct_return = VAR_1;
}
