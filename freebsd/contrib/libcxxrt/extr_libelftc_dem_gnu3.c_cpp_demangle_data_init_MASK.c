
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * container; } ;
struct cpp_demangle_data {int paren; int pfirst; int mem_rst; int mem_vat; int mem_cst; char const* cur; TYPE_1__ output; TYPE_1__ output_tmp; TYPE_1__ subst; TYPE_1__ tmpl; TYPE_1__ class_type; scalar_t__ push_head; int * last_sname; scalar_t__ func_type; int cmd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct cpp_demangle_data *VAR_0, const char *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if (!FUNC_3(&VAR_0->output))
  return (0);
 if (!FUNC_3(&VAR_0->output_tmp))
  goto clean1;
 if (!FUNC_3(&VAR_0->subst))
  goto clean2;
 if (!FUNC_3(&VAR_0->tmpl))
  goto clean3;
 if (!FUNC_3(&VAR_0->class_type))
  goto clean4;
 if (!FUNC_1(&VAR_0->cmd))
  goto clean5;

 FUNC_0(VAR_0->output.container != ((void*)0));
 FUNC_0(VAR_0->output_tmp.container != ((void*)0));
 FUNC_0(VAR_0->subst.container != ((void*)0));
 FUNC_0(VAR_0->tmpl.container != ((void*)0));
 FUNC_0(VAR_0->class_type.container != ((void*)0));

 VAR_0->paren = 0;
 VAR_0->pfirst = 0;
 VAR_0->mem_rst = 0;
 VAR_0->mem_vat = 0;
 VAR_0->mem_cst = 0;
 VAR_0->func_type = 0;
 VAR_0->cur = VAR_1;
 VAR_0->last_sname = ((void*)0);
 VAR_0->push_head = 0;

 return (1);

clean5:
 FUNC_2(&VAR_0->class_type);
clean4:
 FUNC_2(&VAR_0->tmpl);
clean3:
 FUNC_2(&VAR_0->subst);
clean2:
 FUNC_2(&VAR_0->output_tmp);
clean1:
 FUNC_2(&VAR_0->output);

 return (0);
}
