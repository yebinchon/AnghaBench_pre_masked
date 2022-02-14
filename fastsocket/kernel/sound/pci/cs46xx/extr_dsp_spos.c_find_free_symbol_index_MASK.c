
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nsymbols; int highest_frag_index; TYPE_1__* symbols; } ;
struct dsp_spos_instance {TYPE_2__ symbol_table; } ;
struct TYPE_3__ {scalar_t__ deleted; } ;



__attribute__((used)) static int FUNC_0 (struct dsp_spos_instance * VAR_0)
{
 int VAR_1 = VAR_0->symbol_table.nsymbols,VAR_2;

 for (VAR_2 = VAR_0->symbol_table.highest_frag_index; VAR_2 < VAR_0->symbol_table.nsymbols; ++VAR_2) {
  if (VAR_0->symbol_table.symbols[VAR_2].deleted) {
   VAR_1 = VAR_2;
   break;
  }
 }

 return VAR_1;
}
