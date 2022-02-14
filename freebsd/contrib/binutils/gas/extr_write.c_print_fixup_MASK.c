
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long fx_pcrel_adjust; long fx_im_disp; int fx_size; int fx_r_type; scalar_t__ fx_subsy; scalar_t__ fx_addsy; scalar_t__ fx_addnumber; scalar_t__ fx_offset; scalar_t__ fx_where; scalar_t__ fx_frag; scalar_t__ fx_done; scalar_t__ fx_tcbit; scalar_t__ fx_pcrel; int fx_line; int fx_file; } ;
typedef TYPE_1__ fixS ;


 int FUNC_0 (int ,TYPE_1__*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;

void
FUNC_4 (fixS *VAR_2)
{
  VAR_0 = 1;
  FUNC_2 (VAR_1, "fix %lx %d:%d", (long) VAR_2, VAR_2->fx_file, VAR_2->fx_line);
  if (VAR_2->fx_pcrel)
    FUNC_2 (VAR_1, " pcrel");
  if (VAR_2->fx_pcrel_adjust)
    FUNC_2 (VAR_1, " pcrel_adjust=%ld", VAR_2->fx_pcrel_adjust);
  if (VAR_2->fx_im_disp)
    {



      FUNC_2 (VAR_1, " im_disp");

    }
  if (VAR_2->fx_tcbit)
    FUNC_2 (VAR_1, " tcbit");
  if (VAR_2->fx_done)
    FUNC_2 (VAR_1, " done");
  FUNC_2 (VAR_1, "\n    size=%d frag=%lx where=%ld offset=%lx addnumber=%lx",
    VAR_2->fx_size, (long) VAR_2->fx_frag, (long) VAR_2->fx_where,
    (long) VAR_2->fx_offset, (long) VAR_2->fx_addnumber);
  FUNC_2 (VAR_1, "\n    %s (%d)", FUNC_1 (VAR_2->fx_r_type),
    VAR_2->fx_r_type);
  if (VAR_2->fx_addsy)
    {
      FUNC_2 (VAR_1, "\n   +<");
      FUNC_3 (VAR_1, VAR_2->fx_addsy);
      FUNC_2 (VAR_1, ">");
    }
  if (VAR_2->fx_subsy)
    {
      FUNC_2 (VAR_1, "\n   -<");
      FUNC_3 (VAR_1, VAR_2->fx_subsy);
      FUNC_2 (VAR_1, ">");
    }
  FUNC_2 (VAR_1, "\n");



}
