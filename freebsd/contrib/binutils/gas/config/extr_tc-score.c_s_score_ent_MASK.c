
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_5__ {int reg_mask; int reg_offset; int fpreg_mask; int leaf; int frame_offset; int frame_reg; int pc_reg; int * isym; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * FUNC_8 () ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ,int ) ;
 int VAR_11 ;
 TYPE_1__* FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (int VAR_12)
{
  symbolS *VAR_13;
  int VAR_14;

  VAR_13 = FUNC_8 ();
  if (*VAR_8 == ',')
    ++VAR_8;
  FUNC_1 ();
  if (FUNC_0 (*VAR_8) || *VAR_8 == '-')
    FUNC_7 ();







  if (VAR_9 != VAR_6 && VAR_9 != VAR_3)
    VAR_14 = 1;
  else
    VAR_14 = 0;

  if (!VAR_14)
    FUNC_4 (FUNC_3(".ent or .aent not in text section."));
  if (!VAR_12 && VAR_5)
    FUNC_4 (FUNC_3("missing .end"));
  if (!VAR_12)
    {
      VAR_5 = &VAR_4;
      VAR_5->reg_mask = 0xdeadbeaf;
      VAR_5->reg_offset = 0xdeadbeaf;
      VAR_5->fpreg_mask = 0xdeafbeaf;
      VAR_5->leaf = 0xdeafbeaf;
      VAR_5->frame_offset = 0xdeafbeaf;
      VAR_5->frame_reg = 0xdeafbeaf;
      VAR_5->pc_reg = 0xdeafbeaf;
      VAR_5->isym = VAR_13;
      FUNC_10 (VAR_13)->flags |= VAR_0;
      ++VAR_10;
      if (VAR_7 == VAR_1)
        FUNC_9 (FUNC_2 (VAR_13), FUNC_2 (VAR_13));
    }
  FUNC_6 ();
}
