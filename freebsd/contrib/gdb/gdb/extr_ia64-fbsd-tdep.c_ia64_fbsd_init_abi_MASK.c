
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int find_global_pointer; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gdbarch*,int ) ;
 int FUNC_2 (struct gdbarch*,int ) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (struct gdbarch_info VAR_4, struct gdbarch *VAR_5)
{
  struct gdbarch_tdep *VAR_6 = FUNC_0 (VAR_5);

  FUNC_1 (VAR_5, VAR_0);
  FUNC_2 (VAR_5,
                                        VAR_1);
  FUNC_3 (VAR_5,
      VAR_3);
  VAR_6->find_global_pointer = VAR_2;
}
