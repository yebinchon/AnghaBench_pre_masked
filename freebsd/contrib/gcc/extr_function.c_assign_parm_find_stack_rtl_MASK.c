
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {unsigned int boundary; scalar_t__ where_pad; int offset; int slot_offset; } ;
struct assign_parm_data_one {scalar_t__ stack_parm; scalar_t__ entry_parm; TYPE_1__ locate; int promoted_mode; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (tree VAR_6, struct assign_parm_data_one *VAR_7)
{
  rtx VAR_8, VAR_9;
  unsigned int VAR_10, VAR_11;



  if (VAR_7->entry_parm)
    VAR_8 = FUNC_0 (VAR_7->locate.slot_offset);
  else
    VAR_8 = FUNC_0 (VAR_7->locate.offset);

  VAR_9 = VAR_4;
  if (VAR_8 != VAR_3)
    VAR_9 = FUNC_4 (VAR_2, VAR_9, VAR_8);
  VAR_9 = FUNC_3 (VAR_7->promoted_mode, VAR_9);

  FUNC_6 (VAR_9, VAR_6, 1);

  VAR_11 = VAR_7->locate.boundary;
  VAR_10 = VAR_0;





  if (VAR_7->locate.where_pad != VAR_5 || VAR_7->entry_parm)
    VAR_10 = VAR_11;
  else if (FUNC_1 (VAR_8) == VAR_1)
    {
      VAR_10 = FUNC_2 (VAR_8) * VAR_0 | VAR_11;
      VAR_10 = VAR_10 & -VAR_10;
    }
  FUNC_5 (VAR_9, VAR_10);

  if (VAR_7->entry_parm)
    FUNC_7 (VAR_7->entry_parm, VAR_9);

  VAR_7->stack_parm = VAR_9;
}
