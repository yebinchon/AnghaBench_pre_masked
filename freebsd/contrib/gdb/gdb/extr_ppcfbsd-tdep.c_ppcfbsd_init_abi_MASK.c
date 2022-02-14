
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int wordsize; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gdbarch*,int ) ;
 int FUNC_2 (struct gdbarch*,int) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int ) ;
 int FUNC_6 (struct gdbarch*,int ) ;
 int FUNC_7 (struct gdbarch*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8 (struct gdbarch_info VAR_8,
                  struct gdbarch *VAR_9)
{
  struct gdbarch_tdep *VAR_10 = FUNC_0 (VAR_9);


  FUNC_2 (VAR_9, 64);

  if (VAR_10->wordsize == 4)
    {
      FUNC_3 (VAR_9, VAR_3);
      FUNC_5 (VAR_9, VAR_5);
      FUNC_7 (VAR_9,
          VAR_6);
    }

  if (VAR_10->wordsize == 8)
    {
      FUNC_3 (VAR_9, VAR_1);
      FUNC_1
        (VAR_9, VAR_0);

      FUNC_6 (VAR_9, VAR_2);

      FUNC_7 (VAR_9,
          VAR_7);
    }

  FUNC_4 (VAR_9,
     VAR_4);
}
