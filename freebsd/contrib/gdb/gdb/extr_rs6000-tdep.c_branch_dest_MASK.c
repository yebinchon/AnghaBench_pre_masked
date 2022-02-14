
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_info {int dummy; } ;
struct TYPE_2__ {int ppc_lr_regnum; int ppc_ctr_regnum; int wordsize; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 struct frame_info* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct frame_info*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (int VAR_3, int VAR_4, CORE_ADDR VAR_5, CORE_ADDR VAR_6)
{
  CORE_ADDR VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;

  VAR_9 = (int) ((VAR_4 >> 1) & 1);

  switch (VAR_3)
    {
    case 18:
      VAR_8 = ((VAR_4 & ~3) << 6) >> 6;
      if (VAR_9)
 VAR_7 = VAR_8;
      else
 VAR_7 = VAR_5 + VAR_8;
      break;

    case 16:
      VAR_8 = ((VAR_4 & ~3) << 16) >> 16;
      if (VAR_9)
 VAR_7 = VAR_8;
      else
 VAR_7 = VAR_5 + VAR_8;
      break;

    case 19:
      VAR_10 = (VAR_4 >> 1) & 0x3ff;

      if (VAR_10 == 16)
 {
          VAR_7 = FUNC_4 (FUNC_0 (VAR_2)->ppc_lr_regnum) & ~3;





   if (VAR_7 < VAR_1)
     {
       struct frame_info *VAR_11;

       VAR_11 = FUNC_1 ();
       if (VAR_11 != ((void*)0))
  VAR_7 = FUNC_3 (FUNC_2 (VAR_11) + VAR_0,
      FUNC_0 (VAR_2)->wordsize);
     }
 }

      else if (VAR_10 == 528)
 {
          VAR_7 = FUNC_4 (FUNC_0 (VAR_2)->ppc_ctr_regnum) & ~3;




   if (VAR_7 < VAR_1)
            VAR_7 = FUNC_4 (FUNC_0 (VAR_2)->ppc_lr_regnum) & ~3;
 }
      else
 return -1;
      break;

    default:
      return -1;
    }
  return (VAR_7 < VAR_1) ? VAR_6 : VAR_7;
}
