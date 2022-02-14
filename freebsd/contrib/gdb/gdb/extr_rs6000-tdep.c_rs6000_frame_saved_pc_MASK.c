
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs6000_framedata {scalar_t__ lr_offset; } ;
struct gdbarch_tdep {int wordsize; scalar_t__ lr_frame_offset; int ppc_lr_regnum; } ;
struct frame_info {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct frame_info*,int ,int *) ;
 struct gdbarch_tdep* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct frame_info*) ;
 int FUNC_6 (struct frame_info*) ;
 int FUNC_7 (struct frame_info*) ;
 scalar_t__ FUNC_8 (struct frame_info*) ;
 struct frame_info* FUNC_9 (struct frame_info*) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,struct rs6000_framedata*) ;

CORE_ADDR
FUNC_13 (struct frame_info *VAR_5)
{
  CORE_ADDR VAR_6;
  struct rs6000_framedata VAR_7;
  struct gdbarch_tdep *VAR_8 = FUNC_4 (VAR_4);
  int VAR_9 = VAR_8->wordsize;

  if ((FUNC_8 (VAR_5) == VAR_1))
    return FUNC_10 (FUNC_5 (VAR_5) + VAR_3,
        VAR_9);

  if (FUNC_1 (FUNC_7 (VAR_5),
       FUNC_5 (VAR_5),
       FUNC_5 (VAR_5)))
    return FUNC_2 (FUNC_7 (VAR_5),
        FUNC_5 (VAR_5), VAR_0);

  VAR_6 = FUNC_6 (VAR_5);



  if (!VAR_6)
    return 0;

  (void) FUNC_12 (VAR_6, FUNC_7 (VAR_5), &VAR_7);

  if (VAR_7.lr_offset == 0 && FUNC_9 (VAR_5) != ((void*)0))
    {
      if ((FUNC_8 (FUNC_9 (VAR_5)) == VAR_1))
 return FUNC_10 ((FUNC_5 (FUNC_9 (VAR_5))
      + VAR_2),
     VAR_9);
      else if (FUNC_1 (FUNC_7 (FUNC_9 (VAR_5)), 0, 0))



 {
   ULONGEST VAR_10;
   FUNC_3 (FUNC_9 (VAR_5),
       VAR_8->ppc_lr_regnum, &VAR_10);
   return VAR_10;
 }
      else
 return FUNC_10 (FUNC_0 (VAR_5)
     + VAR_8->lr_frame_offset,
     VAR_9);
    }

  if (VAR_7.lr_offset == 0)
    return FUNC_11 (FUNC_4 (VAR_4)->ppc_lr_regnum);

  return FUNC_10 (FUNC_0 (VAR_5) + VAR_7.lr_offset,
      VAR_9);
}
