
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct dwarf_expr_context {scalar_t__ in_reg; int get_tls_address; int get_frame_base; int read_mem; int (* read_reg ) (struct frame_info*,int ) ;struct frame_info* baton; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct dwarf_expr_context*,unsigned char*,int ) ;
 int FUNC_1 (struct dwarf_expr_context*,int ) ;
 int FUNC_2 (struct dwarf_expr_context*,int ) ;
 int FUNC_3 (struct dwarf_expr_context*) ;
 struct dwarf_expr_context* FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct frame_info*,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_6 (unsigned char *VAR_3, ULONGEST VAR_4,
    struct frame_info *VAR_5, CORE_ADDR VAR_6)
{
  struct dwarf_expr_context *VAR_7;
  CORE_ADDR VAR_8;

  VAR_7 = FUNC_4 ();
  VAR_7->baton = VAR_5;
  VAR_7->read_reg = FUNC_5;
  VAR_7->read_mem = VAR_2;
  VAR_7->get_frame_base = VAR_0;
  VAR_7->get_tls_address = VAR_1;

  FUNC_2 (VAR_7, VAR_6);
  FUNC_0 (VAR_7, VAR_3, VAR_4);
  VAR_8 = FUNC_1 (VAR_7, 0);

  if (VAR_7->in_reg)
    VAR_8 = FUNC_5 (VAR_5, VAR_8);

  FUNC_3 (VAR_7);

  return VAR_8;
}
