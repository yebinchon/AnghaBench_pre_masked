
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct needs_frame_baton {scalar_t__ needs_frame; } ;
struct dwarf_expr_context {int in_reg; scalar_t__ num_pieces; TYPE_1__* pieces; int get_tls_address; int get_frame_base; int read_mem; int read_reg; struct needs_frame_baton* baton; } ;
struct TYPE_2__ {scalar_t__ in_reg; } ;


 int FUNC_0 (struct dwarf_expr_context*,unsigned char*,unsigned short) ;
 int FUNC_1 (struct dwarf_expr_context*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dwarf_expr_context* FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (unsigned char *VAR_4, unsigned short VAR_5)
{
  struct needs_frame_baton VAR_6;
  struct dwarf_expr_context *VAR_7;
  int VAR_8;

  VAR_6.needs_frame = 0;

  VAR_7 = FUNC_2 ();
  VAR_7->baton = &VAR_6;
  VAR_7->read_reg = VAR_2;
  VAR_7->read_mem = VAR_1;
  VAR_7->get_frame_base = VAR_0;
  VAR_7->get_tls_address = VAR_3;

  FUNC_0 (VAR_7, VAR_4, VAR_5);

  VAR_8 = VAR_7->in_reg;

  if (VAR_7->num_pieces > 0)
    {
      int VAR_9;



      for (VAR_9 = 0; VAR_9 < VAR_7->num_pieces; VAR_9++)
        if (VAR_7->pieces[VAR_9].in_reg)
          VAR_8 = 1;
    }

  FUNC_1 (VAR_7);

  return VAR_6.needs_frame || VAR_8;
}
