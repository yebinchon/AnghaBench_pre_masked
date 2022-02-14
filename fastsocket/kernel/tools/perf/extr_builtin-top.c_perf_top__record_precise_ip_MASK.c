
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
struct perf_top {TYPE_2__* sym_filter_entry; } ;
struct TYPE_9__ {TYPE_4__* map; struct symbol* sym; } ;
struct hist_entry {TYPE_3__ ms; } ;
struct annotation {int lock; int * src; } ;
struct TYPE_10__ {int erange_warned; int (* map_ip ) (TYPE_4__*,int ) ;} ;
struct TYPE_7__ {struct symbol* sym; } ;
struct TYPE_8__ {TYPE_1__ ms; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (struct symbol*) ;
 struct annotation* FUNC_6 (struct symbol*) ;
 int FUNC_7 (struct symbol*,TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,struct symbol*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(struct perf_top *VAR_2,
     struct hist_entry *VAR_3,
     int VAR_4, u64 VAR_5)
{
 struct annotation *VAR_6;
 struct symbol *VAR_7;
 int VAR_8;

 if (VAR_3 == ((void*)0) || VAR_3->ms.sym == ((void*)0) ||
     ((VAR_2->sym_filter_entry == ((void*)0) ||
       VAR_2->sym_filter_entry->ms.sym != VAR_3->ms.sym) && VAR_1 != 1))
  return;

 VAR_7 = VAR_3->ms.sym;
 VAR_6 = FUNC_6(VAR_7);

 if (FUNC_1(&VAR_6->lock))
  return;

 if (VAR_6->src == ((void*)0) && FUNC_5(VAR_7) < 0) {
  FUNC_2(&VAR_6->lock);
  FUNC_0("Not enough memory for annotating '%s' symbol!\n",
         VAR_7->name);
  FUNC_3(1);
  return;
 }

 VAR_5 = VAR_3->ms.map->map_ip(VAR_3->ms.map, VAR_5);
 VAR_8 = FUNC_7(VAR_7, VAR_3->ms.map, VAR_4, VAR_5);

 FUNC_2(&VAR_6->lock);

 if (VAR_8 == -VAR_0 && !VAR_3->ms.map->erange_warned)
  FUNC_8(VAR_3->ms.map, VAR_7, VAR_5);
}
