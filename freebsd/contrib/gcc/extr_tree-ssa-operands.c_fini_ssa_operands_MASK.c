
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssa_operand_memory_d {struct ssa_operand_memory_d* next; } ;
struct TYPE_2__ {int clobbered_vars; int static_write_clobbers_avoided; int static_read_clobbers_avoided; int unescapable_clobbers_avoided; int readonly_clobbers; int static_readonly_clobbers_avoided; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_2 (struct ssa_operand_memory_d*) ;
 int VAR_14 ;
 struct ssa_operand_memory_d* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_3 (void)
{
  struct ssa_operand_memory_d *VAR_18;
  FUNC_0 (VAR_17, VAR_14, VAR_1);
  FUNC_0 (VAR_17, VAR_14, VAR_2);
  FUNC_0 (VAR_17, VAR_14, VAR_4);
  FUNC_0 (VAR_17, VAR_14, VAR_3);
  FUNC_0 (VAR_17, VAR_14, VAR_5);
  VAR_9 = ((void*)0);
  VAR_12 = ((void*)0);
  VAR_13 = ((void*)0);
  VAR_10 = ((void*)0);
  VAR_11 = ((void*)0);
  while ((VAR_18 = VAR_15) != ((void*)0))
    {
      VAR_15 = VAR_15->next;
      FUNC_2 (VAR_18);
    }

  VAR_16 = 0;

  if (VAR_7 && (VAR_8 & VAR_0))
    {
      FUNC_1 (VAR_7, "Original clobbered vars:%d\n",
        VAR_6.clobbered_vars);
      FUNC_1 (VAR_7, "Static write clobbers avoided:%d\n",
        VAR_6.static_write_clobbers_avoided);
      FUNC_1 (VAR_7, "Static read clobbers avoided:%d\n",
        VAR_6.static_read_clobbers_avoided);
      FUNC_1 (VAR_7, "Unescapable clobbers avoided:%d\n",
        VAR_6.unescapable_clobbers_avoided);
      FUNC_1 (VAR_7, "Original read-only clobbers:%d\n",
        VAR_6.readonly_clobbers);
      FUNC_1 (VAR_7, "Static read-only clobbers avoided:%d\n",
        VAR_6.static_readonly_clobbers_avoided);
    }
}
