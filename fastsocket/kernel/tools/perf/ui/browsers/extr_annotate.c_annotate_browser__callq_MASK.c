
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int name; } ;
struct map_symbol {TYPE_4__* map; struct symbol* sym; } ;
struct hist_browser_timer {int dummy; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_1__ target; } ;
struct disasm_line {TYPE_2__ ops; int ins; } ;
struct annotation {int lock; int * src; } ;
struct TYPE_9__ {struct map_symbol* priv; } ;
struct annotate_browser {TYPE_3__ b; struct disasm_line* selection; } ;
struct TYPE_10__ {int (* map_ip ) (TYPE_4__*,int ) ;} ;


 int FUNC_0 (int ) ;
 struct symbol* FUNC_1 (TYPE_4__*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (struct symbol*) ;
 struct annotation* FUNC_6 (struct symbol*) ;
 int FUNC_7 (struct symbol*,TYPE_4__*,int,struct hist_browser_timer*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static bool FUNC_11(struct annotate_browser *VAR_0, int VAR_1,
        struct hist_browser_timer *VAR_2)
{
 struct map_symbol *VAR_3 = VAR_0->b.priv;
 struct disasm_line *VAR_4 = VAR_0->selection;
 struct symbol *VAR_5 = VAR_3->sym;
 struct annotation *VAR_6;
 struct symbol *VAR_7;
 u64 VAR_8;

 if (!FUNC_0(VAR_4->ins))
  return 0;

 VAR_8 = VAR_3->map->map_ip(VAR_3->map, VAR_4->ops.target.addr);
 VAR_7 = FUNC_1(VAR_3->map, VAR_8, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  FUNC_10("The called function was not found.");
  return 1;
 }

 VAR_6 = FUNC_6(VAR_7);
 FUNC_2(&VAR_6->lock);

 if (VAR_6->src == ((void*)0) && FUNC_5(VAR_7) < 0) {
  FUNC_3(&VAR_6->lock);
  FUNC_8("Not enough memory for annotating '%s' symbol!\n",
       VAR_7->name);
  return 1;
 }

 FUNC_3(&VAR_6->lock);
 FUNC_7(VAR_7, VAR_3->map, VAR_1, VAR_2);
 FUNC_9(&VAR_0->b, VAR_5->name);
 return 1;
}
