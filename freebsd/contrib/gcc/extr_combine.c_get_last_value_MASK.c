
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_10__ {TYPE_3__* next_bb; } ;
struct TYPE_9__ {scalar_t__ last_set_value; scalar_t__ last_set_label; int last_set; } ;
struct TYPE_7__ {TYPE_1__* rtl; } ;
struct TYPE_8__ {TYPE_2__ il; } ;
struct TYPE_6__ {int global_live_at_start; } ;


 TYPE_5__* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__*,int ,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static rtx
FUNC_13 (rtx VAR_6)
{
  unsigned int VAR_7;
  rtx VAR_8;




  if (FUNC_0 (VAR_6) == VAR_2
      && FUNC_12 (VAR_6)
      && (FUNC_2 (FUNC_1 (VAR_6))
   <= FUNC_2 (FUNC_1 (FUNC_8 (VAR_6))))
      && (VAR_8 = FUNC_13 (FUNC_8 (VAR_6))) != 0)
    return FUNC_10 (FUNC_1 (VAR_6), VAR_8);

  if (!FUNC_7 (VAR_6))
    return 0;

  VAR_7 = FUNC_4 (VAR_6);
  VAR_8 = VAR_4[VAR_7].last_set_value;
  if (VAR_8 == 0
      || (VAR_4[VAR_7].last_set_label != VAR_3
   && (VAR_7 < VAR_1
       || FUNC_6 (VAR_7) != 1
       || (FUNC_5
    (VAR_0->next_bb->il.rtl->global_live_at_start,
     VAR_7)))))
    return 0;



  if (FUNC_3 (VAR_4[VAR_7].last_set) >= VAR_5)
    return 0;


  if (FUNC_11 (&VAR_8, VAR_4[VAR_7].last_set,
          VAR_4[VAR_7].last_set_label, 0))
    return VAR_8;




  VAR_8 = FUNC_9 (VAR_8);
  if (FUNC_11 (&VAR_8, VAR_4[VAR_7].last_set,
          VAR_4[VAR_7].last_set_label, 1))
    return VAR_8;

  return 0;
}
