
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int unw_word_t ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct TYPE_5__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ unw_save_loc_t ;
typedef scalar_t__ unw_regnum_t ;
typedef int unw_fpreg_t ;
typedef int unw_cursor_t ;
struct libunwind_frame_cache {int cursor; } ;
struct libunwind_descr {scalar_t__ (* gdb2uw ) (int) ;scalar_t__ (* is_fpreg ) (scalar_t__) ;} ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;





 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct frame_info*) ;
 struct libunwind_descr* FUNC_3 (int ) ;
 struct libunwind_frame_cache* FUNC_4 (struct frame_info*,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (void*,void*,int ) ;
 int FUNC_6 (void*,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_10 (int *,scalar_t__,int *) ;
 int FUNC_11 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,TYPE_2__*) ;

void
FUNC_13 (struct frame_info *VAR_5, void **VAR_6,
          int VAR_7, int *VAR_8,
          enum lval_type *VAR_9, CORE_ADDR *VAR_10,
          int *VAR_11, void *VAR_12)
{
  struct libunwind_frame_cache *VAR_13 =
    FUNC_4 (VAR_5, VAR_6);

  void *VAR_14;
  unw_cursor_t *VAR_15;
  unw_save_loc_t VAR_16;
  int VAR_17, VAR_18;
  unw_word_t VAR_19;
  unw_fpreg_t VAR_20;
  unw_regnum_t VAR_21;
  struct libunwind_descr *VAR_22;


  VAR_22 = FUNC_3 (FUNC_2 (VAR_5));
  VAR_21 = VAR_22->gdb2uw (VAR_7);

  FUNC_1 (VAR_7 >= 0);

  if (!VAR_4)
    FUNC_0 ("No registers.");

  *VAR_8 = 0;
  *VAR_10 = 0;
  *VAR_9 = VAR_3;
  *VAR_11 = -1;

  FUNC_6 (VAR_12, 0, FUNC_7 (VAR_0, VAR_7));

  if (VAR_21 < 0)
    return;




  if (VAR_22->is_fpreg (VAR_21))
    {
      VAR_18 = FUNC_10 (&VAR_13->cursor, VAR_21, &VAR_20);
      VAR_14 = &VAR_20;
    }
  else
    {
      VAR_18 = FUNC_11 (&VAR_13->cursor, VAR_21, &VAR_19);
      VAR_14 = &VAR_19;
    }

  if (VAR_18 < 0)
    return;

  FUNC_5 (VAR_12, VAR_14, FUNC_7 (VAR_0, VAR_7));

  if (FUNC_12 (&VAR_13->cursor, VAR_21, &VAR_16) < 0)
    return;

  switch (VAR_16.type)
    {
    case 129:
      *VAR_8 = 1;
      break;

    case 130:
      *VAR_9 = VAR_1;
      *VAR_10 = VAR_16.u.addr;
      break;

    case 128:
      *VAR_9 = VAR_2;
      *VAR_11 = VAR_7;
      break;
    }
}
