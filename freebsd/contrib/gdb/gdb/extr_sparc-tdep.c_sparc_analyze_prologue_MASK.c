
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_frame_cache {scalar_t__ frameless_p; } ;
struct gdbarch_tdep {scalar_t__ plt_entry_size; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int VAR_0 ;
 struct gdbarch_tdep* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 unsigned long FUNC_7 (scalar_t__) ;

CORE_ADDR
FUNC_8 (CORE_ADDR VAR_1, CORE_ADDR VAR_2,
   struct sparc_frame_cache *VAR_3)
{
  struct gdbarch_tdep *VAR_4 = FUNC_5 (VAR_0);
  unsigned long VAR_5;
  int VAR_6 = 0;
  int VAR_7 = -1;

  if (VAR_2 <= VAR_1)
    return VAR_2;
  if (VAR_4->plt_entry_size > 0 && FUNC_6 (VAR_2, ((void*)0)))
    VAR_1 = VAR_2 - ((VAR_2 - VAR_1) % VAR_4->plt_entry_size);

  VAR_5 = FUNC_7 (VAR_1);


  if (FUNC_1 (VAR_5) == 0 && FUNC_2 (VAR_5) == 0x04)
    {
      VAR_7 = FUNC_4 (VAR_5);
      VAR_6 += 4;

      VAR_5 = FUNC_7 (VAR_1 + 4);
    }


  if (FUNC_1 (VAR_5) == 2 && FUNC_0 (VAR_5)
      && (FUNC_4 (VAR_5) == 1 || FUNC_4 (VAR_5) == VAR_7))
    {
      VAR_6 += 4;

      VAR_5 = FUNC_7 (VAR_1 + 8);
    }


  if (FUNC_1 (VAR_5) == 2 && FUNC_3 (VAR_5) == 0x3c)
    {
      VAR_3->frameless_p = 0;
      return VAR_1 + VAR_6 + 4;
    }

  return VAR_1;
}
