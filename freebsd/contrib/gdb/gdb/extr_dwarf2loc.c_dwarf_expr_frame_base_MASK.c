
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct dwarf_expr_baton {int frame; } ;
struct dwarf2_loclist_baton {int dummy; } ;
struct dwarf2_locexpr_baton {size_t size; unsigned char* data; } ;


 void* FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 int * FUNC_2 (struct symbol*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 unsigned char* FUNC_4 (struct dwarf2_loclist_baton*,size_t*,int ) ;
 struct symbol* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (void *VAR_1, unsigned char **VAR_2, size_t * VAR_3)
{



  struct symbol *VAR_4;
  struct dwarf_expr_baton *VAR_5 = (struct dwarf_expr_baton *) VAR_1;

  VAR_4 = FUNC_5 (VAR_5->frame);

  if (FUNC_2 (VAR_4) == &VAR_0)
    {
      struct dwarf2_loclist_baton *VAR_6;
      VAR_6 = FUNC_0 (VAR_4);
      *VAR_2 = FUNC_4 (VAR_6, VAR_3,
      FUNC_6 (VAR_5->frame));
    }
  else
    {
      struct dwarf2_locexpr_baton *VAR_7;
      VAR_7 = FUNC_0 (VAR_4);
      *VAR_3 = VAR_7->size;
      *VAR_2 = VAR_7->data;
    }

  if (*VAR_2 == ((void*)0))
    FUNC_3 ("Could not find the frame base for \"%s\".",
    FUNC_1 (VAR_4));
}
