
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int name; } ;
struct perf_top {struct hist_entry* sym_filter_entry; } ;
struct map {TYPE_2__* dso; } ;
struct TYPE_3__ {struct map* map; struct symbol* sym; } ;
struct hist_entry {TYPE_1__ ms; } ;
struct annotation {int lock; int * src; } ;
struct TYPE_4__ {scalar_t__ symtab_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct symbol*) ;
 int FUNC_5 (struct symbol*,struct map*,int ) ;
 struct annotation* FUNC_6 (struct symbol*) ;

__attribute__((used)) static int FUNC_7(struct perf_top *VAR_1, struct hist_entry *VAR_2)
{
 struct symbol *VAR_3;
 struct annotation *VAR_4;
 struct map *VAR_5;
 int VAR_6 = -1;

 if (!VAR_2 || !VAR_2->ms.sym)
  return -1;

 VAR_3 = VAR_2->ms.sym;
 VAR_5 = VAR_2->ms.map;




 if (VAR_5->dso->symtab_type == VAR_0) {
  FUNC_0("Can't annotate %s: No vmlinux file was found in the "
         "path\n", VAR_3->name);
  FUNC_3(1);
  return -1;
 }

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4->src != ((void*)0)) {
  FUNC_1(&VAR_4->lock);
  goto out_assign;
 }

 FUNC_1(&VAR_4->lock);

 if (FUNC_4(VAR_3) < 0) {
  FUNC_2(&VAR_4->lock);
  FUNC_0("Not enough memory for annotating '%s' symbol!\n",
         VAR_3->name);
  FUNC_3(1);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_5, 0);
 if (VAR_6 == 0) {
out_assign:
  VAR_1->sym_filter_entry = VAR_2;
 }

 FUNC_2(&VAR_4->lock);
 return VAR_6;
}
