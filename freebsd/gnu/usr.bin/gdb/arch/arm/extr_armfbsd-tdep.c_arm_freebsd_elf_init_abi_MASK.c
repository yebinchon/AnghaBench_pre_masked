
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int fp_model; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gdbarch_info,struct gdbarch*) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,int ) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4 (struct gdbarch_info VAR_3,
    struct gdbarch *VAR_4)
{
  struct gdbarch_tdep *VAR_5 = FUNC_1 (VAR_4);

  FUNC_0 (VAR_3, VAR_4);


  FUNC_2
    (VAR_4, VAR_1);
  FUNC_3
    (VAR_4, VAR_2);

  VAR_5->fp_model = VAR_0;
}
