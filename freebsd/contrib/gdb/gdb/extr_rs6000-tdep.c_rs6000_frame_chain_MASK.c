
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_info {int dummy; } ;
struct TYPE_2__ {int wordsize; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct frame_info*) ;
 scalar_t__ FUNC_7 (struct frame_info*) ;
 scalar_t__ FUNC_8 (struct frame_info*) ;
 struct frame_info* FUNC_9 (struct frame_info*) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;

CORE_ADDR
FUNC_11 (struct frame_info *VAR_3)
{
  CORE_ADDR VAR_4, VAR_5, VAR_6;
  int VAR_7 = FUNC_5 (VAR_2)->wordsize;

  if (FUNC_2 (FUNC_7 (VAR_3),
       FUNC_6 (VAR_3),
       FUNC_6 (VAR_3)))


    return FUNC_10 (FUNC_6 (VAR_3), VAR_7);

  if (FUNC_3 (FUNC_7 (VAR_3))
      || FUNC_7 (VAR_3) == FUNC_4 ())
    return 0;

  if ((FUNC_8 (VAR_3) == VAR_0))
    VAR_4 = FUNC_10 (FUNC_6 (VAR_3) + VAR_1,
      VAR_7);
  else if (FUNC_9 (VAR_3) != ((void*)0)
    && (FUNC_8 (FUNC_9 (VAR_3)) == VAR_0)
    && (FUNC_1 ()
        && FUNC_0 (VAR_3)))


    VAR_4 = FUNC_6 (VAR_3);
  else
    VAR_4 = FUNC_10 (FUNC_6 (VAR_3), VAR_7);
  return VAR_4;
}
