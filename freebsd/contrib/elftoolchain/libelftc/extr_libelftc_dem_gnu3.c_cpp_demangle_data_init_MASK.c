
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * container; } ;
struct cpp_demangle_data {int mem_rst; int mem_vat; int mem_cst; int mem_ref; int mem_rref; int is_tmpl; int is_functype; int ref_qualifier; char const* cur; TYPE_1__ output; TYPE_1__ subst; TYPE_1__ tmpl; TYPE_1__ class_type; int * last_sname; TYPE_1__* cur_output; scalar_t__ func_type; int push_qualifier; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct cpp_demangle_data *VAR_1, const char *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (0);

 if (!FUNC_3(&VAR_1->output))
  return (0);
 if (!FUNC_3(&VAR_1->subst))
  goto clean1;
 if (!FUNC_3(&VAR_1->tmpl))
  goto clean2;
 if (!FUNC_3(&VAR_1->class_type))
  goto clean3;
 if (!FUNC_1(&VAR_1->cmd))
  goto clean4;

 FUNC_0(VAR_1->output.container != ((void*)0));
 FUNC_0(VAR_1->subst.container != ((void*)0));
 FUNC_0(VAR_1->tmpl.container != ((void*)0));
 FUNC_0(VAR_1->class_type.container != ((void*)0));

 VAR_1->mem_rst = 0;
 VAR_1->mem_vat = 0;
 VAR_1->mem_cst = 0;
 VAR_1->mem_ref = 0;
 VAR_1->mem_rref = 0;
 VAR_1->is_tmpl = 0;
 VAR_1->is_functype = 0;
 VAR_1->ref_qualifier = 0;
 VAR_1->push_qualifier = VAR_0;
 VAR_1->func_type = 0;
 VAR_1->cur = VAR_2;
 VAR_1->cur_output = &VAR_1->output;
 VAR_1->last_sname = ((void*)0);

 return (1);

clean4:
 FUNC_2(&VAR_1->class_type);
clean3:
 FUNC_2(&VAR_1->tmpl);
clean2:
 FUNC_2(&VAR_1->subst);
clean1:
 FUNC_2(&VAR_1->output);

 return (0);
}
